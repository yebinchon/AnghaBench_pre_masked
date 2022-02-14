
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_piter {int dummy; } ;
struct page {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (struct vmw_piter*) ;
 int FUNC_7 (struct vmw_piter*) ;
 struct page* FUNC_8 (struct vmw_piter*) ;

__attribute__((used)) static unsigned long FUNC_9(struct vmw_piter *VAR_2,
          unsigned long VAR_3,
          struct vmw_piter *VAR_4)
{
 unsigned long VAR_5 = VAR_3 * VAR_1;
 unsigned long VAR_6 = FUNC_0(VAR_5, VAR_0);
 unsigned long VAR_7;
 u32 *VAR_8, *VAR_9;
 unsigned long VAR_10;
 struct page *VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_11 = FUNC_8(VAR_4);

  VAR_9 = VAR_8 = FUNC_2(VAR_11);

  for (VAR_10 = 0; VAR_10 < VAR_0 / VAR_1; ++VAR_10) {
   FUNC_5(&VAR_8,
        FUNC_6(VAR_2));
   if (FUNC_4(--VAR_3 == 0))
    break;
   FUNC_1(!FUNC_7(VAR_2));
  }
  FUNC_3(VAR_9);
  FUNC_7(VAR_4);
 }

 return VAR_6;
}
