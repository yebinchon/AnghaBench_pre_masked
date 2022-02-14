
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;
struct riic_dev {TYPE_1__ adapter; scalar_t__ base; int clk; } ;
struct i2c_timings {int bus_freq_hz; int scl_fall_ns; int scl_rise_ns; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,unsigned long,int,int,int,int,int,int) ;
 int FUNC_7 (struct riic_dev*,int,int ,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct riic_dev *VAR_13, struct i2c_timings *VAR_14)
{
 int VAR_15 = 0;
 unsigned long VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_4(VAR_13->adapter.dev.parent);

 if (VAR_14->bus_freq_hz > 400000) {
  FUNC_3(&VAR_13->adapter.dev,
   "unsupported bus speed (%dHz). 400000 max\n",
   VAR_14->bus_freq_hz);
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_2(VAR_13->clk);
 VAR_17 = FUNC_0(VAR_16, VAR_14->bus_freq_hz);

 for (VAR_18 = 0; VAR_18 < 7; VAR_18++) {




  VAR_19 = ((VAR_17 * 6) / 10);
  if (VAR_19 <= (0x1F + 3))
   break;

  VAR_17 /= 2;
  VAR_16 /= 2;
 }

 if (VAR_19 > (0x1F + 3)) {
  FUNC_3(&VAR_13->adapter.dev, "invalid speed (%lu). Too slow.\n",
   (unsigned long)VAR_14->bus_freq_hz);
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_20 = VAR_17 - VAR_19;


 if (VAR_18 == 0) {
  VAR_19 -= 4;
  VAR_20 -= 4;
 } else {
  VAR_19 -= 3;
  VAR_20 -= 3;
 }





 VAR_19 -= VAR_14->scl_fall_ns / (1000000000 / VAR_16);
 VAR_20 -= VAR_14->scl_rise_ns / (1000000000 / VAR_16);


 if (VAR_19 < 1)
  VAR_19 = 1;
 if (VAR_20 < 1)
  VAR_20 = 1;

 FUNC_6("i2c-riic: freq=%lu, duty=%d, fall=%lu, rise=%lu, cks=%d, brl=%d, brh=%d\n",
   VAR_16 / VAR_17, ((VAR_19 + 3) * 100) / (VAR_19 + VAR_20 + 6),
   VAR_14->scl_fall_ns / (1000000000 / VAR_16),
   VAR_14->scl_rise_ns / (1000000000 / VAR_16), VAR_18, VAR_19, VAR_20);


 FUNC_8(VAR_3 | VAR_4, VAR_13->base + VAR_9);
 FUNC_7(VAR_13, 0, VAR_2, VAR_9);

 FUNC_8(FUNC_1(VAR_18), VAR_13->base + VAR_10);
 FUNC_8(VAR_20 | VAR_1, VAR_13->base + VAR_7);
 FUNC_8(VAR_19 | VAR_1, VAR_13->base + VAR_8);

 FUNC_8(0, VAR_13->base + VAR_12);
 FUNC_8(VAR_5 | VAR_6, VAR_13->base + VAR_11);

 FUNC_7(VAR_13, VAR_3, 0, VAR_9);

out:
 FUNC_5(VAR_13->adapter.dev.parent);
 return VAR_15;
}
