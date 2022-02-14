
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int*,int*,int*,int*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3, VAR_4;

 if (VAR_0)
  return 0;

 FUNC_0(0x80860007, &VAR_1, &VAR_2, &VAR_3, &VAR_4);
 FUNC_1("cpuid eax is %u\n", VAR_1);

 return VAR_1 * 1000;
}
