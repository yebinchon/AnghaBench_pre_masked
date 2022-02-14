
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inst_rmrr_iter_args {struct dmar_unit* dmar; } ;
struct dmar_unit {int hw_gcmd; int unit; int domains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct dmar_unit*,int ) ;
 int FUNC_4 (struct dmar_unit*,int ) ;
 int FUNC_5 (struct dmar_unit*) ;
 int VAR_3 ;
 int FUNC_6 (int ,struct inst_rmrr_iter_args*) ;
 int FUNC_7 (char*,int,...) ;

int
FUNC_8(struct dmar_unit *VAR_4)
{
 struct inst_rmrr_iter_args VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_4, VAR_0))
  return (0);

 VAR_6 = 0;
 VAR_5.dmar = VAR_4;
 FUNC_6(VAR_3, &VAR_5);
 FUNC_0(VAR_4);
 if (!FUNC_2(&VAR_4->domains)) {
  FUNC_1((VAR_4->hw_gcmd & VAR_1) == 0,
     ("dmar%d: RMRR not handled but translation is already enabled",
      VAR_4->unit));
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_2) {
   if (VAR_6 == 0) {
    FUNC_7("dmar%d: enabled translation\n",
        VAR_4->unit);
   } else {
    FUNC_7("dmar%d: enabling translation failed, "
        "error %d\n", VAR_4->unit, VAR_6);
   }
  }
 }
 FUNC_4(VAR_4, VAR_0);
 return (VAR_6);
}
