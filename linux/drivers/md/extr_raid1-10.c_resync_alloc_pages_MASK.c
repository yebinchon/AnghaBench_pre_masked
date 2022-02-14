
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resync_pages {int * pages; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct resync_pages *VAR_2,
         gfp_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_2->pages[VAR_4] = FUNC_0(VAR_3);
  if (!VAR_2->pages[VAR_4])
   goto out_free;
 }

 return 0;

out_free:
 while (--VAR_4 >= 0)
  FUNC_1(VAR_2->pages[VAR_4]);
 return -VAR_0;
}
