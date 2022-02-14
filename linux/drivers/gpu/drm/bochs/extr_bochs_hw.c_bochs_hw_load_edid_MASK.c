
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bochs_device {int * edid; int connector; int mmio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bochs_device*,int *,int ,int ) ;
 int * FUNC_2 (int *,int (*) (struct bochs_device*,int *,int ,int ),struct bochs_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct bochs_device *VAR_0)
{
 u8 VAR_1[8];

 if (!VAR_0->mmio)
  return -1;


 FUNC_1(VAR_0, VAR_1, 0, FUNC_0(VAR_1));
 if (FUNC_3(VAR_1) != 8)
  return -1;

 FUNC_4(VAR_0->edid);
 VAR_0->edid = FUNC_2(&VAR_0->connector,
          FUNC_1, VAR_0);
 if (VAR_0->edid == ((void*)0))
  return -1;

 return 0;
}
