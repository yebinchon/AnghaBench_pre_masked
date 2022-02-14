
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int (* panic ) (void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_2,
                             unsigned long VAR_3, void *VAR_4)
{




 FUNC_1();





 FUNC_0(((void*)0), VAR_4);
 if (VAR_1.panic)
  VAR_1.panic(VAR_4);
 return VAR_0;
}
