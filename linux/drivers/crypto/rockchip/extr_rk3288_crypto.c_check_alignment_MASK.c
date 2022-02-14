
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scatterlist {scalar_t__ length; scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_0,
      struct scatterlist *VAR_1,
      int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_0((uint32_t)VAR_0->offset, 4) &&
      FUNC_0((uint32_t)VAR_0->length, VAR_2);
 if (!VAR_1)
  return VAR_3;
 VAR_4 = FUNC_0((uint32_t)VAR_1->offset, 4) &&
       FUNC_0((uint32_t)VAR_1->length, VAR_2);
 VAR_5 = VAR_3 && VAR_4;

 return (VAR_5 && (VAR_0->length == VAR_1->length));
}
