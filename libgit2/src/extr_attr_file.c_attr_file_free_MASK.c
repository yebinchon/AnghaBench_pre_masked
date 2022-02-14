
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int pool; } ;
typedef TYPE_1__ git_attr_file ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(git_attr_file *VAR_0)
{
 bool VAR_1 = !FUNC_4(&VAR_0->lock);
 FUNC_2(VAR_0, 0);
 FUNC_6(&VAR_0->pool);
 if (VAR_1)
  FUNC_5(&VAR_0->lock);
 FUNC_3(&VAR_0->lock);

 FUNC_1(VAR_0, sizeof(*VAR_0));
 FUNC_0(VAR_0);
}
