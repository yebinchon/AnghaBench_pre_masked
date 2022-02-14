
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned long ksp; unsigned long kpsr; unsigned long kwim; unsigned long kpc; } ;
struct task_struct {int dummy; } ;
struct reg_window32 {unsigned long* locals; unsigned long* ins; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 struct thread_info* FUNC_0 (struct task_struct*) ;
 int VAR_18 ;

void FUNC_1(unsigned long *VAR_19, struct task_struct *VAR_20)
{
 struct thread_info *VAR_21 = FUNC_0(VAR_20);
 struct reg_window32 *VAR_22;
 int VAR_23;

 for (VAR_23 = VAR_4; VAR_23 < VAR_5; VAR_23++)
  VAR_19[VAR_23] = 0;
 VAR_19[VAR_5] = (unsigned long) VAR_21;
 VAR_19[VAR_6] = 0;
 for (VAR_23 = VAR_10; VAR_23 < VAR_14; VAR_23++)
  VAR_19[VAR_23] = 0;
 VAR_19[VAR_14] = VAR_21->ksp;
 VAR_19[VAR_11] = 0;

 VAR_22 = (struct reg_window32 *) VAR_21->ksp;
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++)
  VAR_19[VAR_8 + VAR_23] = VAR_22->locals[VAR_23];
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++)
  VAR_19[VAR_7 + VAR_23] = VAR_22->ins[VAR_23];

 for (VAR_23 = VAR_1; VAR_23 <= VAR_2; VAR_23++)
  VAR_19[VAR_23] = 0;

 VAR_19[VAR_17] = 0;

 VAR_19[VAR_13] = VAR_21->kpsr;
 VAR_19[VAR_16] = VAR_21->kwim;
 VAR_19[VAR_15] = (unsigned long) &VAR_18;
 VAR_19[VAR_12] = VAR_21->kpc;
 VAR_19[VAR_9] = VAR_21->kpc + 4;
 VAR_19[VAR_3] = 0;
 VAR_19[VAR_0] = 0;
}
