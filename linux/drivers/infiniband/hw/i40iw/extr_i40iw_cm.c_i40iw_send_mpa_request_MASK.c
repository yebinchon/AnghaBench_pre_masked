
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i40iw_puda_buf {int dummy; } ;
struct TYPE_3__ {int size; int * addr; } ;
struct i40iw_cm_node {int pdata; TYPE_1__ mpa_hdr; int mpa_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40iw_cm_node*,TYPE_1__*,int ) ;
 struct i40iw_puda_buf* FUNC_1 (struct i40iw_cm_node*,int *,TYPE_1__*,int *,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct i40iw_cm_node*,struct i40iw_puda_buf*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct i40iw_cm_node *VAR_3)
{
 struct i40iw_puda_buf *VAR_4;

 if (!VAR_3) {
  FUNC_2("cm_node == NULL\n");
  return -1;
 }

 VAR_3->mpa_hdr.addr = &VAR_3->mpa_frame;
 VAR_3->mpa_hdr.size = FUNC_0(VAR_3,
        &VAR_3->mpa_hdr,
        VAR_1);
 if (!VAR_3->mpa_hdr.size) {
  FUNC_2("mpa size = %d\n", VAR_3->mpa_hdr.size);
  return -1;
 }

 VAR_4 = FUNC_1(VAR_3,
        ((void*)0),
        &VAR_3->mpa_hdr,
        &VAR_3->pdata,
        VAR_2);
 if (!VAR_4) {
  FUNC_2("sq_buf == NULL\n");
  return -1;
 }
 return FUNC_3(VAR_3, VAR_4, VAR_0, 1, 0);
}
