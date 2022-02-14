
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dock_station {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dock_station*) ;
 int FUNC_4 (struct dock_station*,int ,int ) ;
 scalar_t__ FUNC_5 (struct dock_station*) ;
 scalar_t__ FUNC_6 (struct dock_station*) ;
 int FUNC_7 (struct dock_station*) ;
 int FUNC_8 (struct dock_station*) ;

__attribute__((used)) static int FUNC_9(struct dock_station *VAR_2, u32 VAR_3)
{
 if (FUNC_5(VAR_2))
  return -VAR_0;
 FUNC_4(VAR_2, VAR_3, VAR_1);

 FUNC_7(VAR_2);
 FUNC_8(VAR_2);
 FUNC_1(VAR_2->handle, 0);
 FUNC_0(VAR_2->handle);
 if (FUNC_6(VAR_2)) {
  FUNC_2(VAR_2->handle, "Unable to undock!\n");
  return -VAR_0;
 }
 FUNC_3(VAR_2);
 return 0;
}
