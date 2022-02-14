
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,unsigned long,unsigned long,int ,int ) ;
 int FUNC_1 (void*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_2(void)
{
 unsigned long VAR_7 = sizeof(void *) << VAR_2;

 VAR_4 = FUNC_0("kvm-pte", VAR_7, VAR_7, 0, VAR_6);
 if (!VAR_4)
  return -VAR_0;

 VAR_7 = sizeof(void *) << VAR_1;

 VAR_3 = FUNC_0("kvm-pmd", VAR_7, VAR_7, 0, VAR_5);
 if (!VAR_3) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 return 0;
}
