
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dmz_metadata {int dummy; } ;
struct dm_zone {unsigned int chunk; int link; TYPE_1__* bzone; int flags; } ;
struct TYPE_3__ {int * bzone; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (struct dmz_metadata*,TYPE_1__*) ;
 int FUNC_2 (struct dmz_metadata*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct dmz_metadata *VAR_2, struct dm_zone *VAR_3)
{
 unsigned int VAR_4 = VAR_3->chunk;
 unsigned int VAR_5;

 if (VAR_4 == VAR_1) {

  return;
 }

 if (FUNC_4(VAR_0, &VAR_3->flags)) {




  VAR_5 = FUNC_1(VAR_2, VAR_3->bzone);
  VAR_3->bzone->bzone = ((void*)0);
  VAR_3->bzone = ((void*)0);

 } else {




  if (FUNC_0(VAR_3->bzone)) {
   VAR_3->bzone->bzone = ((void*)0);
   VAR_3->bzone = ((void*)0);
  }
  VAR_5 = VAR_1;
 }

 FUNC_2(VAR_2, VAR_4, VAR_5, VAR_1);

 VAR_3->chunk = VAR_1;
 FUNC_3(&VAR_3->link);
}
