
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; } ;
struct mkuz_blk {TYPE_1__ info; int data; int alen; } ;
typedef int ZSTD_CCtx ;


 size_t FUNC_0 (int *,int ,int ,int ,size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int,char*,int ) ;

void
FUNC_4(void *VAR_0, const struct mkuz_blk *VAR_1, struct mkuz_blk *VAR_2)
{
 ZSTD_CCtx *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2->data, VAR_2->alen, VAR_1->data,
     VAR_1->info.len);
 if (FUNC_2(VAR_4))
  FUNC_3(1, "could not compress data: ZSTD_compress2: %s",
      FUNC_1(VAR_4));

 VAR_2->info.len = VAR_4;
}
