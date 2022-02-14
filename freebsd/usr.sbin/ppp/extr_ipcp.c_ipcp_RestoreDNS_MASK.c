
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resolv; scalar_t__ resolver; } ;
struct ipcp {TYPE_1__ ns; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ,long,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int) ;

void
FUNC_7(struct ipcp *VAR_5)
{
  if (VAR_5->ns.resolver) {
    ssize_t VAR_6, VAR_7;
    int VAR_8;

    if ((VAR_8 = FUNC_0(VAR_3, VAR_2|VAR_1, 0644)) != -1) {
      VAR_7 = FUNC_5(VAR_5->ns.resolv);
      if ((VAR_6 = FUNC_6(VAR_8, VAR_5->ns.resolv, VAR_7)) != VAR_7) {
        if (VAR_6 == -1)
          FUNC_2(VAR_0, "Failed rewriting %s: write: %s\n",
                     VAR_3, FUNC_4(VAR_4));
        else
          FUNC_2(VAR_0, "Failed rewriting %s: wrote %ld of %ld\n",
                     VAR_3, (long)VAR_6, (long)VAR_7);
      }
      FUNC_1(VAR_8);
    } else
      FUNC_2(VAR_0, "Failed rewriting %s: open: %s\n", VAR_3,
                 FUNC_4(VAR_4));
  } else if (FUNC_3(VAR_3) == -1)
    FUNC_2(VAR_0, "Failed removing %s: %s\n", VAR_3,
               FUNC_4(VAR_4));

}
