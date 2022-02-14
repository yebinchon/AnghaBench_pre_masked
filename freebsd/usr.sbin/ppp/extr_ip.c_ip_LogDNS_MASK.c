
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_short ;
typedef char u_char ;
struct udphdr {char uh_ulen; } ;
struct dns_header {scalar_t__ opcode; scalar_t__ qr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*,char const*,char const*,char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const) ;

__attribute__((used)) static void
FUNC_6(const struct udphdr *VAR_3, const char *VAR_4)
{
  struct dns_header VAR_5;
  const u_short *VAR_6;
  const u_char *VAR_7;
  u_short *VAR_8, VAR_9;
  unsigned VAR_10;

  VAR_7 = (const char *)VAR_3 + sizeof *VAR_3;
  VAR_10 = FUNC_5(VAR_3->uh_ulen) - sizeof *VAR_3;
  if (VAR_10 < sizeof VAR_5 + 5)
    return;

  VAR_6 = (const u_short *)VAR_7;
  VAR_8 = (u_short *)&VAR_5;
  VAR_7 += sizeof VAR_5;
  VAR_10 -= sizeof VAR_5;

  while (VAR_6 < (const u_short *)VAR_7) {
    *VAR_8++ = FUNC_5(*VAR_6);
    VAR_6++;
  }

  if (VAR_5.opcode == VAR_2 && VAR_5.qr == 0) {

    char VAR_11[VAR_1 + 1], *VAR_12;
    const char *VAR_13, *VAR_14;
    const u_char *VAR_15;

    VAR_12 = VAR_11;
    VAR_15 = VAR_7 + VAR_10 - 4;
    if (VAR_15 - VAR_7 >= (int)sizeof VAR_11)
      VAR_15 = VAR_7 + sizeof VAR_11 - 1;
    while (VAR_7 < VAR_15) {
      VAR_10 = *VAR_7++;
      if ((int)VAR_10 > VAR_15 - VAR_7)
        VAR_10 = VAR_15 - VAR_7;
      if (VAR_12 != VAR_11)
        *VAR_12++ = '.';
      FUNC_4(VAR_12, VAR_7, VAR_10);
      VAR_7 += VAR_10;
      VAR_12 += VAR_10;
    }
    *VAR_12 = '\0';

    if (FUNC_2(VAR_0)) {
      FUNC_4(&VAR_9, VAR_15, sizeof VAR_9);
      VAR_13 = FUNC_1(FUNC_5(VAR_9));
      FUNC_4(&VAR_9, VAR_15 + 2, sizeof VAR_9);
      VAR_14 = FUNC_0(FUNC_5(VAR_9));

      FUNC_3(VAR_0, "%sbound query %s %s %s\n",
                 VAR_4, VAR_14, VAR_13, VAR_11);
    }
  }
}
