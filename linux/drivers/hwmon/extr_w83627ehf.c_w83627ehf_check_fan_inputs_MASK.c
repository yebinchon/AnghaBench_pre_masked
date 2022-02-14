
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_sio_data {scalar_t__ kind; int sioreg; } ;
struct w83627ehf_data {int has_fan; int has_fan_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct w83627ehf_data*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_3(const struct w83627ehf_sio_data *VAR_8,
      struct w83627ehf_data *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


 if (VAR_8->kind == VAR_5) {
  VAR_9->has_fan = 0x03;
  VAR_9->has_fan_min = 0x03;
  return;
 }


 if (VAR_8->kind == VAR_3) {

  VAR_10 = 1;
  VAR_11 = !(FUNC_0(VAR_8->sioreg, 0x2A) & 0x80);
  VAR_12 = 0;
  VAR_13 = 0;
 } else if (VAR_8->kind == VAR_4) {
  bool VAR_15 = FUNC_0(VAR_8->sioreg, 0x27) & 0x80;

  FUNC_1(VAR_8->sioreg, VAR_1);
  VAR_14 = FUNC_0(VAR_8->sioreg, VAR_0);

  if (VAR_14 & 0x80)
   VAR_10 = VAR_15;
  else
   VAR_10 = !(FUNC_0(VAR_8->sioreg, 0x24) & 0x40);

  if (VAR_14 & 0x40)
   VAR_11 = VAR_15;
  else
   VAR_11 = !!(FUNC_0(VAR_8->sioreg, 0x1C) & 0x01);

  if (VAR_14 & 0x20)
   VAR_13 = VAR_15;
  else
   VAR_13 = !!(FUNC_0(VAR_8->sioreg, 0x1C) & 0x02);

  VAR_12 = VAR_11;
 } else if (VAR_8->kind == VAR_6 || VAR_8->kind == VAR_7) {
  VAR_10 = 1;
  VAR_11 = FUNC_0(VAR_8->sioreg, 0x27) & 0x40;
  VAR_13 = FUNC_0(VAR_8->sioreg, 0x27) & 0x20;
  VAR_12 = VAR_11;
 } else {
  VAR_10 = 1;
  VAR_11 = !(FUNC_0(VAR_8->sioreg, 0x29) & 0x06);
  VAR_13 = !(FUNC_0(VAR_8->sioreg, 0x24) & 0x02);
  VAR_12 = VAR_11;
 }

 VAR_9->has_fan = VAR_9->has_fan_min = 0x03;
 VAR_9->has_fan |= (VAR_10 << 2);
 VAR_9->has_fan_min |= (VAR_10 << 2);

 if (VAR_8->kind == VAR_3 || VAR_8->kind == VAR_4) {




  VAR_9->has_fan |= (VAR_11 << 3) | (VAR_13 << 4);
  VAR_9->has_fan_min |= (VAR_12 << 3) | (VAR_13 << 4);
 } else {







  VAR_14 = FUNC_2(VAR_9, VAR_2);
  if ((VAR_14 & (1 << 2)) && VAR_11) {
   VAR_9->has_fan |= (1 << 3);
   VAR_9->has_fan_min |= (1 << 3);
  }
  if (!(VAR_14 & (1 << 1)) && VAR_13) {
   VAR_9->has_fan |= (1 << 4);
   VAR_9->has_fan_min |= (1 << 4);
  }
 }
}
