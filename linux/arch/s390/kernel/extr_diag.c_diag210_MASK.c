
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diag210 {int dummy; } ;
struct TYPE_2__ {int (* diag210 ) (struct diag210*) ;} ;
typedef int DEFINE_SPINLOCK ;


 int VAR_0 ;
 struct diag210* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct diag210*) ;

int FUNC_4(struct diag210 *VAR_3)
{
 static DEFINE_SPINLOCK(VAR_4);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, VAR_5);
 *VAR_1 = *VAR_3;

 FUNC_0(VAR_0);
 VAR_6 = VAR_2.diag210(VAR_1);

 *VAR_3 = *VAR_1;
 FUNC_2(&VAR_4, VAR_5);

 return VAR_6;
}
