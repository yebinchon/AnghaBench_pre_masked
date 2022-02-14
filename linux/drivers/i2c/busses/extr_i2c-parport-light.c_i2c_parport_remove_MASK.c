
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ val; } ;
struct TYPE_5__ {TYPE_1__ init; } ;


 TYPE_3__* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 if (VAR_1) {
  FUNC_2(0, &VAR_3);
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
 FUNC_0(&VAR_2);


 if (VAR_0[VAR_4].init.val)
  FUNC_2(0, &VAR_0[VAR_4].init);

 return 0;
}
