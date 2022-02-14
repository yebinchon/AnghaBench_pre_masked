
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {scalar_t__ type; int distance_max; } ;
struct wacom_wac {unsigned char* data; unsigned char* serial; unsigned char* id; int reporting_data; TYPE_1__* shared; struct wacom_features features; int * tool; struct input_dev* pen_input; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int stylus_in_proximity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct wacom_wac*) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_5)
{
 struct wacom_features *VAR_6 = &VAR_5->features;
 unsigned char *VAR_7 = VAR_5->data;
 struct input_dev *VAR_8 = VAR_5->pen_input;
 int VAR_9 = (VAR_6->type == VAR_3) ? (VAR_7[1] & 0x01) : 0;

 if (!(((VAR_7[1] & 0xfc) == 0xc0) ||
     ((VAR_7[1] & 0xfe) == 0x20) ||
     ((VAR_7[1] & 0xfe) == 0x80)))
  return 0;


 if ((VAR_7[1] & 0xfc) == 0xc0) {

  VAR_5->serial[VAR_9] = ((VAR_7[3] & 0x0f) << 28) +
   (VAR_7[4] << 20) + (VAR_7[5] << 12) +
   (VAR_7[6] << 4) + (VAR_7[7] >> 4);

  VAR_5->id[VAR_9] = (VAR_7[2] << 4) | (VAR_7[3] >> 4) |
       ((VAR_7[7] & 0x0f) << 16) | ((VAR_7[8] & 0xf0) << 8);

  VAR_5->tool[VAR_9] = FUNC_3(VAR_5->id[VAR_9]);

  VAR_5->shared->stylus_in_proximity = 1;
  return 1;
 }


 if ((VAR_7[1] & 0xfe) == 0x20) {
  if (VAR_6->type != VAR_4)
   VAR_5->shared->stylus_in_proximity = 1;


  if (VAR_5->reporting_data) {
   FUNC_1(VAR_8, VAR_2, 0);
   FUNC_0(VAR_8, VAR_1, 0);
   FUNC_0(VAR_8, VAR_0, VAR_5->features.distance_max);
   return 2;
  }
  return 1;
 }


 if ((VAR_7[1] & 0xfe) == 0x80) {
  VAR_5->shared->stylus_in_proximity = 0;
  VAR_5->reporting_data = 0;


  if (!VAR_5->id[VAR_9])
   return 1;

  FUNC_2(VAR_5);
  return 2;
 }

 return 0;
}
