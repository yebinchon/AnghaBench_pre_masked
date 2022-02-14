
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ts_output_if; } ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int io; TYPE_1__ create_param; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_2(struct cxd2880_tnrdmd *VAR_10,
     u8 VAR_11)
{
 int VAR_12;

 if (!VAR_10)
  return -VAR_5;

 if (VAR_10->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_10->state != VAR_4 &&
     VAR_10->state != VAR_3)
  return -VAR_5;

 switch (VAR_10->create_param.ts_output_if) {
 case 128:
  if (VAR_11) {
   VAR_12 = FUNC_1(VAR_10->io,
         VAR_1,
         VAR_6,
         FUNC_0(VAR_6));
   if (VAR_12)
    return VAR_12;

   VAR_12 = FUNC_1(VAR_10->io,
         VAR_0,
         VAR_7,
         FUNC_0(VAR_7));
   if (VAR_12)
    return VAR_12;
  } else {
   VAR_12 = FUNC_1(VAR_10->io,
         VAR_0,
         VAR_8,
         FUNC_0(VAR_8));
   if (VAR_12)
    return VAR_12;

   VAR_12 = FUNC_1(VAR_10->io,
         VAR_1,
         VAR_9,
         FUNC_0(VAR_9));
   if (VAR_12)
    return VAR_12;
  }
  break;

 case 129:
  break;

 case 130:
  break;

 default:
  return -VAR_5;
 }

 return 0;
}
