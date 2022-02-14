
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40iw_sc_pd {int size; int abi_ver; struct i40iw_sc_dev* dev; int pd_id; } ;
struct i40iw_sc_dev {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct i40iw_sc_dev *VAR_0,
        struct i40iw_sc_pd *VAR_1,
        u16 VAR_2,
        int VAR_3)
{
 VAR_1->size = sizeof(*VAR_1);
 VAR_1->pd_id = VAR_2;
 VAR_1->abi_ver = VAR_3;
 VAR_1->dev = VAR_0;
}
