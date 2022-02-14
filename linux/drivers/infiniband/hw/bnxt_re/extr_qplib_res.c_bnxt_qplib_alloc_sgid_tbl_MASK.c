
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bnxt_qplib_sgid_tbl {int * tbl; int * hw_id; int * ctx; int max; void* vlan; } ;
struct bnxt_qplib_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct bnxt_qplib_res *VAR_2,
         struct bnxt_qplib_sgid_tbl *VAR_3,
         u16 VAR_4)
{
 VAR_3->tbl = FUNC_0(VAR_4, sizeof(*VAR_3->tbl), VAR_1);
 if (!VAR_3->tbl)
  return -VAR_0;

 VAR_3->hw_id = FUNC_0(VAR_4, sizeof(u16), VAR_1);
 if (!VAR_3->hw_id)
  goto out_free1;

 VAR_3->ctx = FUNC_0(VAR_4, sizeof(void *), VAR_1);
 if (!VAR_3->ctx)
  goto out_free2;

 VAR_3->vlan = FUNC_0(VAR_4, sizeof(u8), VAR_1);
 if (!VAR_3->vlan)
  goto out_free3;

 VAR_3->max = VAR_4;
 return 0;
out_free3:
 FUNC_1(VAR_3->ctx);
 VAR_3->ctx = ((void*)0);
out_free2:
 FUNC_1(VAR_3->hw_id);
 VAR_3->hw_id = ((void*)0);
out_free1:
 FUNC_1(VAR_3->tbl);
 VAR_3->tbl = ((void*)0);
 return -VAR_0;
}
