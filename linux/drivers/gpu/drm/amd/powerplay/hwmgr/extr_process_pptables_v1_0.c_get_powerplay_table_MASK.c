
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pp_hwmgr {int soft_pp_table_size; void* soft_pp_table; int adev; } ;
typedef int ATOM_Tonga_POWERPLAYTABLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,int *,int *,int *) ;

__attribute__((used)) static const void *FUNC_2(struct pp_hwmgr *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);

 u16 VAR_4;
 u8 VAR_5, VAR_6;
 void *VAR_7 = (void *)VAR_2->soft_pp_table;

 if (!VAR_7) {
  VAR_7 = (ATOM_Tonga_POWERPLAYTABLE *)
    FUNC_1(VAR_2->adev,
      VAR_3, &VAR_4, &VAR_5, &VAR_6);
  VAR_2->soft_pp_table = VAR_7;
  VAR_2->soft_pp_table_size = VAR_4;
 }

 return VAR_7;
}
