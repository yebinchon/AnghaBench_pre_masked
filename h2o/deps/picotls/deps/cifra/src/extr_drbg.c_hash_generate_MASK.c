
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cf_chash_ctx ;
struct TYPE_3__ {int hashsz; int (* digest ) (int *,int*) ;int (* update ) (int *,int*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int*,size_t,int*,int) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,size_t) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static void FUNC_6(const cf_chash *VAR_1,
                          uint8_t *VAR_2, size_t VAR_3,
                          void *VAR_4, size_t VAR_5)
{
  cf_chash_ctx VAR_6;
  uint8_t VAR_7[VAR_0];
  uint8_t *VAR_8 = VAR_4;
  uint8_t VAR_9 = 1;

  while (VAR_5)
  {

    VAR_1->init(&VAR_6);
    VAR_1->update(&VAR_6, VAR_2, VAR_3);
    VAR_1->digest(&VAR_6, VAR_7);


    size_t VAR_10 = FUNC_0(VAR_1->hashsz, VAR_5);
    FUNC_2(VAR_8, VAR_7, VAR_10);
    VAR_8 += VAR_10;
    VAR_5 -= VAR_10;


    FUNC_1(VAR_2, VAR_3, &VAR_9, sizeof VAR_9);
  }
}
