
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int address; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,int,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{
 int VAR_14;

 int VAR_15;

 long VAR_16;
 unsigned long VAR_17;

 if (!FUNC_0(&VAR_13))
  return;

 if (VAR_9) {
  FUNC_2();
  FUNC_4();
  FUNC_5();
  VAR_9 = 0;
 }
 FUNC_8(0, ~0, 8);




 if (VAR_7 && VAR_10) {
  VAR_16 = VAR_10 * 1024;
  VAR_17 = (unsigned long)VAR_7;
  VAR_7 = ((void*)0);
  VAR_10 = 0;
  VAR_3 = VAR_2 = -1;
  FUNC_3(VAR_17, VAR_16);
 }

 for (VAR_15 = 0; VAR_15 < VAR_1 * 4; VAR_15++)
  if (FUNC_9(VAR_11 + VAR_15))
   FUNC_7("motor off timer %d still active\n", VAR_15);


 if (FUNC_1(&VAR_4))
  FUNC_7("floppy timer still active:%s\n", VAR_12);
 if (FUNC_1(&VAR_5))
  FUNC_7("auxiliary floppy timer still active\n");
 if (FUNC_10(&VAR_8))
  FUNC_7("work still pending\n");
 VAR_14 = VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_0->address != -1)
   FUNC_6(VAR_6);
 VAR_6 = VAR_14;
}
