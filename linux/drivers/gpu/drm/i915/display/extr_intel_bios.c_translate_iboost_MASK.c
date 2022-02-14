
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static u8 FUNC_2(u8 VAR_0)
{
 static const u8 VAR_1[] = { 1, 3, 7 };

 if (VAR_0 >= FUNC_0(VAR_1)) {
  FUNC_1("Unsupported I_boost value found in VBT (%d), display may not work properly\n", VAR_0);
  return 0;
 }
 return VAR_1[VAR_0];
}
