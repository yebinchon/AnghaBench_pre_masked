
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(dev_t VAR_4, struct thread *VAR_5)
{
    int VAR_6;




    FUNC_1(&VAR_1);
    VAR_6 = FUNC_0(VAR_4, &VAR_2);
    if (VAR_6 && VAR_6 != VAR_0) {
     FUNC_2(&VAR_1);
     return VAR_6;
    }
    VAR_6 = FUNC_0(VAR_4, &VAR_3);
    FUNC_2(&VAR_1);
    if (VAR_6 && VAR_6 != VAR_0) {
     return VAR_6;
    }
    return 0;
}
