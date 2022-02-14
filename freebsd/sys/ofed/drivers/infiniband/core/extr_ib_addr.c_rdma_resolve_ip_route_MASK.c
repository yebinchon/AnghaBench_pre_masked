
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr const*,struct rdma_dev_addr*) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_2 (struct sockaddr*) ;

int FUNC_3(struct sockaddr *VAR_1,
     const struct sockaddr *VAR_2,
     struct rdma_dev_addr *VAR_3)
{
 struct sockaddr_storage VAR_4 = {};
 struct sockaddr *VAR_5 = (struct sockaddr *)&VAR_4;

 if (VAR_1) {
  if (VAR_1->sa_family != VAR_2->sa_family)
   return -VAR_0;

  FUNC_1(VAR_5, VAR_1, FUNC_2(VAR_1));
 } else {
  VAR_5->sa_family = VAR_2->sa_family;
 }

 return FUNC_0(VAR_5, VAR_2, VAR_3);
}
