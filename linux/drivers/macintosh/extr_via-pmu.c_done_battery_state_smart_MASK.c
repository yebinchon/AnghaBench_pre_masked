
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adb_request {int* reply; int reply_len; } ;
struct TYPE_2__ {unsigned int flags; unsigned int charge; unsigned int max_charge; int amperage; unsigned int voltage; unsigned int time_remaining; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,int*) ;

__attribute__((used)) static void
FUNC_2(struct adb_request* VAR_9)
{
 unsigned int VAR_10 = VAR_2;
 int VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;

 if (VAR_9->reply[1] & 0x01)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;


 VAR_12 = VAR_13 = VAR_11 = VAR_14 = 0;

 if (VAR_9->reply[1] & 0x04) {
  VAR_10 |= VAR_1;
  switch(VAR_9->reply[0]) {
   case 3:
   case 4: VAR_12 = VAR_9->reply[2];
    VAR_13 = VAR_9->reply[3];
    VAR_11 = *((signed char *)&VAR_9->reply[4]);
    VAR_14 = VAR_9->reply[5];
    break;
   case 5: VAR_12 = (VAR_9->reply[2] << 8) | VAR_9->reply[3];
    VAR_13 = (VAR_9->reply[4] << 8) | VAR_9->reply[5];
    VAR_11 = *((signed short *)&VAR_9->reply[6]);
    VAR_14 = (VAR_9->reply[8] << 8) | VAR_9->reply[9];
    break;
   default:
    FUNC_1("pmu.c: unrecognized battery info, "
     "len: %d, %4ph\n", VAR_9->reply_len,
          VAR_9->reply);
    break;
  }
 }

 if ((VAR_9->reply[1] & 0x01) && (VAR_11 > 0))
  VAR_10 |= VAR_0;

 VAR_5[VAR_7].flags = VAR_10;
 VAR_5[VAR_7].charge = VAR_12;
 VAR_5[VAR_7].max_charge = VAR_13;
 VAR_5[VAR_7].amperage = VAR_11;
 VAR_5[VAR_7].voltage = VAR_14;
 if (VAR_11) {
  if ((VAR_9->reply[1] & 0x01) && (VAR_11 > 0))
   VAR_5[VAR_7].time_remaining
    = ((VAR_13-VAR_12) * 3600) / VAR_11;
  else
   VAR_5[VAR_7].time_remaining
    = (VAR_12 * 3600) / (-VAR_11);
 } else
  VAR_5[VAR_7].time_remaining = 0;

 VAR_7 = (VAR_7 + 1) % VAR_6;

 FUNC_0(0, &VAR_4);
}
