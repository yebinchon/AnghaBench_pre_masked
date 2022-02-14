
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct td {int dummy; } ;
struct ed {int dummy; } ;
struct admhcd {int * td_cache; void* ed_cache; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct admhcd*) ;
 void* FUNC_1 (char*,int ,int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct admhcd *VAR_3)
{
 VAR_3->td_cache = FUNC_1("admhc_td",
  FUNC_0(VAR_3)->self.controller,
  sizeof(struct td),
  VAR_2,
  0
  );
 if (!VAR_3->td_cache)
  goto err;

 VAR_3->ed_cache = FUNC_1("admhc_ed",
  FUNC_0(VAR_3)->self.controller,
  sizeof(struct ed),
  VAR_0,
  0
  );
 if (!VAR_3->ed_cache)
  goto err_td_cache;

 return 0;

err_td_cache:
 FUNC_2(VAR_3->td_cache);
 VAR_3->td_cache = ((void*)0);
err:
 return -VAR_1;
}
