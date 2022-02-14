
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_device {int compat_devs_mutex; int compat_devs; } ;
struct ib_core_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_core_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ib_core_device* FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_0, u32 VAR_1)
{
 struct ib_core_device *VAR_2;

 FUNC_2(&VAR_0->compat_devs_mutex);
 VAR_2 = FUNC_5(&VAR_0->compat_devs, VAR_1);
 FUNC_3(&VAR_0->compat_devs_mutex);
 if (VAR_2) {
  FUNC_1(VAR_2);
  FUNC_0(&VAR_2->dev);
  FUNC_4(&VAR_2->dev);
 }
}
