
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*) ;

int FUNC_2(void *VAR_2)
{
 if (VAR_1) {
  FUNC_0("kvm: module already exists\n");
  return -VAR_0;
 }

 return FUNC_1(&VAR_1);
}
