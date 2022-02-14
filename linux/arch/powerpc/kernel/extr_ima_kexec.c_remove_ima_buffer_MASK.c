
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,unsigned long,size_t) ;
 int FUNC_1 (void const*,int,unsigned long*,size_t*) ;
 int FUNC_2 (void*,int,char*) ;
 void* FUNC_3 (void*,int,char*,int*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 unsigned long VAR_4;
 size_t VAR_5;
 const void *VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_1, "linux,ima-kexec-buffer", &VAR_3);
 if (!VAR_6)
  return;

 VAR_2 = FUNC_1(VAR_6, VAR_3, &VAR_4, &VAR_5);
 FUNC_2(VAR_0, VAR_1, "linux,ima-kexec-buffer");
 if (VAR_2)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_4, VAR_5);
 if (!VAR_2)
  FUNC_4("Removed old IMA buffer reservation.\n");
}
