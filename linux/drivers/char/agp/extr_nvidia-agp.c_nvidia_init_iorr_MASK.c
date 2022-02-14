
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14;



 VAR_14 = VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  FUNC_0(VAR_2 + 2 * VAR_13, VAR_8, VAR_7);
  FUNC_0(VAR_3 + 2 * VAR_13, VAR_10, VAR_9);

  if ((VAR_8 & 0xfffff000) == (VAR_5 & 0xfffff000))
   break;

  if ((VAR_10 & 0x00000800) == 0)
   VAR_14 = VAR_13;
 }

 if (VAR_13 >= VAR_0) {
  VAR_13 = VAR_14;
  if (VAR_13 >= VAR_0)
   return -VAR_1;
 }
    VAR_7 = 0x0;
    VAR_8 = (VAR_5 & ~0xfff) | 0x18;
    VAR_9 = 0xf;
    VAR_10 = ((~(VAR_6 - 1)) & 0xfffff000) | 0x800;
    FUNC_1(VAR_2 + 2 * VAR_13, VAR_8, VAR_7);
    FUNC_1(VAR_3 + 2 * VAR_13, VAR_10, VAR_9);

    FUNC_0(VAR_4, VAR_12, VAR_11);
    VAR_12 |= 0x00100000;
    FUNC_1(VAR_4, VAR_12, VAR_11);

 return 0;
}
