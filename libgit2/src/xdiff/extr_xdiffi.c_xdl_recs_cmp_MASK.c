
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long i1; long i2; int min_lo; int min_hi; } ;
typedef TYPE_1__ xdpsplit_t ;
typedef int xdalgoenv_t ;
struct TYPE_7__ {unsigned long* ha; char* rchg; long* rindex; } ;
typedef TYPE_2__ diffdata_t ;


 scalar_t__ FUNC_0 (unsigned long const*,long,long,unsigned long const*,long,long,long*,long*,int,TYPE_1__*,int *) ;

int FUNC_1(diffdata_t *VAR_0, long VAR_1, long VAR_2,
   diffdata_t *VAR_3, long VAR_4, long VAR_5,
   long *VAR_6, long *VAR_7, int VAR_8, xdalgoenv_t *VAR_9) {
 unsigned long const *VAR_10 = VAR_0->ha, *VAR_11 = VAR_3->ha;




 for (; VAR_1 < VAR_2 && VAR_4 < VAR_5 && VAR_10[VAR_1] == VAR_11[VAR_4]; VAR_1++, VAR_4++);
 for (; VAR_1 < VAR_2 && VAR_4 < VAR_5 && VAR_10[VAR_2 - 1] == VAR_11[VAR_5 - 1]; VAR_2--, VAR_5--);





 if (VAR_1 == VAR_2) {
  char *VAR_12 = VAR_3->rchg;
  long *VAR_13 = VAR_3->rindex;

  for (; VAR_4 < VAR_5; VAR_4++)
   VAR_12[VAR_13[VAR_4]] = 1;
 } else if (VAR_4 == VAR_5) {
  char *VAR_14 = VAR_0->rchg;
  long *VAR_15 = VAR_0->rindex;

  for (; VAR_1 < VAR_2; VAR_1++)
   VAR_14[VAR_15[VAR_1]] = 1;
 } else {
  xdpsplit_t VAR_16;
  VAR_16.i1 = VAR_16.i2 = 0;




  if (FUNC_0(VAR_10, VAR_1, VAR_2, VAR_11, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, &VAR_16, VAR_9) < 0) {

   return -1;
  }




  if (FUNC_1(VAR_0, VAR_1, VAR_16.i1, VAR_3, VAR_4, VAR_16.i2,
     VAR_6, VAR_7, VAR_16.min_lo, VAR_9) < 0 ||
      FUNC_1(VAR_0, VAR_16.i1, VAR_2, VAR_3, VAR_16.i2, VAR_5,
     VAR_6, VAR_7, VAR_16.min_hi, VAR_9) < 0) {

   return -1;
  }
 }

 return 0;
}
