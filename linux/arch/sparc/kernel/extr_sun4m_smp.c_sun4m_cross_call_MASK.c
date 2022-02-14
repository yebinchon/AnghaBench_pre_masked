
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int smpfunc_t ;
typedef int cpumask_t ;
struct TYPE_2__ {unsigned long arg1; unsigned long arg2; unsigned long arg3; unsigned long arg4; int* processors_in; int* processors_out; scalar_t__ arg5; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(smpfunc_t VAR_5, cpumask_t VAR_6, unsigned long VAR_7,
        unsigned long VAR_8, unsigned long VAR_9,
        unsigned long VAR_10)
{
  register int VAR_11 = VAR_1;
  unsigned long VAR_12;

  FUNC_5(&VAR_4, VAR_12);


  VAR_2.func = VAR_5;
  VAR_2.arg1 = VAR_7;
  VAR_2.arg2 = VAR_8;
  VAR_2.arg3 = VAR_9;
  VAR_2.arg4 = VAR_10;
  VAR_2.arg5 = 0;


  {
   register int VAR_13;

   FUNC_2(FUNC_4(), &VAR_6);
   FUNC_1(&VAR_6, VAR_3, &VAR_6);
   for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
    if (FUNC_3(VAR_13, &VAR_6)) {
     VAR_2.processors_in[VAR_13] = 0;
     VAR_2.processors_out[VAR_13] = 0;
     FUNC_7(VAR_13, VAR_0);
    } else {
     VAR_2.processors_in[VAR_13] = 1;
     VAR_2.processors_out[VAR_13] = 1;
    }
   }
  }

  {
   register int VAR_14;

   VAR_14 = 0;
   do {
    if (!FUNC_3(VAR_14, &VAR_6))
     continue;
    while (!VAR_2.processors_in[VAR_14])
     FUNC_0();
   } while (++VAR_14 < VAR_11);

   VAR_14 = 0;
   do {
    if (!FUNC_3(VAR_14, &VAR_6))
     continue;
    while (!VAR_2.processors_out[VAR_14])
     FUNC_0();
   } while (++VAR_14 < VAR_11);
  }
  FUNC_6(&VAR_4, VAR_12);
}
