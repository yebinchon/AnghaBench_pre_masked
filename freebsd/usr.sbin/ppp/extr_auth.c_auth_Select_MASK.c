
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {scalar_t__ valid; TYPE_4__ ip; TYPE_1__ mask; } ;
struct TYPE_6__ {int ipcp; } ;
struct bundle {TYPE_3__ radius; TYPE_2__ ncp; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char**,int ,int ) ;
 int * FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char**) ;
 int FUNC_4 (struct bundle*,char*) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct bundle*,TYPE_4__) ;
 int FUNC_8 (struct bundle*,char*,int) ;
 int FUNC_9 (int ,char*,int ,int) ;
 int FUNC_10 (char**,char,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char const*,char) ;

int
FUNC_15(struct bundle *VAR_6, const char *VAR_7)
{
  FILE *VAR_8;
  int VAR_9, VAR_10;
  char *VAR_11[5], VAR_12[VAR_1];
  const char *VAR_13;

  if (*VAR_7 == '\0') {
    FUNC_6(&VAR_6->ncp.ipcp, VAR_0);
    return 1;
  }


  if (VAR_6->radius.valid && VAR_6->radius.ip.s_addr != VAR_0 &&
 VAR_6->radius.ip.s_addr != VAR_4) {

    if (!FUNC_7(VAR_6, VAR_6->radius.ip))
      return 0;
    FUNC_6(&VAR_6->ncp.ipcp, VAR_6->radius.mask.s_addr);

  }


  VAR_8 = FUNC_2(VAR_5);
  if (VAR_8 != ((void*)0)) {
again:
    VAR_10 = 0;
    while (FUNC_5(VAR_12, sizeof VAR_12, VAR_8)) {
      VAR_10++;
      if (VAR_12[0] == '#')
        continue;
      VAR_12[FUNC_13(VAR_12) - 1] = '\0';
      FUNC_10(VAR_11, '\0', sizeof VAR_11);
      if ((VAR_9 = FUNC_1(VAR_12, VAR_11, FUNC_3(VAR_11), VAR_3)) < 0)
        FUNC_9(VAR_2, "%s: %d: Invalid line\n", VAR_5, VAR_10);
      if (VAR_9 < 2)
        continue;
      if (FUNC_12(VAR_11[0], VAR_7) == 0) {
        FUNC_0(VAR_8);

        if (!VAR_6->radius.valid || VAR_6->radius.ip.s_addr == VAR_0) {

          if (VAR_9 > 2 && *VAR_11[2] && FUNC_12(VAR_11[2], "*") &&
              !FUNC_8(VAR_6, VAR_11[2], 1))
            return 0;
          FUNC_6(&VAR_6->ncp.ipcp, VAR_0);

        }

        if (VAR_9 > 3 && *VAR_11[3] && FUNC_12(VAR_11[3], "*"))
          FUNC_4(VAR_6, VAR_11[3]);
        return 1;
      }
    }

    if ((VAR_13 = FUNC_14(VAR_7, '\\')) != ((void*)0) && VAR_13[1]) {

      VAR_7 = VAR_13 + 1;
      FUNC_11(VAR_8);
      goto again;
    }

    FUNC_0(VAR_8);
  }



  FUNC_6(&VAR_6->ncp.ipcp, VAR_0);
  return 1;
}
