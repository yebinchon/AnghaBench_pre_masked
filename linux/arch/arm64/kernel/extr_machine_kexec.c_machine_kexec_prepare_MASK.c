
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct kimage*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct kimage *VAR_2)
{
 FUNC_1(VAR_2);

 if (VAR_2->type != VAR_1 && FUNC_0()) {
  FUNC_2("Can't kexec: CPUs are stuck in the kernel.\n");
  return -VAR_0;
 }

 return 0;
}
