
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {size_t offset; size_t length; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_1, size_t VAR_2,
        size_t VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2)
  return 0;

 if (!FUNC_0(VAR_2, VAR_3))
  return -VAR_0;

 while (VAR_1) {
  if (!FUNC_0(VAR_1->offset, sizeof(u32)))
   return -VAR_0;

  if (!FUNC_0(VAR_1->length, VAR_3))
   return -VAR_0;

  VAR_4 += VAR_1->length;
  VAR_1 = FUNC_1(VAR_1);
 }

 if (VAR_4 != VAR_2)
  return -VAR_0;

 return 0;
}
