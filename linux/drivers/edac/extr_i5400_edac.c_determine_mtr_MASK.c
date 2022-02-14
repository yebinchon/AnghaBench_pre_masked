
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i5400_pvt {int* b0_mtr; int* b1_mtr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct i5400_pvt *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;




 VAR_6 = VAR_3;

 if (VAR_6 >= VAR_1) {
  FUNC_0(0, "ERROR: trying to access an invalid dimm: %d\n",
    VAR_3);
  return 0;
 }

 if (VAR_4 < VAR_0)
  VAR_5 = VAR_2->b0_mtr[VAR_6];
 else
  VAR_5 = VAR_2->b1_mtr[VAR_6];

 return VAR_5;
}
