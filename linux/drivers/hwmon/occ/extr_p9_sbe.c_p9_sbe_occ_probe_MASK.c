
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct occ {int powr_sample_time_us; int poll_cmd_data; int send_cmd; TYPE_1__* bus_dev; } ;
struct p9_sbe_occ {struct occ occ; int sbe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct p9_sbe_occ* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (struct occ*,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct platform_device*,struct occ*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 int VAR_6;
 struct occ *VAR_7;
 struct p9_sbe_occ *VAR_8 = FUNC_0(&VAR_5->dev, sizeof(*VAR_8),
           VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->sbe = VAR_5->dev.parent;
 VAR_7 = &VAR_8->occ;
 VAR_7->bus_dev = &VAR_5->dev;
 FUNC_2(VAR_5, VAR_7);

 VAR_7->powr_sample_time_us = 500;
 VAR_7->poll_cmd_data = 0x20;
 VAR_7->send_cmd = VAR_4;

 VAR_6 = FUNC_1(VAR_7, "p9_occ");
 if (VAR_6 == -VAR_2)
  VAR_6 = -VAR_0;

 return VAR_6;
}
