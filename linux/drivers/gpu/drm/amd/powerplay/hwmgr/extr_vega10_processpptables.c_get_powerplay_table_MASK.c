
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pp_hwmgr {void* soft_pp_table; int soft_pp_table_size; int adev; } ;
typedef int ATOM_Vega10_POWERPLAYTABLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int,int *,int *,int *) ;

__attribute__((used)) static const void *FUNC_2(struct pp_hwmgr *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 u16 VAR_3;
 u8 VAR_4, VAR_5;
 const void *VAR_6 = VAR_1->soft_pp_table;

 if (!VAR_6) {
  VAR_6 = (ATOM_Vega10_POWERPLAYTABLE *)
    FUNC_1(VAR_1->adev, VAR_2,
      &VAR_3, &VAR_4, &VAR_5);

  VAR_1->soft_pp_table = VAR_6;
  VAR_1->soft_pp_table_size = VAR_3;
 }

 return VAR_6;
}
