
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct wmt_i2c_dev {scalar_t__ mode; scalar_t__ base; int complete; } ;
struct i2c_msg {int flags; int len; int addr; int* buf; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct wmt_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *,int ) ;
 int FUNC_5 (struct wmt_i2c_dev*) ;
 int FUNC_6 (struct wmt_i2c_dev*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_13, struct i2c_msg *VAR_14,
   int VAR_15)
{
 struct wmt_i2c_dev *VAR_16 = FUNC_0(VAR_13);
 u16 VAR_17, VAR_18;
 int VAR_19;
 unsigned long VAR_20;
 u32 VAR_21 = 0;

 if (!(VAR_14->flags & VAR_5)) {
  VAR_19 = FUNC_6(VAR_16);
  if (VAR_19 < 0)
   return VAR_19;
 }

 VAR_17 = FUNC_2(VAR_16->base + VAR_7);
 VAR_17 &= ~VAR_1;
 FUNC_7(VAR_17, VAR_16->base + VAR_7);

 VAR_17 = FUNC_2(VAR_16->base + VAR_7);
 VAR_17 &= ~VAR_2;
 FUNC_7(VAR_17, VAR_16->base + VAR_7);

 if (!(VAR_14->flags & VAR_5)) {
  VAR_17 = FUNC_2(VAR_16->base + VAR_7);
  VAR_17 |= VAR_0;
  FUNC_7(VAR_17, VAR_16->base + VAR_7);
 }

 if (VAR_14->len == 1) {
  VAR_17 = FUNC_2(VAR_16->base + VAR_7);
  VAR_17 |= VAR_2;
  FUNC_7(VAR_17, VAR_16->base + VAR_7);
 }

 FUNC_3(&VAR_16->complete);

 if (VAR_16->mode == VAR_4)
  VAR_18 = VAR_12;
 else
  VAR_18 = VAR_9;

 VAR_18 |= VAR_10 | (VAR_14->addr & VAR_11);

 FUNC_7(VAR_18, VAR_16->base + VAR_8);

 if (VAR_14->flags & VAR_5) {
  VAR_17 = FUNC_2(VAR_16->base + VAR_7);
  VAR_17 |= VAR_0;
  FUNC_7(VAR_17, VAR_16->base + VAR_7);
 }

 while (VAR_21 < VAR_14->len) {
  VAR_20 = FUNC_4(&VAR_16->complete,
       FUNC_1(500));

  if (!VAR_20)
   return -VAR_3;

  VAR_19 = FUNC_5(VAR_16);
  if (VAR_19)
   return VAR_19;

  VAR_14->buf[VAR_21] = FUNC_2(VAR_16->base + VAR_6) >> 8;
  VAR_21++;

  if (VAR_21 == VAR_14->len - 1) {
   VAR_17 = FUNC_2(VAR_16->base + VAR_7);
   VAR_17 |= (VAR_2 | VAR_0);
   FUNC_7(VAR_17, VAR_16->base + VAR_7);
  } else {
   VAR_17 = FUNC_2(VAR_16->base + VAR_7);
   VAR_17 |= VAR_0;
   FUNC_7(VAR_17, VAR_16->base + VAR_7);
  }
 }

 return 0;
}
