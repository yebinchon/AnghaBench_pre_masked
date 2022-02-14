
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,unsigned long,int const*,int) ;

void FUNC_1(struct page *VAR_2, unsigned long VAR_3,
      void *VAR_4, unsigned long VAR_5)
{
 const u32 VAR_6 = VAR_1;
 u32 VAR_7 = *(u32 *) VAR_4;







 u32 VAR_8 = (VAR_7 >> 30) & 0x3;
 u32 VAR_9 = (VAR_7 >> 22) & 0x7;

 if (VAR_8 == 0 &&
     (VAR_9 == 1 || VAR_9 == 2 || VAR_9 == 3 || VAR_9 == 5 || VAR_9 == 6) &&
     (VAR_7 & VAR_0) == VAR_0)
  VAR_7 &= ~VAR_0;

 FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_5);
 FUNC_0(VAR_2, VAR_3+VAR_5, &VAR_6, 4);
}
