
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ,struct page**) ;
 int FUNC_4 (struct page**,int,int ) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long,int,int *) ;

__attribute__((used)) static int FUNC_8(struct page **VAR_7, int VAR_8,
  enum page_cache_mode VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 enum page_cache_mode VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  if (FUNC_0(VAR_7[VAR_13]))
   continue;
  VAR_10 = FUNC_6(VAR_7[VAR_13]) << VAR_2;
  VAR_11 = VAR_10 + VAR_3;
  if (FUNC_7(VAR_10, VAR_11, VAR_9, ((void*)0)))
   goto err_out;
 }


 VAR_12 = (VAR_9 == VAR_6) ?
    VAR_5 : VAR_9;

 VAR_15 = FUNC_4(VAR_7, VAR_8,
      FUNC_2(VAR_12));
 if (!VAR_15 && VAR_9 == VAR_6)
  VAR_15 = FUNC_3(((void*)0), VAR_8,
            FUNC_2(
      VAR_6),
            FUNC_1(VAR_4),
            0, VAR_0, VAR_7);
 if (VAR_15)
  goto err_out;
 return 0;
err_out:
 VAR_14 = VAR_13;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  if (FUNC_0(VAR_7[VAR_13]))
   continue;
  VAR_10 = FUNC_6(VAR_7[VAR_13]) << VAR_2;
  VAR_11 = VAR_10 + VAR_3;
  FUNC_5(VAR_10, VAR_11);
 }
 return -VAR_1;
}
