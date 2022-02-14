
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct memtype {int type; } ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;
struct TYPE_2__ {scalar_t__ (* is_untracked_pat_range ) (int,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 struct page* FUNC_2 (int) ;
 struct memtype* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static enum page_cache_mode FUNC_7(u64 VAR_6)
{
 enum page_cache_mode VAR_7 = VAR_3;
 struct memtype *VAR_8;

 if (VAR_5.is_untracked_pat_range(VAR_6, VAR_6 + VAR_1))
  return VAR_7;

 if (FUNC_1(VAR_6, VAR_6 + VAR_1)) {
  struct page *VAR_9;

  VAR_9 = FUNC_2(VAR_6 >> VAR_0);
  return FUNC_0(VAR_9);
 }

 FUNC_4(&VAR_4);

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 != ((void*)0))
  VAR_7 = VAR_8->type;
 else
  VAR_7 = VAR_2;

 FUNC_5(&VAR_4);
 return VAR_7;
}
