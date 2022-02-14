
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int wq; int device_id_map; scalar_t__ connection; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gb_svc*) ;
 struct gb_svc* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct gb_svc *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1->connection)
  FUNC_1(VAR_1->connection);
 FUNC_2(&VAR_1->device_id_map);
 FUNC_0(VAR_1->wq);
 FUNC_3(VAR_1);
}
