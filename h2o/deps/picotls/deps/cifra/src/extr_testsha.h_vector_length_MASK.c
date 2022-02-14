
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cf_chash_ctx ;
struct TYPE_3__ {size_t hashsz; int (* digest ) (int *,int*) ;int (* update ) (int *,int*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void const*,int*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int*,size_t) ;
 int FUNC_7 (int *,int*) ;

__attribute__((used)) static inline void FUNC_8(const cf_chash *VAR_1,
                                 size_t VAR_2,
                                 const void *VAR_3, size_t VAR_4)
{
  cf_chash_ctx VAR_5, VAR_6;
  uint8_t VAR_7[VAR_0];

  VAR_1->init(&VAR_5);

  for (size_t VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  {
    VAR_1->init(&VAR_6);

    for (size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      uint8_t VAR_10 = (uint8_t) VAR_8 & 0xff;
      VAR_1->update(&VAR_6, &VAR_10, 1);
    }

    VAR_1->digest(&VAR_6, VAR_7);

    VAR_1->update(&VAR_5, VAR_7, VAR_1->hashsz);
  }

  VAR_1->digest(&VAR_5, VAR_7);

  FUNC_0(VAR_1->hashsz == VAR_4);
  FUNC_0(FUNC_1(VAR_3, VAR_7, VAR_4) == 0);
}
