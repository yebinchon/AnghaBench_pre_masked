
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rmi_2d_sensor {int nbr_fingers; scalar_t__ report_rel; int input; int * objs; int dmax; int tracking_pos; int tracking_slots; scalar_t__ kernel_tracking; scalar_t__ report_abs; } ;
struct TYPE_2__ {int* f_state; } ;
struct f11_data {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct rmi_2d_sensor*,int *,int) ;
 int FUNC_4 (struct f11_data*,struct rmi_2d_sensor*,int *,int,int) ;
 int FUNC_5 (int const*,int) ;
 int FUNC_6 (struct f11_data*,int) ;

__attribute__((used)) static void FUNC_7(struct f11_data *VAR_3,
       struct rmi_2d_sensor *VAR_4, int VAR_5)
{
 const u8 *VAR_6 = VAR_3->data.f_state;
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = VAR_4->nbr_fingers * VAR_1;

 if (VAR_4->report_abs) {
  if (VAR_11 > VAR_5)
   VAR_9 = VAR_5 / VAR_1;
  else
   VAR_9 = VAR_4->nbr_fingers;

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

   VAR_7 = FUNC_5(VAR_6, VAR_8);
   if (VAR_7 == VAR_0) {
    FUNC_2("Invalid finger state[%d]: 0x%02x", VAR_8,
     VAR_7);
    continue;
   }

   FUNC_4(VAR_3, VAR_4, &VAR_4->objs[VAR_8],
       VAR_7, VAR_8);
  }





  if (VAR_4->kernel_tracking)
   FUNC_0(VAR_4->input,
           VAR_4->tracking_slots,
           VAR_4->tracking_pos,
           VAR_4->nbr_fingers,
           VAR_4->dmax);

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_7 = FUNC_5(VAR_6, VAR_8);
   if (VAR_7 == VAR_0)

    continue;

   FUNC_3(VAR_4, &VAR_4->objs[VAR_8], VAR_8);
  }

  FUNC_1(VAR_4->input);
 } else if (VAR_4->report_rel) {
  if ((VAR_11 + VAR_4->nbr_fingers * VAR_2) > VAR_5)
   VAR_10 = (VAR_5 - VAR_11) / VAR_2;
  else
   VAR_10 = VAR_4->nbr_fingers;

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
   FUNC_6(VAR_3, VAR_8);
 }

}
