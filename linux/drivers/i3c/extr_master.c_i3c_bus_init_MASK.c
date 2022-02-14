
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i3c; int i2c; } ;
struct i3c_bus {int id; int mode; TYPE_1__ devs; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct i3c_bus*) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct i3c_bus*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i3c_bus *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_4->lock);
 FUNC_0(&VAR_4->devs.i2c);
 FUNC_0(&VAR_4->devs.i3c);
 FUNC_1(VAR_4);
 VAR_4->mode = VAR_1;

 FUNC_4(&VAR_3);
 VAR_5 = FUNC_2(&VAR_2, VAR_4, 0, 0, VAR_0);
 FUNC_5(&VAR_3);

 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->id = VAR_5;

 return 0;
}
