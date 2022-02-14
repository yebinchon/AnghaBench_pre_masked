
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static u8 FUNC_3(void)
{
 u32 VAR_2;


 if (((FUNC_2() >> 16) & 0xf) != 0xf) {
  FUNC_1("CPUID feature registers not supported. "
        "Assuming v6 debug is present.\n");
  return VAR_0;
 }

 FUNC_0(VAR_1, VAR_1, 0, VAR_2);
 return (VAR_2 >> 16) & 0xf;
}
