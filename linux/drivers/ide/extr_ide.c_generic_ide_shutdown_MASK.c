
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_driver {int (* shutdown ) (int *) ;} ;
struct device {scalar_t__ driver; } ;
typedef int ide_drive_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct device*) ;
 struct ide_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 ide_drive_t *VAR_1 = FUNC_1(VAR_0);
 struct ide_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_0->driver && VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
}
