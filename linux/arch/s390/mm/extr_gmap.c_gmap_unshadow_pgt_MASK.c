
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct gmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct gmap*,unsigned long,unsigned long*) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (struct gmap*,unsigned long,scalar_t__) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct gmap*) ;
 unsigned long* FUNC_6 (struct gmap*,unsigned long,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*) ;
 struct page* FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct gmap *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, *VAR_10, *VAR_11;
 struct page *VAR_12;

 FUNC_0(!FUNC_5(VAR_7));
 VAR_10 = FUNC_6(VAR_7, VAR_8, 1);
 if (!VAR_10 || !(*VAR_10 & VAR_3))
  return;
 FUNC_3(VAR_7, VAR_8, VAR_8 + VAR_6 - 1);
 VAR_9 = (unsigned long) (VAR_10 - ((VAR_8 & VAR_4) >> VAR_5));
 FUNC_4(VAR_9 | VAR_1, VAR_8);
 VAR_11 = (unsigned long *)(*VAR_10 & VAR_3);
 *VAR_10 = VAR_2;
 FUNC_1(VAR_7, VAR_8, VAR_11);

 VAR_12 = FUNC_9(FUNC_2(VAR_11) >> VAR_0);
 FUNC_7(&VAR_12->lru);
 FUNC_8(VAR_12);
}
