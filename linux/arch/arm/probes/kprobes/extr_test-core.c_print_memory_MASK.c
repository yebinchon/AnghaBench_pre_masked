
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0, size_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1 / sizeof(u32); VAR_2 += 4)
  FUNC_0("%08x %08x %08x %08x\n", VAR_0[VAR_2], VAR_0[VAR_2+1],
      VAR_0[VAR_2+2], VAR_0[VAR_2+3]);
}
