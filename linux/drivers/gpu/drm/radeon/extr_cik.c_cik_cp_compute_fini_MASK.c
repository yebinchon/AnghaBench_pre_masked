
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* ring; int dev; } ;
struct TYPE_2__ {int * mqd_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_2, 0);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  if (VAR_3 == 0)
   VAR_4 = VAR_0;
  else
   VAR_4 = VAR_1;

  if (VAR_2->ring[VAR_4].mqd_obj) {
   VAR_5 = FUNC_2(VAR_2->ring[VAR_4].mqd_obj, 0);
   if (FUNC_6(VAR_5 != 0))
    FUNC_1(VAR_2->dev, "(%d) reserve MQD bo failed\n", VAR_5);

   FUNC_3(VAR_2->ring[VAR_4].mqd_obj);
   FUNC_5(VAR_2->ring[VAR_4].mqd_obj);

   FUNC_4(&VAR_2->ring[VAR_4].mqd_obj);
   VAR_2->ring[VAR_4].mqd_obj = ((void*)0);
  }
 }
}
