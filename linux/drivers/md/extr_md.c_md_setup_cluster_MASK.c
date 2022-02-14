
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int dummy; } ;
struct TYPE_2__ {int (* join ) (struct mddev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mddev*,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct mddev *VAR_4, int VAR_5)
{
 if (!VAR_2)
  FUNC_1("md-cluster");
 FUNC_2(&VAR_3);

 if (!VAR_2 || !FUNC_5(VAR_1)) {
  FUNC_0("can't find md-cluster module or get it's reference.\n");
  FUNC_3(&VAR_3);
  return -VAR_0;
 }
 FUNC_3(&VAR_3);

 return VAR_2->join(VAR_4, VAR_5);
}
