
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_mask; } ;
struct TYPE_4__ {int x_nlines; void* x_ncols; void* x_win; } ;
struct TYPE_3__ {int x_nlines; void* x_ncols; void* x_win; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*,char,char) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,char*) ;
 TYPE_2__ VAR_10 ;
 int FUNC_4 (void*,int ) ;
 int * FUNC_5 () ;
 void* VAR_11 ;
 TYPE_1__ VAR_12 ;
 void* FUNC_6 (int,void*,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (void*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*,int ,void*) ;
 int FUNC_15 (void*) ;

void
FUNC_16(void)
{
 struct sigaction VAR_15;

 if (FUNC_5() == ((void*)0))
  FUNC_3(1, "Terminal type unset or lacking necessary features.");
 (void) FUNC_10(VAR_5, (struct sigaction *)0, &VAR_15);
 FUNC_11(&VAR_15.sa_mask, VAR_2);
 (void) FUNC_10(VAR_5, &VAR_15, (struct sigaction *)0);
 VAR_9 = 1;
 FUNC_1();
 FUNC_8();
 FUNC_7();
 FUNC_2();
 FUNC_12(VAR_3, VAR_13);
 FUNC_12(VAR_4, VAR_13);
 FUNC_12(VAR_6, VAR_14);

 VAR_12.x_nlines = VAR_1 / 2;
 VAR_12.x_ncols = VAR_0;
 VAR_12.x_win = FUNC_6(VAR_12.x_nlines, VAR_12.x_ncols, 0, 0);
 FUNC_4(VAR_12.x_win, VAR_7);
 FUNC_9(VAR_12.x_win, VAR_7);
 FUNC_13(VAR_12.x_win);

 VAR_10.x_nlines = VAR_1 / 2 - 1;
 VAR_10.x_ncols = VAR_0;
 VAR_10.x_win = FUNC_6(VAR_10.x_nlines, VAR_10.x_ncols,
     VAR_12.x_nlines+1, 0);
 FUNC_4(VAR_12.x_win, VAR_7);
 FUNC_9(VAR_10.x_win, VAR_7);
 FUNC_13(VAR_10.x_win);

 VAR_11 = FUNC_6(1, VAR_0, VAR_12.x_nlines, 0);



 FUNC_0(VAR_11, '-', '-');

 FUNC_15(VAR_11);

 VAR_8 = "No connection yet";
}
