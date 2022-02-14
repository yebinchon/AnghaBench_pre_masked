
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiimote_state {int** calib_bboard; } ;
struct TYPE_2__ {int input; } ;
struct wiimote_data {TYPE_1__ extension; struct wiimote_state state; } ;
typedef int __u8 ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_4,
     const __u8 *VAR_5)
{
 __s32 VAR_6[4], VAR_7, VAR_8;
 unsigned int VAR_9;
 struct wiimote_state *VAR_10 = &VAR_4->state;
 VAR_6[0] = VAR_5[0];
 VAR_6[0] <<= 8;
 VAR_6[0] |= VAR_5[1];

 VAR_6[1] = VAR_5[2];
 VAR_6[1] <<= 8;
 VAR_6[1] |= VAR_5[3];

 VAR_6[2] = VAR_5[4];
 VAR_6[2] <<= 8;
 VAR_6[2] |= VAR_5[5];

 VAR_6[3] = VAR_5[6];
 VAR_6[3] <<= 8;
 VAR_6[3] |= VAR_5[7];


 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  if (VAR_6[VAR_9] <= VAR_10->calib_bboard[VAR_9][0]) {
   VAR_7 = 0;
  } else if (VAR_6[VAR_9] < VAR_10->calib_bboard[VAR_9][1]) {
   VAR_7 = VAR_6[VAR_9] - VAR_10->calib_bboard[VAR_9][0];
   VAR_7 *= 1700;
   VAR_8 = VAR_10->calib_bboard[VAR_9][1] - VAR_10->calib_bboard[VAR_9][0];
   VAR_7 /= VAR_8 ? VAR_8 : 1;
  } else {
   VAR_7 = VAR_6[VAR_9] - VAR_10->calib_bboard[VAR_9][1];
   VAR_7 *= 1700;
   VAR_8 = VAR_10->calib_bboard[VAR_9][2] - VAR_10->calib_bboard[VAR_9][1];
   VAR_7 /= VAR_8 ? VAR_8 : 1;
   VAR_7 += 1700;
  }
  VAR_6[VAR_9] = VAR_7;
 }

 FUNC_0(VAR_4->extension.input, VAR_0, VAR_6[0]);
 FUNC_0(VAR_4->extension.input, VAR_1, VAR_6[1]);
 FUNC_0(VAR_4->extension.input, VAR_2, VAR_6[2]);
 FUNC_0(VAR_4->extension.input, VAR_3, VAR_6[3]);
 FUNC_1(VAR_4->extension.input);
}
