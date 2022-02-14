
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {scalar_t__ chip_id; int feature_mask; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_7)
{
 if (VAR_7->chip_id == VAR_1) {
  FUNC_0(VAR_7->device,
    VAR_0, VAR_6, VAR_5, 0);
  FUNC_0(VAR_7->device,
    VAR_0, VAR_6, VAR_4, 0);
 }

 if (VAR_7->feature_mask & VAR_3)
  FUNC_1(VAR_7, VAR_2);

 return 0;
}
