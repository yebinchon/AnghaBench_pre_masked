
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch_id_t {int patchlen; int ctx; } ;
struct TYPE_2__ {int (* update_fn ) (int ,char*,int) ;} ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 struct patch_id_t *VAR_4 = VAR_1;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 VAR_0->update_fn(VAR_4->ctx, VAR_2, VAR_5);
 VAR_4->patchlen += VAR_5;
}
