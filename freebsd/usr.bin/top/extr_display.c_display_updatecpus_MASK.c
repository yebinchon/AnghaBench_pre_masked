
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statics {int ncpus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_2(struct statics *VAR_5)
{
    int VAR_6;
    int VAR_7;


    VAR_6 = FUNC_1();
    if (VAR_4)
  VAR_2 = VAR_5->ncpus;
    else
  VAR_2 = 1;
    VAR_0 = 5;
    if (VAR_2 > 1) {
  VAR_0 += 1 + FUNC_0(VAR_2);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3 * VAR_2; ++VAR_7) {
  VAR_1[VAR_7] = -1;
    }

    return(VAR_6);
}
