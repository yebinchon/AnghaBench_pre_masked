
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int printer; int lp; scalar_t__ rw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct printer const*,char*,int ) ;
 int FUNC_5 (struct printer const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_8(const struct printer *VAR_6)
{
 register int VAR_7;

 for (VAR_7 = 1; ; VAR_7 = VAR_7 < 32 ? VAR_7 << 1 : VAR_7) {
  VAR_5 = FUNC_3(VAR_6->lp, VAR_6->rw ? VAR_2 : VAR_3);
  if (VAR_5 >= 0) {
   FUNC_0(500);
   break;
  }
  if (VAR_4 == VAR_0) {
   FUNC_7(VAR_1, "%s: %m", VAR_6->lp);
   FUNC_1(1);
  }
  if (VAR_7 == 1)
   FUNC_4(VAR_6,
    "waiting for %s to become ready (offline?)",
    VAR_6->printer);
  FUNC_6(VAR_7);
 }
 if (FUNC_2(VAR_5))
  FUNC_5(VAR_6);
 FUNC_4(VAR_6, "%s is ready and printing", VAR_6->printer);
}
