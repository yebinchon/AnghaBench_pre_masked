
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int workq; } ;
struct gm12u320_device {int* data_buf; TYPE_1__ fb_update; int cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 char const* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct gm12u320_device *VAR_12)
{
 int VAR_13, VAR_14;
 const char *VAR_15;

 VAR_12->cmd_buf = FUNC_1(VAR_0, VAR_7);
 if (!VAR_12->cmd_buf)
  return -VAR_6;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  if (VAR_13 == VAR_8 - 1) {
   VAR_14 = VAR_4;
   VAR_15 = VAR_11;
  } else {
   VAR_14 = VAR_3;
   VAR_15 = VAR_10;
  }

  VAR_12->data_buf[VAR_13] = FUNC_2(VAR_14, VAR_7);
  if (!VAR_12->data_buf[VAR_13])
   return -VAR_6;

  FUNC_3(VAR_12->data_buf[VAR_13], VAR_15, VAR_2);
  FUNC_3(VAR_12->data_buf[VAR_13] +
    (VAR_14 - VAR_1),
         VAR_9, VAR_1);
 }

 VAR_12->fb_update.workq = FUNC_0(VAR_5);
 if (!VAR_12->fb_update.workq)
  return -VAR_6;

 return 0;
}
