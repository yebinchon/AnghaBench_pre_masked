
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i5000_pvt {int* b0_mtr; int* b1_mtr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i5000_pvt *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 < VAR_0)
  VAR_4 = VAR_1->b0_mtr[VAR_2];
 else
  VAR_4 = VAR_1->b1_mtr[VAR_2];

 return VAR_4;
}
