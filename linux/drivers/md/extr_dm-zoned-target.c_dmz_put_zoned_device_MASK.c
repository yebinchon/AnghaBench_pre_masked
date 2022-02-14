
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int * dev; int ddev; } ;
struct dm_target {struct dmz_target* private; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0)
{
 struct dmz_target *VAR_1 = VAR_0->private;

 FUNC_0(VAR_0, VAR_1->ddev);
 FUNC_1(VAR_1->dev);
 VAR_1->dev = ((void*)0);
}
