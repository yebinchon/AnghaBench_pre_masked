
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_recovery_ctx {scalar_t__ pool_offset; int valid_pages; struct page** ra_pool; } ;
struct r5l_log {int dummy; } ;
struct page {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct r5l_log*,struct r5l_recovery_ctx*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct r5l_log *VAR_3,
      struct r5l_recovery_ctx *VAR_4,
      struct page *VAR_5,
      sector_t VAR_6)
{
 int VAR_7;

 if (VAR_6 < VAR_4->pool_offset ||
     VAR_6 >= VAR_4->pool_offset + VAR_4->valid_pages * VAR_0) {
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_0(VAR_6 < VAR_4->pool_offset ||
        VAR_6 >= VAR_4->pool_offset + VAR_4->valid_pages * VAR_0);

 FUNC_1(FUNC_2(VAR_5),
        FUNC_2(VAR_4->ra_pool[(VAR_6 - VAR_4->pool_offset) >>
      VAR_1]),
        VAR_2);
 return 0;
}
