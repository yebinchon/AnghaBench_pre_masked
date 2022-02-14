
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bmc150_accel_data {TYPE_1__* triggers; } ;
struct TYPE_2__ {int * indio_trig; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bmc150_accel_data *VAR_0,
          int VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1; VAR_2 >= 0; VAR_2--) {
  if (VAR_0->triggers[VAR_2].indio_trig) {
   FUNC_0(VAR_0->triggers[VAR_2].indio_trig);
   VAR_0->triggers[VAR_2].indio_trig = ((void*)0);
  }
 }
}
