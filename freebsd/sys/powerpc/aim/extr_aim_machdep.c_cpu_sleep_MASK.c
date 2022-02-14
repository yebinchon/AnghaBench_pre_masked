
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_quad_t ;
struct thread {struct thread* td_pcb; } ;
typedef int register_t ;
typedef struct thread jmp_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,struct thread*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct thread* VAR_12 ;
 struct thread* VAR_13 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 () ;
 int VAR_14 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int VAR_15 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 () ;
 struct thread* VAR_16 ;
 int FUNC_14 (struct thread*) ;
 int FUNC_15 (struct thread*) ;
 scalar_t__ FUNC_16 (struct thread) ;
 int VAR_17 ;

void
FUNC_17()
{
 static u_quad_t VAR_18 = 0;
 static register_t VAR_19[4];
 static register_t VAR_20[2];

 jmp_buf VAR_21;
 struct thread *VAR_22;
 struct thread *VAR_23;
 register_t VAR_24;
 register_t VAR_25;
 register_t VAR_26;

 VAR_11 = VAR_15;

 FUNC_1(VAR_16, &VAR_21);

 VAR_26 = FUNC_6();
 VAR_22 = FUNC_0(VAR_14);
 VAR_23 = FUNC_0(VAR_17);
 if (VAR_22 != ((void*)0))
  FUNC_14(VAR_22);
 if (VAR_23 != ((void*)0))
  FUNC_15(VAR_23);
 if (FUNC_16(VAR_21) == 0) {
  VAR_19[0] = FUNC_7(VAR_5);
  VAR_19[1] = FUNC_7(VAR_6);
  VAR_19[2] = FUNC_7(VAR_7);
  VAR_19[3] = FUNC_7(VAR_8);
  VAR_20[0] = FUNC_7(VAR_9);
  VAR_20[1] = FUNC_7(VAR_10);
  VAR_18 = FUNC_8();
  FUNC_13();
  FUNC_4();
  VAR_24 = FUNC_7(VAR_4);
  VAR_24 = (VAR_24 & ~(VAR_0 | VAR_1)) | VAR_2;
  FUNC_13();
  FUNC_5();
  VAR_25 = FUNC_6() | VAR_3;
  FUNC_10(VAR_4, VAR_24);
  FUNC_13();

  while (1)
   FUNC_9(VAR_25);
 }
 FUNC_11(VAR_18, 0);
 FUNC_1(VAR_13, VAR_13);
 FUNC_1(VAR_12, VAR_13->td_pcb);
 FUNC_12(VAR_13);
 FUNC_13();
 FUNC_10(VAR_5, VAR_19[0]);
 FUNC_10(VAR_6, VAR_19[1]);
 FUNC_10(VAR_7, VAR_19[2]);
 FUNC_10(VAR_8, VAR_19[3]);
 FUNC_10(VAR_9, VAR_20[0]);
 FUNC_10(VAR_10, VAR_20[1]);
 FUNC_9(VAR_26);
 if (VAR_22 == VAR_13)
  FUNC_2(VAR_13);
 if (VAR_23 == VAR_13)
  FUNC_3(VAR_13);
 FUNC_13();
}
