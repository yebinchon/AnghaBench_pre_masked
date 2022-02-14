
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ida {int dummy; } ;
struct gb_host_device {int dev; struct ida cport_id_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct ida*,scalar_t__,scalar_t__,int ) ;

int FUNC_2(struct gb_host_device *VAR_1, u16 VAR_2)
{
 struct ida *VAR_3 = &VAR_1->cport_id_map;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_2 + 1, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev, "failed to reserve cport %u\n", VAR_2);
  return VAR_4;
 }

 return 0;
}
