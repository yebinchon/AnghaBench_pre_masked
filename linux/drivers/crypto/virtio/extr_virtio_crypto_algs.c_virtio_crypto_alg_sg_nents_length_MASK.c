
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scatterlist {scalar_t__ length; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static u64 FUNC_1(struct scatterlist *VAR_0)
{
 u64 VAR_1 = 0;

 for (VAR_1 = 0; VAR_0; VAR_0 = FUNC_0(VAR_0))
  VAR_1 += VAR_0->length;

 return VAR_1;
}
