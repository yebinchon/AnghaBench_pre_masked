
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_4__ {int mRecursive; int mHandle; int mAlreadyLocked; } ;
typedef TYPE_1__ mtx_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_5(mtx_t *VAR_5, int VAR_6)
{






  int VAR_7;
  pthread_mutexattr_t VAR_8;
  FUNC_3(&VAR_8);
  if (VAR_6 & VAR_2)
  {
    FUNC_4(&VAR_8, VAR_1);
  }
  VAR_7 = FUNC_1(VAR_5, &VAR_8);
  FUNC_2(&VAR_8);
  return VAR_7 == 0 ? VAR_4 : VAR_3;

}
