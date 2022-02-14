
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int cf_chash_ctx ;
struct TYPE_3__ {int hashsz; int (* digest ) (int *,int*) ;int (* update ) (int *,void const*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,void const*,size_t) ;
 int FUNC_6 (int *,void const*,size_t) ;
 int FUNC_7 (int *,void const*,size_t) ;
 int FUNC_8 (int *,void const*,size_t) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (size_t,int*) ;

__attribute__((used)) static void FUNC_11(const cf_chash *VAR_1,
                    const void *VAR_2, size_t VAR_3,
                    const void *VAR_4, size_t VAR_5,
                    const void *VAR_6, size_t VAR_7,
                    const void *VAR_8, size_t VAR_9,
                    uint8_t *VAR_10, size_t VAR_11)
{
  uint8_t VAR_12 = 1;
  uint32_t VAR_13 = VAR_11 * 8;
  uint8_t VAR_14[4];
  uint8_t VAR_15[VAR_0];

  FUNC_10(VAR_13, VAR_14);

  while (VAR_11)
  {



    cf_chash_ctx VAR_16;
    VAR_1->init(&VAR_16);
    VAR_1->update(&VAR_16, &VAR_12, sizeof VAR_12);
    VAR_1->update(&VAR_16, VAR_14, sizeof VAR_14);
    VAR_1->update(&VAR_16, VAR_2, VAR_3);
    VAR_1->update(&VAR_16, VAR_4, VAR_5);
    VAR_1->update(&VAR_16, VAR_6, VAR_7);
    VAR_1->update(&VAR_16, VAR_8, VAR_9);
    VAR_1->digest(&VAR_16, VAR_15);

    size_t VAR_17 = FUNC_0(VAR_1->hashsz, VAR_11);
    FUNC_1(VAR_10, VAR_15, VAR_17);
    VAR_10 += VAR_17;
    VAR_11 -= VAR_17;

    VAR_12 += 1;
  }
}
