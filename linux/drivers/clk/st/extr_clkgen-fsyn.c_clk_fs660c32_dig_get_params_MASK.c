
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
struct stm_fs {int pe; int nsdiv; int sdiv; int mdiv; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,struct stm_fs*,unsigned long*) ;
 int FUNC_2 (int,int,unsigned long*,unsigned long,unsigned long,long long*,struct stm_fs*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0,
  unsigned long VAR_1, struct stm_fs *VAR_2)
{
 int VAR_3;
 int VAR_4;
 unsigned long VAR_5, VAR_6;

 unsigned long VAR_7 = ~0;
 uint64_t VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 struct stm_fs VAR_13;

 for (VAR_3 = 0; (VAR_3 <= 8) && VAR_7; VAR_3++) {


  VAR_11 = FUNC_2(0, VAR_3, &VAR_7,
    VAR_0, VAR_1, &VAR_9, VAR_2);
  VAR_12 = FUNC_2(31, VAR_3, &VAR_7,
    VAR_0, VAR_1, &VAR_10, VAR_2);


  if (VAR_11 && VAR_12 && (VAR_9 > VAR_10))
   continue;


  for (VAR_4 = 1; (VAR_4 < 31) && VAR_7; VAR_4++)
   FUNC_2(VAR_4, VAR_3, &VAR_7,
     VAR_0, VAR_1, &VAR_8, VAR_2);

 }

 if (VAR_7 == ~0)
  return -1;


 if (VAR_7) {
  VAR_13.mdiv = VAR_2->mdiv;
  VAR_13.sdiv = VAR_2->sdiv;
  VAR_13.nsdiv = VAR_2->nsdiv;

  if (VAR_2->pe > 2)
   VAR_10 = VAR_2->pe - 2;
  else
   VAR_10 = 0;

  for (; VAR_10 < 32768ll && (VAR_10 <= (VAR_2->pe + 2)); VAR_10++) {
   VAR_13.pe = (unsigned long)VAR_10;

   FUNC_1(VAR_0, &VAR_13, &VAR_5);

   VAR_6 = FUNC_0(VAR_1 - VAR_5);


   if (VAR_6 < VAR_7) {
    VAR_2->pe = (unsigned long)VAR_10;
    VAR_7 = VAR_6;

   }
  }
 }
 return 0;
}
