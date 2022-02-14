
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,int,int) ;
 int FUNC_4 (struct page*,int) ;

__attribute__((used)) static int FUNC_5(u64 VAR_7, u64 VAR_8,
      enum page_cache_mode VAR_9,
      enum page_cache_mode *VAR_10)
{
 struct page *VAR_11;
 u64 VAR_12;

 if (VAR_9 == VAR_6) {
  if (VAR_10)
   *VAR_10 = VAR_4;
  return -VAR_1;
 }

 if (VAR_9 == VAR_3) {

  FUNC_0(1);
  VAR_9 = VAR_4;
 }

 for (VAR_12 = (VAR_7 >> VAR_2); VAR_12 < (VAR_8 >> VAR_2); ++VAR_12) {
  enum page_cache_mode VAR_13;

  VAR_11 = FUNC_2(VAR_12);
  VAR_13 = FUNC_1(VAR_11);
  if (VAR_13 != VAR_5) {
   FUNC_3("x86/PAT: reserve_ram_pages_type failed [mem %#010Lx-%#010Lx], track 0x%x, req 0x%x\n",
    VAR_7, VAR_8 - 1, VAR_13, VAR_9);
   if (VAR_10)
    *VAR_10 = VAR_13;

   return -VAR_0;
  }
 }

 if (VAR_10)
  *VAR_10 = VAR_9;

 for (VAR_12 = (VAR_7 >> VAR_2); VAR_12 < (VAR_8 >> VAR_2); ++VAR_12) {
  VAR_11 = FUNC_2(VAR_12);
  FUNC_4(VAR_11, VAR_9);
 }
 return 0;
}
