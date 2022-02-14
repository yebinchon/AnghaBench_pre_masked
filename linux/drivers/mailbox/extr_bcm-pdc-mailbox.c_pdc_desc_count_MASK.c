
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int length; } ;


 int VAR_0 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static u32 FUNC_1(struct scatterlist *VAR_1)
{
 u32 VAR_2 = 0;

 while (VAR_1) {
  VAR_2 += ((VAR_1->length / VAR_0) + 1);
  VAR_1 = FUNC_0(VAR_1);
 }
 return VAR_2;
}
