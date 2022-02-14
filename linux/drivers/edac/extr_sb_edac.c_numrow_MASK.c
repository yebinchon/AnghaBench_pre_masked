
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_2(u32 VAR_1)
{
 int VAR_2 = (FUNC_0(VAR_1) + 12);

 if (VAR_2 < 13 || VAR_2 > 18) {
  FUNC_1(0, "Invalid number of rows: %d (should be between 14 and 17) raw value = %x (%04x)\n",
    VAR_2, (unsigned int)FUNC_0(VAR_1), VAR_1);
  return -VAR_0;
 }

 return 1 << VAR_2;
}
