
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
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct gmap*,unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct gmap*) ;
 int FUNC_6 (int *) ;
 struct page* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct gmap *VAR_7, unsigned long VAR_8,
    unsigned long *VAR_9)
{
 unsigned long VAR_10, *VAR_11;
 struct page *VAR_12;
 int VAR_13;

 FUNC_0(!FUNC_5(VAR_7));
 VAR_10 = (unsigned long) VAR_9 | VAR_2;
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++, VAR_8 += VAR_5) {
  if (!(VAR_9[VAR_13] & VAR_6))
   continue;
  VAR_11 = (unsigned long *)(VAR_9[VAR_13] & VAR_6);
  FUNC_2(VAR_7, VAR_8, VAR_11);

  FUNC_4(VAR_10, VAR_8);
  VAR_9[VAR_13] = VAR_4;

  VAR_12 = FUNC_7(FUNC_3(VAR_11) >> VAR_1);
  FUNC_6(&VAR_12->lru);
  FUNC_1(VAR_12, VAR_0);
 }
}
