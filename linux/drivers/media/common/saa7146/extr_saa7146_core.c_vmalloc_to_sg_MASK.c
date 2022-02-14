
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 struct scatterlist* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int) ;
 int FUNC_5 (struct scatterlist*,struct page*,int ,int ) ;
 struct page* FUNC_6 (unsigned char*) ;

__attribute__((used)) static struct scatterlist* FUNC_7(unsigned char *VAR_2, int VAR_3)
{
 struct scatterlist *VAR_4;
 struct page *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3, sizeof(struct scatterlist), VAR_0);
 if (((void*)0) == VAR_4)
  return ((void*)0);
 FUNC_4(VAR_4, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_2 += VAR_1) {
  VAR_5 = FUNC_6(VAR_2);
  if (((void*)0) == VAR_5)
   goto err;
  FUNC_0(FUNC_1(VAR_5));
  FUNC_5(&VAR_4[VAR_6], VAR_5, VAR_1, 0);
 }
 return VAR_4;

 err:
 FUNC_3(VAR_4);
 return ((void*)0);
}
