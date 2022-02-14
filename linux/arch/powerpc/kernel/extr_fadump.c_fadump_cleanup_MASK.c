
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; scalar_t__ dump_registered; scalar_t__ dump_active; int fadump_supported; } ;
struct TYPE_6__ {int (* fadump_cleanup ) (TYPE_2__*) ;int (* fadump_unregister ) (TYPE_2__*) ;int (* fadump_invalidate ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(void)
{
 if (!VAR_1.fadump_supported)
  return;


 if (VAR_1.dump_active) {
  FUNC_1("Invalidating firmware-assisted dump registration\n");
  VAR_1.ops->fadump_invalidate(&VAR_1);
 } else if (VAR_1.dump_registered) {

  VAR_1.ops->fadump_unregister(&VAR_1);
  FUNC_0(&VAR_0);
 }

 if (VAR_1.ops->fadump_cleanup)
  VAR_1.ops->fadump_cleanup(&VAR_1);
}
