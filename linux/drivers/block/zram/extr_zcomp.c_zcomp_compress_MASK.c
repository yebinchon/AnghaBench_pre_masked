
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcomp_strm {int buffer; int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void const*,int,int ,unsigned int*) ;

int FUNC_1(struct zcomp_strm *VAR_1,
  const void *VAR_2, unsigned int *VAR_3)
{
 *VAR_3 = VAR_0 * 2;

 return FUNC_0(VAR_1->tfm,
   VAR_2, VAR_0,
   VAR_1->buffer, VAR_3);
}
