
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct mbuf {int m_len; struct mbuf* m_next; } ;


 char* FUNC_0 (struct mbuf const*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (char*,char*,int) ;

void
FUNC_6(int VAR_0, const char *VAR_1, const struct mbuf *VAR_2)
{
  if (FUNC_2(VAR_0)) {
    char VAR_3[68];
    char *VAR_4, *VAR_5;
    const u_char *VAR_6;
    int VAR_7;

    if (VAR_1 && *VAR_1)
      FUNC_3(VAR_0, "%s\n", VAR_1);

    VAR_4 = VAR_3;
    VAR_5 = VAR_4 + 50;
    do {
      VAR_7 = VAR_2->m_len;
      VAR_6 = FUNC_0(VAR_2);
      while (VAR_7--) {
 FUNC_5(VAR_4, " %02x", (int) *VAR_6);
        *VAR_5++ = FUNC_1(*VAR_6) ? *VAR_6 : '.';
        VAR_6++;
        VAR_4 += 3;
        if (VAR_4 == VAR_3 + 48) {
          FUNC_4(VAR_4, ' ', 2);
          *VAR_5 = '\0';
          FUNC_3(VAR_0, "%s\n", VAR_3);
          VAR_4 = VAR_3;
          VAR_5 = VAR_4 + 50;
        }
      }
    } while ((VAR_2 = VAR_2->m_next) != ((void*)0));

    if (VAR_4 > VAR_3) {
      FUNC_4(VAR_4, ' ', 50 - (VAR_4 - VAR_3));
      *VAR_5 = '\0';
      FUNC_3(VAR_0, "%s\n", VAR_3);
    }
  }
}
