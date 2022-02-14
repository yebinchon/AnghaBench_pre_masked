
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*) ;
 int VAR_9 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int ) ;

int
FUNC_13(void)
{
 int VAR_12[2], VAR_13;

 VAR_13 = 1;
 FUNC_9("1..20\n");
 FUNC_3(VAR_11);
 FUNC_10(VAR_4, VAR_6);
 VAR_9 = FUNC_5();
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  switch (VAR_8) {
  case 130:
   if (FUNC_6(VAR_2, 0666) != 0)
    FUNC_2(1, "mkfifo");
   VAR_12[0] = -1;
   VAR_12[1] = -1;
   break;
  case 128:
   if (FUNC_11(VAR_0, VAR_5, VAR_1,
       VAR_12) != 0)
    FUNC_2(1, "socketpair");
   break;
  case 129:
   if (FUNC_8(VAR_12) != 0)
    FUNC_2(1, "pipe");
   break;
  }
  VAR_10 = 0;
  switch (VAR_7 = FUNC_4()) {
  case -1:
   FUNC_2(1, "fork");
  case 0:
   (void)FUNC_1(VAR_12[1]);
   FUNC_0(VAR_12[0], VAR_13);
   break;
  default:
   (void)FUNC_1(VAR_12[0]);
   FUNC_7(VAR_12[1]);
   break;
  }
  VAR_13 += VAR_8 == 130 ? 12 : 4;
 }
 (void)FUNC_12(VAR_2);
 return (0);
}
