
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sockaddr_in6 {void* sin6_port; int sin6_family; } ;
struct sockaddr_in {void* sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct rdma_cm_id*) ;
 struct rdma_cm_id* FUNC_7 (struct sockaddr*) ;
 int FUNC_8 (int ,struct rdma_cm_id*) ;

__attribute__((used)) static ssize_t FUNC_9(struct config_item *VAR_5,
           const char *VAR_6, size_t VAR_7)
{
 struct sockaddr_in VAR_8 = { .sin_family = VAR_0 };
 struct sockaddr_in6 VAR_9 = { .sin6_family = VAR_1 };
 struct rdma_cm_id *VAR_10 = ((void*)0);
 u16 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_6, 0, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = VAR_7;
 if (VAR_4 == VAR_11)
  goto out;

 if (VAR_11) {
  VAR_9 = FUNC_2(VAR_11);
  VAR_10 = FUNC_7((struct sockaddr *)&VAR_9);
  if (FUNC_0(VAR_10)) {
   VAR_8 = FUNC_2(VAR_11);
   VAR_10 = FUNC_7((struct sockaddr *)&VAR_8);
   if (FUNC_0(VAR_10)) {
    VAR_12 = FUNC_1(VAR_10);
    goto out;
   }
  }
 }

 FUNC_4(&VAR_3);
 VAR_4 = VAR_11;
 FUNC_8(VAR_2, VAR_10);
 FUNC_5(&VAR_3);

 if (VAR_10)
  FUNC_6(VAR_10);
 VAR_12 = VAR_7;
out:
 return VAR_12;
}
