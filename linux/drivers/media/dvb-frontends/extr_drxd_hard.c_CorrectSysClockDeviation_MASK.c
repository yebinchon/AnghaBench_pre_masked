
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
typedef scalar_t__ sysClockFreq ;
struct TYPE_4__ {int (* osc_deviation ) (int ,int,int) ;} ;
struct TYPE_3__ {int bandwidth_hz; } ;
struct drxd_state {int osc_clock_deviation; int cscd_state; int current_fe_if_incr; int priv; TYPE_2__ config; void* sys_clock_freq; scalar_t__ expected_sys_clock_freq; TYPE_1__ props; scalar_t__ type_A; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct drxd_state*,int ,int*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct drxd_state*,int ,int ,int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct drxd_state *VAR_9)
{
 int VAR_10;
 s32 VAR_11 = 0;
 s32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 s16 VAR_16;
 s16 VAR_17;

 do {




  VAR_10 = FUNC_1(VAR_9, VAR_6, ((u32 *) &VAR_12), 0);
  if (VAR_10 < 0)
   break;
  VAR_10 = FUNC_1(VAR_9, VAR_5, (u32 *) &VAR_11, 0);
  if (VAR_10 < 0)
   break;

  if (VAR_9->type_A) {
   if ((VAR_12 - VAR_11 < -500) || (VAR_12 - VAR_11 > 500))
    break;
  } else {
   if ((VAR_12 - VAR_11 < -2000) || (VAR_12 - VAR_11 > 2000))
    break;
  }

  switch (VAR_9->props.bandwidth_hz) {
  case 8000000:
   VAR_13 = VAR_3;
   break;
  case 7000000:
   VAR_13 = VAR_2;
   break;
  case 6000000:
   VAR_13 = VAR_1;
   break;
  default:
   return -1;
   break;
  }



  VAR_11 += (1 << 23);
  VAR_14 = FUNC_0(VAR_11, VAR_13, 1 << 21);
  VAR_15 = (u32) (VAR_14 / 1000);

  if ((VAR_14 % 1000) > 500)
   VAR_15++;


  VAR_16 = (u16) ((((s32) (VAR_15) -
          (s32)
          (VAR_9->expected_sys_clock_freq)) *
         1000000L) /
        (s32)
        (VAR_9->expected_sys_clock_freq));

  VAR_17 = VAR_16 - VAR_9->osc_clock_deviation;

  if (VAR_17 >= -200 && VAR_17 <= 200) {
   VAR_9->sys_clock_freq = (u16) VAR_15;
   if (VAR_16 != VAR_9->osc_clock_deviation) {
    if (VAR_9->config.osc_deviation) {
     VAR_9->config.osc_deviation(VAR_9->priv,
            VAR_16,
            1);
     VAR_9->osc_clock_deviation =
         VAR_16;
    }
   }

   VAR_10 = FUNC_2(VAR_9, VAR_8, VAR_4, 0);
   if (VAR_10 < 0)
    break;


   VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_9->current_fe_if_incr, 0);
   if (VAR_10 < 0)
    break;
   VAR_9->cscd_state = VAR_0;
  }
 } while (0);

 return VAR_10;
}
