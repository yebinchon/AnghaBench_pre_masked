
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atom_context {int* iio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int* FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct atom_context *VAR_4, int VAR_5)
{
 VAR_4->iio = FUNC_1(2 * 256, VAR_2);
 if (!VAR_4->iio)
  return;
 while (FUNC_0(VAR_5) == VAR_1) {
  VAR_4->iio[FUNC_0(VAR_5 + 1)] = VAR_5 + 2;
  VAR_5 += 2;
  while (FUNC_0(VAR_5) != VAR_0)
   VAR_5 += VAR_3[FUNC_0(VAR_5)];
  VAR_5 += 3;
 }
}
