
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ib; } ;
struct rdma_id_private {TYPE_1__ cm_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_id_private*) ;
 int FUNC_1 (struct rdma_id_private*,int *) ;
 int FUNC_2 (struct rdma_id_private*,int *) ;
 int FUNC_3 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct rdma_id_private *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, ((void*)0));
 if (VAR_2)
  goto reject;

 VAR_2 = FUNC_2(VAR_1, ((void*)0));
 if (VAR_2)
  goto reject;

 VAR_2 = FUNC_4(VAR_1->cm_id.ib, ((void*)0), 0);
 if (VAR_2)
  goto reject;

 return 0;
reject:
 FUNC_5("RDMA CM: CONNECT_ERROR: failed to handle reply. status %d\n", VAR_2);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1->cm_id.ib, VAR_0,
         ((void*)0), 0, ((void*)0), 0);
 return VAR_2;
}
