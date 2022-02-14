
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,size_t) ;

int FUNC_1(const struct sockaddr_in* VAR_1, char* VAR_2, size_t VAR_3) {
  return FUNC_0(VAR_0, &VAR_1->sin_addr, VAR_2, VAR_3);
}
