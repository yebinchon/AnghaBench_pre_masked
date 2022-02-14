
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table_config {scalar_t__ linked; int ti_copy; int astate; TYPE_1__* ta; } ;
struct namedobj_instance {int dummy; } ;
struct TYPE_2__ {int (* destroy ) (int ,int *) ;} ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct table_config*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct namedobj_instance *VAR_1, struct table_config *VAR_2)
{

 FUNC_0(VAR_2->linked == 0, ("free() on linked config"));






 VAR_2->ta->destroy(VAR_2->astate, &VAR_2->ti_copy);
 FUNC_1(VAR_2, VAR_0);
}
