
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int info; int end; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(void *VAR_3, u64 *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2);
 VAR_5 = FUNC_3();
 if (VAR_5)
  goto out;

 if (FUNC_5(VAR_1.end)) {

  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5)
   goto out;
 }
 *VAR_4 = 0;
 FUNC_0(VAR_3, VAR_1.info, VAR_0);
out:
 FUNC_2(&VAR_2);
 return VAR_5;
}
