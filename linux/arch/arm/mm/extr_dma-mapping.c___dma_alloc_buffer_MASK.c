
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct page*,size_t,int) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (size_t) ;
 int FUNC_4 (struct page*,unsigned long) ;

__attribute__((used)) static struct page *FUNC_5(struct device *VAR_1, size_t VAR_2,
           gfp_t VAR_3, int VAR_4)
{
 unsigned long VAR_5 = FUNC_3(VAR_2);
 struct page *VAR_6, *VAR_7, *VAR_8;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);




 FUNC_4(VAR_6, VAR_5);
 for (VAR_7 = VAR_6 + (VAR_2 >> VAR_0), VAR_8 = VAR_6 + (1 << VAR_5); VAR_7 < VAR_8; VAR_7++)
  FUNC_1(VAR_7);

 FUNC_0(VAR_6, VAR_2, VAR_4);

 return VAR_6;
}
