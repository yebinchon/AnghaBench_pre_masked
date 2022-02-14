
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpl115_data {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mpl115_data *VAR_1)
{
 int VAR_2 = VAR_1->ops->write(VAR_1->dev, VAR_0, 0);

 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(3000, 4000);

 return 0;
}
