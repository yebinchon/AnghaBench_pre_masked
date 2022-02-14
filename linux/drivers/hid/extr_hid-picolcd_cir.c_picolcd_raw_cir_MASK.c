
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct picolcd_data {int status; int rc_dev; int lock; } ;
struct ir_raw_event {int pulse; int duration; } ;
struct hid_report {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ir_raw_event*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct picolcd_data *VAR_1,
  struct hid_report *VAR_2, u8 *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7, VAR_8;
 struct ir_raw_event VAR_9 = {};


 FUNC_4(&VAR_1->lock, VAR_5);
 if (!VAR_1->rc_dev || (VAR_1->status & VAR_0)) {
  FUNC_5(&VAR_1->lock, VAR_5);
  return 1;
 }
 FUNC_5(&VAR_1->lock, VAR_5);
 VAR_8 = VAR_4 > 0 ? FUNC_3((int)VAR_3[0], VAR_4-1) : 0;
 for (VAR_6 = 0; VAR_6+1 < VAR_8; VAR_6 += 2) {
  VAR_7 = (VAR_3[VAR_6] << 8) | (VAR_3[VAR_6+1]);
  VAR_9.pulse = !!(VAR_7 & 0x8000);
  VAR_9.duration = FUNC_0(VAR_9.pulse ? (65536 - VAR_7) : VAR_7);

  if (VAR_6 == 0 && VAR_9.duration > 15000000)
   VAR_9.duration -= 15000000;
  FUNC_2(VAR_1->rc_dev, &VAR_9);
 }
 FUNC_1(VAR_1->rc_dev);

 return 1;
}
