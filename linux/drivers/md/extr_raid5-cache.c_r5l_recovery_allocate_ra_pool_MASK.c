
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_recovery_ctx {size_t total_pages; scalar_t__ pool_offset; int ra_bio; struct page** ra_pool; scalar_t__ valid_pages; } ;
struct r5l_log {int bs; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct r5l_log *VAR_4,
         struct r5l_recovery_ctx *VAR_5)
{
 struct page *VAR_6;

 VAR_5->ra_bio = FUNC_1(VAR_2, VAR_0, &VAR_4->bs);
 if (!VAR_5->ra_bio)
  return -VAR_1;

 VAR_5->valid_pages = 0;
 VAR_5->total_pages = 0;
 while (VAR_5->total_pages < VAR_3) {
  VAR_6 = FUNC_0(VAR_2);

  if (!VAR_6)
   break;
  VAR_5->ra_pool[VAR_5->total_pages] = VAR_6;
  VAR_5->total_pages += 1;
 }

 if (VAR_5->total_pages == 0) {
  FUNC_2(VAR_5->ra_bio);
  return -VAR_1;
 }

 VAR_5->pool_offset = 0;
 return 0;
}
