
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_device {int hwmods_cnt; int * hwmods; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct omap_device *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->hwmods_cnt; VAR_2++)
  VAR_1 |= FUNC_0(VAR_0->hwmods[VAR_2]);

 return VAR_1;
}
