
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gnttab_unmap_grant_ref {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct gnttab_unmap_grant_ref*,unsigned int) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct page*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct gnttab_unmap_grant_ref *VAR_5,
         struct gnttab_unmap_grant_ref *VAR_6,
         struct page **VAR_7, unsigned int VAR_8)
{
 int VAR_9, VAR_10 = 0;

 if (FUNC_4(VAR_4))
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  unsigned long VAR_11 = FUNC_1(FUNC_2(VAR_7[VAR_9]));
  unsigned long VAR_12 = FUNC_2(VAR_7[VAR_9]);

  if (VAR_11 == VAR_3 || !(VAR_11 & VAR_1)) {
   VAR_10 = -VAR_0;
   goto out;
  }

  FUNC_3(VAR_12, VAR_3);
 }
 if (VAR_6)
  VAR_10 = FUNC_0(VAR_2,
      VAR_6, VAR_8);
out:
 return VAR_10;
}
