
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cf_chash_ctx ;
struct TYPE_3__ {size_t hashsz; size_t blocksz; int (* digest ) (int *,int *) ;int (* update ) (int *,int const*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int const*,size_t) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(const cf_chash *VAR_1,
                   const void *VAR_2, size_t VAR_3,
                   const char *VAR_4, size_t VAR_5)
{
  uint8_t VAR_6[VAR_0];
  const uint8_t *VAR_7 = VAR_2;
  size_t VAR_8 = VAR_3;

  cf_chash_ctx VAR_9;
  VAR_1->init(&VAR_9);


  if (VAR_3)
  {
    VAR_1->update(&VAR_9, VAR_7, 1);
    VAR_3--;
    VAR_7++;
  }

  VAR_1->update(&VAR_9, VAR_7, VAR_3);
  VAR_1->digest(&VAR_9, VAR_6);
  FUNC_0(VAR_5 == VAR_1->hashsz);
  FUNC_0(FUNC_1(VAR_6, VAR_4, VAR_5) == 0);


  VAR_7 = VAR_2;
  VAR_3 = VAR_8;

  VAR_1->init(&VAR_9);
  if (VAR_3 >= VAR_1->blocksz)
  {
    VAR_1->update(&VAR_9, VAR_7, VAR_1->blocksz - 1);
    VAR_3 -= VAR_1->blocksz - 1;
    VAR_7 += VAR_1->blocksz - 1;
  }

  VAR_1->update(&VAR_9, VAR_7, VAR_3);
  VAR_1->digest(&VAR_9, VAR_6);
  FUNC_0(FUNC_1(VAR_6, VAR_4, VAR_5) == 0);
}
