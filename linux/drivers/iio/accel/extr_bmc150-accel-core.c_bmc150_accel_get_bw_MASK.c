
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bmc150_accel_data {scalar_t__ bw_bits; } ;
struct TYPE_3__ {scalar_t__ bw_bits; int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct bmc150_accel_data *VAR_3, int *VAR_4,
          int *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); ++VAR_6) {
  if (VAR_2[VAR_6].bw_bits == VAR_3->bw_bits) {
   *VAR_4 = VAR_2[VAR_6].val;
   *VAR_5 = VAR_2[VAR_6].val2;
   return VAR_1;
  }
 }

 return -VAR_0;
}
