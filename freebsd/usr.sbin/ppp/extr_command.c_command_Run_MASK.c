
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int dummy; } ;
struct datalink {int dummy; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bundle*,int ,int,int ,char const* const*,struct prompt*,struct datalink*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const* const*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,char const* const,int) ;

void
FUNC_7(struct bundle *VAR_3, int VAR_4, char const *const *VAR_5,
           struct prompt *VAR_6, const char *VAR_7, struct datalink *VAR_8)
{
  if (VAR_4 > 0) {
    if (FUNC_2(VAR_2)) {
      char VAR_9[VAR_1];
      int VAR_10;
      size_t VAR_11;

      if (VAR_7) {
        FUNC_6(VAR_9, VAR_7, sizeof VAR_9 - 3);
        VAR_9[sizeof VAR_9 - 3] = '\0';
        FUNC_4(VAR_9, ": ");
        VAR_11 = FUNC_5(VAR_9);
      } else {
        *VAR_9 = '\0';
        VAR_11 = 0;
      }
      VAR_9[sizeof VAR_9 - 1] = '\0';

      for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        if (VAR_11 < sizeof VAR_9 - 1 && VAR_10)
          VAR_9[VAR_11++] = ' ';
        if (FUNC_1(VAR_5, VAR_10))
          FUNC_6(VAR_9+VAR_11, "********", sizeof VAR_9 - VAR_11 - 1);
        else
          FUNC_6(VAR_9+VAR_11, VAR_5[VAR_10], sizeof VAR_9 - VAR_11 - 1);
        VAR_11 += FUNC_5(VAR_9+VAR_11);
      }
      FUNC_3(VAR_2, "%s\n", VAR_9);
    }
    FUNC_0(VAR_3, VAR_0, VAR_4, 0, VAR_5, VAR_6, VAR_8);
  }
}
