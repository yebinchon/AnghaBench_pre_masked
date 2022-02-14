
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cf_chash_ctx ;
struct TYPE_3__ {int hashsz; int (* digest ) (int *,int*) ;int (* update ) (int *,void const*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t,int*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int*,size_t) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static void FUNC_6(const cf_chash *VAR_1,
                               const void *VAR_2, size_t VAR_3,
                               uint8_t *VAR_4, size_t VAR_5)
{
  if (!VAR_3)
    return;


  uint8_t VAR_6 = 2;
  uint8_t VAR_7[VAR_0];
  cf_chash_ctx VAR_8;
  VAR_1->init(&VAR_8);
  VAR_1->update(&VAR_8, &VAR_6, sizeof VAR_6);
  VAR_1->update(&VAR_8, VAR_4, VAR_5);
  VAR_1->update(&VAR_8, VAR_2, VAR_3);
  VAR_1->digest(&VAR_8, VAR_7);


  FUNC_0(VAR_4, VAR_5, VAR_7, VAR_1->hashsz);
}
