
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (long (*) (long,long)) ;
 int FUNC_2 (long (*) (long,long)) ;

__attribute__((used)) static int FUNC_3(long (*VAR_0)(long, long))
{
 int VAR_1;

 FUNC_0("    kprobe\n");
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_0("    kretprobe\n");
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
