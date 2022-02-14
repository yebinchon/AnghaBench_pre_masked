
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i40iw_puda_buf {int dummy; } ;
struct i40iw_kmem_info {int size; void* addr; } ;
struct TYPE_5__ {int size; TYPE_1__* addr; } ;
struct TYPE_4__ {int flags; } ;
struct i40iw_cm_node {int state; TYPE_2__ mpa_hdr; TYPE_1__ mpa_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i40iw_cm_node*,TYPE_2__*,int ) ;
 struct i40iw_puda_buf* FUNC_1 (struct i40iw_cm_node*,int *,TYPE_2__*,struct i40iw_kmem_info*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_cm_node*,struct i40iw_puda_buf*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct i40iw_cm_node *VAR_7,
     const void *VAR_8,
     u8 VAR_9)
{
 struct i40iw_puda_buf *VAR_10;
 struct i40iw_kmem_info VAR_11;

 VAR_7->mpa_hdr.addr = &VAR_7->mpa_frame;
 VAR_7->mpa_hdr.size = FUNC_0(VAR_7,
        &VAR_7->mpa_hdr,
        VAR_4);

 VAR_7->mpa_frame.flags |= VAR_3;
 VAR_11.addr = (void *)VAR_8;
 VAR_11.size = VAR_9;

 VAR_10 = FUNC_1(VAR_7,
        ((void*)0),
        &VAR_7->mpa_hdr,
        &VAR_11,
        VAR_5 | VAR_6);
 if (!VAR_10) {
  FUNC_2("no sqbuf\n");
  return -VAR_0;
 }
 VAR_7->state = VAR_1;
 return FUNC_3(VAR_7, VAR_10, VAR_2, 1, 0);
}
