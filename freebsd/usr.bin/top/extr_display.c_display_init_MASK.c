
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statics {char** cpustate_names; int ncpus; int carc_names; int arc_names; int memory_names; int swap_names; int procstate_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int VAR_2 ;
 int* VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct statics*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int VAR_16 ;

int
FUNC_4(struct statics * VAR_17)
{
    int VAR_18;
    const char * const *VAR_19;
    int *VAR_20;
    int VAR_21;

    VAR_18 = FUNC_2(VAR_17);


    if (VAR_18 > -1)
    {

 VAR_15 = VAR_17->procstate_names;
 VAR_13 = 8;
 FUNC_0(VAR_13 > 0);
 VAR_8 = FUNC_1(VAR_13, sizeof(int));

 VAR_4 = VAR_17->cpustate_names;

 VAR_16 = VAR_17->swap_names;
 VAR_14 = 7;
 FUNC_0(VAR_14 > 0);
 VAR_9 = FUNC_1(VAR_14, sizeof(int));
 VAR_11 = VAR_0;
 FUNC_0(VAR_11 > 0);
 VAR_6 = FUNC_1(VAR_11 * sizeof(int), VAR_17->ncpus);
 VAR_3 = FUNC_1(VAR_11, sizeof(int));

 VAR_10 = VAR_17->memory_names;
 VAR_12 = 7;
 FUNC_0(VAR_12 > 0);
 VAR_7 = FUNC_1(VAR_12, sizeof(int));

 VAR_1 = VAR_17->arc_names;
 VAR_2 = VAR_17->carc_names;


 VAR_5 = 0;
 VAR_19 = VAR_4;
 VAR_20 = VAR_3;
 while (*VAR_19 != ((void*)0))
 {
     *VAR_20++ = VAR_5;
     if ((VAR_21 = FUNC_3(*VAR_19++)) > 0)
     {
  VAR_5 += VAR_21 + 8;
     }
 }
    }


    return(VAR_18);
}
