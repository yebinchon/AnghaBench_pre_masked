
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zopt2201_data {int lock; } ;
struct TYPE_2__ {int gain; int res; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct zopt2201_data*,int ) ;
 int FUNC_3 (struct zopt2201_data*,int ) ;

__attribute__((used)) static int FUNC_4(struct zopt2201_data *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->lock);
 VAR_3 = FUNC_3(VAR_1, VAR_0[VAR_2].res);
 if (VAR_3 < 0)
  goto unlock;

 VAR_3 = FUNC_2(VAR_1, VAR_0[VAR_2].gain);

unlock:
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}
