
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007_platform_data {scalar_t__ x_plate_ohms; int fuzzz; int fuzzy; int fuzzx; int clear_penirq; int get_pendown_state; scalar_t__ poll_period; scalar_t__ max_rt; int model; } ;
struct tsc2007 {scalar_t__ x_plate_ohms; int fuzzz; int fuzzy; int fuzzx; int clear_penirq; int get_pendown_state; int poll_period; int max_rt; int model; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, struct tsc2007 *VAR_3,
         const struct tsc2007_platform_data *VAR_4,
         const struct i2c_device_id *VAR_5)
{
 VAR_3->model = VAR_4->model;
 VAR_3->x_plate_ohms = VAR_4->x_plate_ohms;
 VAR_3->max_rt = VAR_4->max_rt ? : VAR_1;
 VAR_3->poll_period = FUNC_1(VAR_4->poll_period ? : 1);
 VAR_3->get_pendown_state = VAR_4->get_pendown_state;
 VAR_3->clear_penirq = VAR_4->clear_penirq;
 VAR_3->fuzzx = VAR_4->fuzzx;
 VAR_3->fuzzy = VAR_4->fuzzy;
 VAR_3->fuzzz = VAR_4->fuzzz;

 if (VAR_4->x_plate_ohms == 0) {
  FUNC_0(&VAR_2->dev, "x_plate_ohms is not set up in platform data");
  return -VAR_0;
 }

 return 0;
}
