
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_filter ;
struct TYPE_2__ {int filters; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;

int FUNC_7(void)
{
 git_filter *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (FUNC_5(&VAR_5.lock) < 0)
  return -1;

 if ((VAR_9 = FUNC_6(&VAR_5.filters, 2,
  VAR_4)) < 0)
  goto done;

 if ((VAR_7 = FUNC_2()) == ((void*)0) ||
  FUNC_0(
   VAR_0, VAR_7, VAR_1) < 0 ||
  (VAR_8 = FUNC_4()) == ((void*)0) ||
  FUNC_0(
   VAR_2, VAR_8, VAR_3) < 0)
  VAR_9 = -1;

 FUNC_1(VAR_6);

done:
 if (VAR_9) {
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
 }

 return VAR_9;
}
