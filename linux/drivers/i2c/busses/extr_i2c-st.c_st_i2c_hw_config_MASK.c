
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_timings {int rate; int rep_start_hold; int rep_start_setup; int start_hold; int data_setup_time; int stop_setup_time; int bus_free_time; } ;
struct st_i2c_dev {size_t mode; unsigned long scl_min_width_us; unsigned long sda_min_width_us; scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 unsigned long FUNC_0 (int ) ;
 struct st_i2c_timings* VAR_25 ;
 int FUNC_1 (struct st_i2c_dev*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct st_i2c_dev *VAR_26)
{
 unsigned long VAR_27;
 u32 VAR_28, VAR_29;
 struct st_i2c_timings *VAR_30 = &VAR_25[VAR_26->mode];

 FUNC_1(VAR_26);

 VAR_28 = VAR_4 | VAR_3 | VAR_6 |
  VAR_5 | VAR_7;
 FUNC_2(VAR_28, VAR_26->base + VAR_2);


 VAR_28 = VAR_12 | VAR_11 | VAR_10 | VAR_9;
 FUNC_2(VAR_28, VAR_26->base + VAR_8);

 VAR_27 = FUNC_0(VAR_26->clk);
 VAR_29 = 1000000000 / VAR_27;


 VAR_28 = VAR_27 / (2 * VAR_30->rate);
 FUNC_2(VAR_28, VAR_26->base + VAR_0);


 FUNC_2(1, VAR_26->base + VAR_18);


 FUNC_2(VAR_15, VAR_26->base + VAR_14);


 VAR_28 = VAR_30->rep_start_hold / VAR_29;
 FUNC_2(VAR_28, VAR_26->base + VAR_21);


 VAR_28 = VAR_30->rep_start_setup / VAR_29;
 FUNC_2(VAR_28, VAR_26->base + VAR_22);


 VAR_28 = VAR_30->start_hold / VAR_29;
 FUNC_2(VAR_28, VAR_26->base + VAR_23);


 VAR_28 = VAR_30->data_setup_time / VAR_29;
 FUNC_2(VAR_28, VAR_26->base + VAR_13);


 VAR_28 = VAR_30->stop_setup_time / VAR_29;
 FUNC_2(VAR_28, VAR_26->base + VAR_24);


 VAR_28 = VAR_30->bus_free_time / VAR_29;
 FUNC_2(VAR_28, VAR_26->base + VAR_1);


 VAR_28 = VAR_27 / 10000000;
 FUNC_2(VAR_28, VAR_26->base + VAR_19);
 FUNC_2(VAR_28, VAR_26->base + VAR_20);


 VAR_28 = VAR_26->scl_min_width_us * VAR_27 / 100000000;
 FUNC_2(VAR_28, VAR_26->base + VAR_16);


 VAR_28 = VAR_26->sda_min_width_us * VAR_27 / 100000000;
 FUNC_2(VAR_28, VAR_26->base + VAR_17);
}
