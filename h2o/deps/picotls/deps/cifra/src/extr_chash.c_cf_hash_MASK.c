
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cf_chash_ctx ;
struct TYPE_4__ {int (* digest ) (int *,int *) ;int (* update ) (int *,void const*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(const cf_chash *VAR_0, const void *VAR_1, size_t VAR_2, uint8_t *VAR_3)
{
  cf_chash_ctx VAR_4;
  FUNC_0(VAR_0);
  VAR_0->init(&VAR_4);
  VAR_0->update(&VAR_4, VAR_1, VAR_2);
  VAR_0->digest(&VAR_4, VAR_3);
  FUNC_1(&VAR_4, sizeof VAR_4);
}
