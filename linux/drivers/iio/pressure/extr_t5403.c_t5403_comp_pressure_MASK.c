
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct t5403_data {int lock; } ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct t5403_data*,int) ;

__attribute__((used)) static int FUNC_5(struct t5403_data *VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3;
 s16 VAR_4;
 u16 VAR_5;
 s32 VAR_6, VAR_7, VAR_8;

 FUNC_2(&VAR_0->lock);

 VAR_3 = FUNC_4(VAR_0, 0);
 if (VAR_3 < 0)
  goto done;
 VAR_4 = VAR_3;

 VAR_3 = FUNC_4(VAR_0, 1);
 if (VAR_3 < 0)
  goto done;
 VAR_5 = VAR_3;


 VAR_6 = FUNC_1(3) + (s32) FUNC_1(4) * VAR_4 / 0x20000 +
  FUNC_0(5) * VAR_4 / 0x8000 * VAR_4 / 0x80000 +
  FUNC_0(9) * VAR_4 / 0x8000 * VAR_4 / 0x8000 * VAR_4 / 0x10000;

 VAR_7 = FUNC_0(6) * 0x4000 + FUNC_0(7) * VAR_4 / 8 +
  FUNC_0(8) * VAR_4 / 0x8000 * VAR_4 / 16 +
  FUNC_0(9) * VAR_4 / 0x8000 * VAR_4 / 0x10000 * VAR_4;

 VAR_8 = (VAR_6 * VAR_5 + VAR_7) / 0x4000;

 VAR_8 += ((VAR_8 - 75000) * (VAR_8 - 75000) / 0x10000 - 9537) *
     FUNC_0(10) / 0x10000;

 *VAR_1 = VAR_8 / 1000;
 *VAR_2 = (VAR_8 % 1000) * 1000;

done:
 FUNC_3(&VAR_0->lock);
 return VAR_3;
}
