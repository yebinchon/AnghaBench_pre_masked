
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int* c_cc; int c_lflag; int c_iflag; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct termios VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int FUNC_3 (int ,int ,int) ;
 void* VAR_22 ;
 void* VAR_23 ;
 int FUNC_4 (int ,int ) ;
 int VAR_24 ;
 void* VAR_25 ;
 int FUNC_5 (int ,struct termios*) ;
 int FUNC_6 (int ,int ,struct termios*) ;
 int VAR_26 ;
 void* VAR_27 ;

void FUNC_7( void )
{
 struct termios VAR_28;



 FUNC_4(VAR_9, VAR_11);
 FUNC_4(VAR_10, VAR_11);


 FUNC_4(VAR_8, VAR_0);


 FUNC_3(VAR_12, VAR_3, FUNC_3(VAR_12, VAR_2, 0) | VAR_7 );

 if (!VAR_24)
 {
  FUNC_1("tty console mode disabled\n");
  VAR_27 = VAR_22;
  VAR_25 = VAR_23;
  return;
 }

 FUNC_2(&VAR_14);
 FUNC_5 (VAR_12, &VAR_17);
 VAR_16 = VAR_17.c_cc[VAR_19];
 VAR_15 = VAR_17.c_cc[VAR_18];
 VAR_28 = VAR_17;
 VAR_28.c_lflag &= ~(VAR_1 | VAR_4);





 VAR_28.c_iflag &= ~(VAR_6 | VAR_5);
 VAR_28.c_cc[VAR_20] = 1;
 VAR_28.c_cc[VAR_21] = 0;
 FUNC_6 (VAR_12, VAR_13, &VAR_28);
 VAR_27 = VAR_23;
 VAR_26 = 1;
 FUNC_0();
}
