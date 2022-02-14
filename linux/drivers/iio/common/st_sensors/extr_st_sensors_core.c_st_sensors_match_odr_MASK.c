
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* odr_avl; } ;
struct st_sensor_settings {TYPE_1__ odr; } ;
struct st_sensor_odr_avl {unsigned int hz; int value; } ;
struct TYPE_4__ {unsigned int hz; int value; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct st_sensor_settings *VAR_2,
   unsigned int VAR_3, struct st_sensor_odr_avl *VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->odr.odr_avl[VAR_5].hz == 0)
   goto st_sensors_match_odr_error;

  if (VAR_2->odr.odr_avl[VAR_5].hz == VAR_3) {
   VAR_4->hz = VAR_2->odr.odr_avl[VAR_5].hz;
   VAR_4->value = VAR_2->odr.odr_avl[VAR_5].value;
   VAR_6 = 0;
   break;
  }
 }

st_sensors_match_odr_error:
 return VAR_6;
}
