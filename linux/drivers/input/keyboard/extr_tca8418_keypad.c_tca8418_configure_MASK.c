
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tca8418_keypad {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tca8418_keypad*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct tca8418_keypad *VAR_10,
        u32 VAR_11, u32 VAR_12)
{
 int VAR_13, VAR_14 = 0;


 VAR_13 = ~(~0 << VAR_11);
 VAR_13 += (~(~0 << VAR_12)) << 8;


 VAR_14 |= FUNC_0(VAR_10, VAR_7, VAR_13);
 VAR_14 |= FUNC_0(VAR_10, VAR_8, VAR_13 >> 8);
 VAR_14 |= FUNC_0(VAR_10, VAR_9, VAR_13 >> 16);


 VAR_14 |= FUNC_0(VAR_10, VAR_4, VAR_13);
 VAR_14 |= FUNC_0(VAR_10, VAR_5, VAR_13 >> 8);
 VAR_14 |= FUNC_0(VAR_10, VAR_6, VAR_13 >> 16);

 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_10, VAR_3,
    VAR_0 | VAR_2 | VAR_1);

 return VAR_14;
}
