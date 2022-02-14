
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_host_device {int cport_id_map; int bus_id; scalar_t__ svc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct gb_host_device*) ;
 struct gb_host_device* FUNC_4 (struct device*) ;
 int FUNC_5 (struct gb_host_device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1)
{
 struct gb_host_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_2);

 if (VAR_2->svc)
  FUNC_0(VAR_2->svc);
 FUNC_2(&VAR_0, VAR_2->bus_id);
 FUNC_1(&VAR_2->cport_id_map);
 FUNC_3(VAR_2);
}
