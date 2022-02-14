
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,char*,int) ;
 int* VAR_0 ;

__attribute__((used)) static u32 FUNC_2(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2] == VAR_1)
   return VAR_2;
 }

 FUNC_1(1, "Unsupported voltage swing/pre-emphasis level: 0x%x\n",
      VAR_1);

 return 0;
}
