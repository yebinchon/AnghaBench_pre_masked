
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct siw_sge {unsigned int laddr; scalar_t__ length; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (struct socket*,struct page**,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_2, struct page **VAR_3,
   struct siw_sge *VAR_4, unsigned int VAR_5,
   unsigned int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9;
 int VAR_10 = FUNC_1(VAR_4->length - VAR_5, VAR_6);

 VAR_5 = (VAR_4->laddr + VAR_5) & ~VAR_0;

 while (VAR_8 != VAR_6) {
  VAR_9 = FUNC_2(VAR_2, &VAR_3[VAR_7], VAR_5, VAR_10);
  if (VAR_9 >= 0) {
   VAR_8 += VAR_9;
   if (VAR_6 == VAR_8 || VAR_10 > VAR_9)
    break;

   VAR_7 += FUNC_0(VAR_10 + VAR_5) >> VAR_1;
   VAR_4++;
   VAR_10 = FUNC_1(VAR_4->length, VAR_6 - VAR_8);
   VAR_5 = VAR_4->laddr & ~VAR_0;
  } else {
   VAR_8 = VAR_9;
   break;
  }
 }
 return VAR_8;
}
