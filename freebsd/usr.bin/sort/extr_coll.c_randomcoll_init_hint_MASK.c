
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct key_value {TYPE_3__* hint; } ;
struct TYPE_4__ {int cached; } ;
struct TYPE_5__ {TYPE_1__ Rh; } ;
struct TYPE_6__ {int status; TYPE_2__ v; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static void
FUNC_1(struct key_value *VAR_1, void *VAR_2)
{

 FUNC_0(VAR_1->hint->v.Rh.cached, VAR_2, sizeof(VAR_1->hint->v.Rh.cached));
 VAR_1->hint->status = VAR_0;
}
