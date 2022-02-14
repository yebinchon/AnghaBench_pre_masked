
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct gmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct gmap*,unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (int *) ;
 struct page* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct gmap *VAR_6, unsigned long VAR_7,
    unsigned long *VAR_8)
{
 unsigned long *VAR_9;
 struct page *VAR_10;
 int VAR_11;

 FUNC_0(!FUNC_4(VAR_6));
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++, VAR_7 += VAR_4) {
  if (!(VAR_8[VAR_11] & VAR_5))
   continue;
  VAR_9 = (unsigned long *)(VAR_8[VAR_11] & VAR_5);
  VAR_8[VAR_11] = VAR_3;
  FUNC_2(VAR_6, VAR_7, VAR_9);

  VAR_10 = FUNC_6(FUNC_3(VAR_9) >> VAR_1);
  FUNC_5(&VAR_10->lru);
  FUNC_1(VAR_10, VAR_0);
 }
}
