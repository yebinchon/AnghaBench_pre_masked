
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cx24113_state {scalar_t__ tuner_gain_thres; scalar_t__ gain_level; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cx24113_state *VAR_5,
  s16 VAR_6)
{
 u8 VAR_7 = FUNC_0(VAR_5, 0x1d) & 0xf0,
    VAR_8 = FUNC_0(VAR_5, 0x1f) & 0x3f,
    VAR_9 = FUNC_0(VAR_5, 0x20) & 0xf3;
 u8 VAR_10 = VAR_6 >= VAR_5->tuner_gain_thres;

 FUNC_2("power estimation: %d, thres: %d, gain_level: %d/%d\n",
   VAR_6, VAR_5->tuner_gain_thres,
   VAR_5->gain_level, VAR_10);

 if (VAR_10 == VAR_5->gain_level)
  return 0;

 VAR_7 |= 0xf;

 if (VAR_10) {
  VAR_9 |= VAR_0 << 2;
  VAR_8 |= (VAR_4 << 3) | VAR_4;
 } else {
  VAR_9 |= VAR_1 << 2;
  VAR_8 |= (VAR_3 << 3) | VAR_2;
 }
 VAR_5->gain_level = VAR_10;

 FUNC_1(VAR_5, 0x1d, VAR_7);
 FUNC_1(VAR_5, 0x1f, VAR_8);
 FUNC_1(VAR_5, 0x20, VAR_9);

 return 1;
}
