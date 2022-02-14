
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;
struct gb_host_device {int num_cports; int dev; struct ida cport_id_map; } ;
struct es2_ap_dev {int cdsi1_in_use; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 struct es2_ap_dev* FUNC_1 (struct gb_host_device*) ;
 int FUNC_2 (struct ida*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct gb_host_device *VAR_5, int VAR_6,
         unsigned long VAR_7)
{
 struct es2_ap_dev *VAR_8 = FUNC_1(VAR_5);
 struct ida *VAR_9 = &VAR_5->cport_id_map;
 int VAR_10, VAR_11;

 switch (VAR_6) {
 case 129:
 case 128:
  FUNC_0(&VAR_5->dev, "cport %d not available\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_7 & VAR_3 &&
     VAR_7 & VAR_2) {
  if (VAR_8->cdsi1_in_use) {
   FUNC_0(&VAR_5->dev, "CDSI1 already in use\n");
   return -VAR_0;
  }

  VAR_8->cdsi1_in_use = 1;

  return 128;
 }

 if (VAR_6 < 0) {
  VAR_10 = 0;
  VAR_11 = VAR_5->num_cports;
 } else if (VAR_6 < VAR_5->num_cports) {
  VAR_10 = VAR_6;
  VAR_11 = VAR_6 + 1;
 } else {
  FUNC_0(&VAR_5->dev, "cport %d not available\n", VAR_6);
  return -VAR_1;
 }

 return FUNC_2(VAR_9, VAR_10, VAR_11, VAR_4);
}
