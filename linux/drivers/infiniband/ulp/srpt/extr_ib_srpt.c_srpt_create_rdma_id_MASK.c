
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
typedef int addr_str ;


 struct rdma_cm_id* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct rdma_cm_id*,struct sockaddr*) ;
 struct rdma_cm_id* FUNC_5 (int *,int ,int *,int ,int ) ;
 int FUNC_6 (struct rdma_cm_id*) ;
 int FUNC_7 (struct rdma_cm_id*,int) ;
 int FUNC_8 (char*,int,char*,struct sockaddr*) ;
 int VAR_3 ;

__attribute__((used)) static struct rdma_cm_id *FUNC_9(struct sockaddr *VAR_4)
{
 struct rdma_cm_id *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(&VAR_2, VAR_3,
        ((void*)0), VAR_1, VAR_0);
 if (FUNC_1(VAR_5)) {
  FUNC_3("RDMA/CM ID creation failed: %ld\n",
         FUNC_2(VAR_5));
  goto out;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_4);
 if (VAR_6) {
  char VAR_7[64];

  FUNC_8(VAR_7, sizeof(VAR_7), "%pISp", VAR_4);
  FUNC_3("Binding RDMA/CM ID to address %s failed: %d\n",
         VAR_7, VAR_6);
  FUNC_6(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_7(VAR_5, 128);
 if (VAR_6) {
  FUNC_3("rdma_listen() failed: %d\n", VAR_6);
  FUNC_6(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
 }

out:
 return VAR_5;
}
