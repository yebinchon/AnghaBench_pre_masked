
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm97xx {scalar_t__ id; int dev; int acc_slot; int acc_rate; int * ac97; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ speed; int code; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_2(struct wm97xx *VAR_5)
{
 int VAR_6;


 if (VAR_5->ac97 == ((void*)0))
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_5->id != VAR_2[VAR_6].id)
   continue;
  VAR_4 = VAR_6;
  if (VAR_3 <= VAR_2[VAR_6].speed)
   break;
 }
 VAR_5->acc_rate = VAR_2[VAR_4].code;
 VAR_5->acc_slot = VAR_1;
 FUNC_1(VAR_5->dev,
   "zylonite accelerated touchscreen driver, %d samples/sec\n",
   VAR_2[VAR_4].speed);

 return 0;
}
