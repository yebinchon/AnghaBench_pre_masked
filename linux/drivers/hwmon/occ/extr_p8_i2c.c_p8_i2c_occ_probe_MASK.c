
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occ {int powr_sample_time_us; int poll_cmd_data; int send_cmd; int * bus_dev; } ;
struct p8_i2c_occ {struct occ occ; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct occ*) ;
 struct p8_i2c_occ* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct occ*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
       const struct i2c_device_id *VAR_4)
{
 struct occ *VAR_5;
 struct p8_i2c_occ *VAR_6 = FUNC_1(&VAR_3->dev, sizeof(*VAR_6),
           VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->client = VAR_3;
 VAR_5 = &VAR_6->occ;
 VAR_5->bus_dev = &VAR_3->dev;
 FUNC_0(&VAR_3->dev, VAR_5);

 VAR_5->powr_sample_time_us = 250;
 VAR_5->poll_cmd_data = 0x10;
 VAR_5->send_cmd = VAR_2;

 return FUNC_2(VAR_5, "p8_occ");
}
