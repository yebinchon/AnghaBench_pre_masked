
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*,struct page*,unsigned int,unsigned int) ;
 int FUNC_1 (struct bio*,struct page*,unsigned int,unsigned int,int*) ;
 scalar_t__ FUNC_2 (struct bio*,unsigned int) ;

int FUNC_3(struct bio *VAR_0, struct page *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3)
{
 bool VAR_4 = 0;

 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4)) {
  if (FUNC_2(VAR_0, VAR_2))
   return 0;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
 return VAR_2;
}
