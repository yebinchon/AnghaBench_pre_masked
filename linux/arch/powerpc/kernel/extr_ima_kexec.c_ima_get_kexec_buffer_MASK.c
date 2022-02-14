
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (void const*,int,unsigned long*,size_t*) ;
 int VAR_1 ;
 void* FUNC_2 (int ,char*,int*) ;

int FUNC_3(void **VAR_2, size_t *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6;
 size_t VAR_7;
 const void *VAR_8;

 VAR_8 = FUNC_2(VAR_1, "linux,ima-kexec-buffer", &VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_8, VAR_5, &VAR_6, &VAR_7);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = FUNC_0(VAR_6);
 *VAR_3 = VAR_7;

 return 0;
}
