
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ mtx_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

bool
FUNC_5(mtx_t *VAR_3) {
 pthread_mutexattr_t VAR_4;

 if (FUNC_3(&VAR_4) != 0) {
  return 1;
 }
 FUNC_4(&VAR_4, VAR_1);
 if (FUNC_1(&VAR_3->lock, &VAR_4) != 0) {
  FUNC_2(&VAR_4);
  return 1;
 }
 FUNC_2(&VAR_4);

 return 0;
}
