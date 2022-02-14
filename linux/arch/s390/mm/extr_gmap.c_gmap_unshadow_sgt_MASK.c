
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct gmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct gmap*,unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (struct gmap*,unsigned long,scalar_t__) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct gmap*) ;
 unsigned long* FUNC_7 (struct gmap*,unsigned long,int) ;
 int FUNC_8 (int *) ;
 struct page* FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct gmap *VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10, *VAR_11, *VAR_12;
 struct page *VAR_13;

 FUNC_0(!FUNC_6(VAR_8));
 VAR_11 = FUNC_7(VAR_8, VAR_9, 2);
 if (!VAR_11 || !(*VAR_11 & VAR_7))
  return;
 FUNC_4(VAR_8, VAR_9, VAR_9 + VAR_6 - 1);
 VAR_10 = (unsigned long) (VAR_11 - ((VAR_9 & VAR_4) >> VAR_5));
 FUNC_5(VAR_10 | VAR_2, VAR_9);
 VAR_12 = (unsigned long *)(*VAR_11 & VAR_7);
 *VAR_11 = VAR_3;
 FUNC_2(VAR_8, VAR_9, VAR_12);

 VAR_13 = FUNC_9(FUNC_3(VAR_12) >> VAR_1);
 FUNC_8(&VAR_13->lru);
 FUNC_1(VAR_13, VAR_0);
}
