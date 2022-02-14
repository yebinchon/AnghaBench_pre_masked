
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_host_device {int cport_id_map; } ;
struct es2_ap_dev {int cdsi1_in_use; } ;



 struct es2_ap_dev* FUNC_0 (struct gb_host_device*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct gb_host_device *VAR_0, u16 VAR_1)
{
 struct es2_ap_dev *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 128:
  VAR_2->cdsi1_in_use = 0;
  return;
 }

 FUNC_1(&VAR_0->cport_id_map, VAR_1);
}
