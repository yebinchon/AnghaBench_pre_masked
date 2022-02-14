
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scatterlist* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,struct page*,int,int ) ;
 struct page* FUNC_4 (int *) ;

__attribute__((used)) static struct scatterlist *FUNC_5(u64 *VAR_2, int VAR_3)
{
 struct scatterlist *VAR_4;
 struct page *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 FUNC_2(VAR_4, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_4(VAR_2);
  if (!VAR_5)
   goto err;
  FUNC_3(&VAR_4[VAR_6], VAR_5, VAR_1, 0);
  VAR_2 += VAR_1 / sizeof(*VAR_2);
 }
 return VAR_4;

err:
 FUNC_1(VAR_4);
 return ((void*)0);
}
