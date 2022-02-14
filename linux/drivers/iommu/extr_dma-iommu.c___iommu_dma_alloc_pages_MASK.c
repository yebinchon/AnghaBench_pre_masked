
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct page*,unsigned int) ;
 int FUNC_3 (struct page**,unsigned int) ;
 struct page* FUNC_4 (unsigned int,int,unsigned int) ;
 unsigned int FUNC_5 (struct device*) ;
 struct page** FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,unsigned int) ;

__attribute__((used)) static struct page **FUNC_9(struct device *VAR_5,
  unsigned int VAR_6, unsigned long VAR_7, gfp_t VAR_8)
{
 struct page **VAR_9;
 unsigned int VAR_10 = 0, VAR_11 = FUNC_5(VAR_5);

 VAR_7 &= (2U << VAR_1) - 1;
 if (!VAR_7)
  return ((void*)0);

 VAR_9 = FUNC_6(VAR_6 * sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);


 VAR_8 |= VAR_4 | VAR_2;

 while (VAR_6) {
  struct page *VAR_12 = ((void*)0);
  unsigned int VAR_13;






  for (VAR_7 &= (2U << FUNC_1(VAR_6)) - 1;
       VAR_7; VAR_7 &= ~VAR_13) {
   unsigned int VAR_14 = FUNC_1(VAR_7);
   gfp_t VAR_15 = VAR_8;

   VAR_13 = 1U << VAR_14;
   if (VAR_7 > VAR_13)
    VAR_15 |= VAR_3;
   VAR_12 = FUNC_4(VAR_11, VAR_15, VAR_14);
   if (!VAR_12)
    continue;
   if (!VAR_14)
    break;
   if (!FUNC_0(VAR_12)) {
    FUNC_8(VAR_12, VAR_14);
    break;
   } else if (!FUNC_7(VAR_12)) {
    break;
   }
   FUNC_2(VAR_12, VAR_14);
  }
  if (!VAR_12) {
   FUNC_3(VAR_9, VAR_10);
   return ((void*)0);
  }
  VAR_6 -= VAR_13;
  while (VAR_13--)
   VAR_9[VAR_10++] = VAR_12++;
 }
 return VAR_9;
}
