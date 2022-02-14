
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atpic {int at_ioaddr; int at_intbase; int at_imen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct atpic *VAR_11, int VAR_12)
{
 int VAR_13;


 FUNC_2();
 FUNC_1(VAR_11->at_ioaddr, VAR_3 | VAR_2);
 VAR_13 = VAR_11->at_ioaddr + VAR_0;


 FUNC_1(VAR_13, VAR_11->at_intbase);






 if (VAR_12)
  FUNC_1(VAR_13, VAR_1);
 else
  FUNC_1(VAR_13, FUNC_0(VAR_1));


 if (VAR_12)
  FUNC_1(VAR_13, VAR_10);
 else
  FUNC_1(VAR_13, VAR_4);


 FUNC_1(VAR_13, VAR_11->at_imen);


 FUNC_1(VAR_11->at_ioaddr, VAR_9 | VAR_8);


 if (!VAR_12)
  FUNC_1(VAR_11->at_ioaddr, VAR_6 | VAR_7 | VAR_5);

 FUNC_3();
}
