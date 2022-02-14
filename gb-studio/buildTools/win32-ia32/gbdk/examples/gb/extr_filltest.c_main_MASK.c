
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int,int,int,int ) ;
 int FUNC_1 (int,int,int,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int,int) ;

int FUNC_8(void)
{
    UBYTE VAR_8,VAR_9,VAR_10,VAR_11,VAR_12;
    VAR_10=0;

    for (VAR_8=0; VAR_8<=15; VAR_8++) {
 for (VAR_9=0; VAR_9<=15; VAR_9++) {
     FUNC_4(VAR_9,VAR_8);
     VAR_11=VAR_8/4;
     VAR_12=VAR_9/4;
     if (VAR_11==VAR_12) {
  VAR_11=3-VAR_12;
     }
     FUNC_2(VAR_11,VAR_12,VAR_5);
     FUNC_5("%c",VAR_10++);
 }
    }


    FUNC_2(VAR_2,VAR_6,VAR_5);
    FUNC_1(140,20,15,VAR_3);
    FUNC_2(VAR_0,VAR_6,VAR_5);
    FUNC_1(140,20,10,VAR_4);
    FUNC_2(VAR_1,VAR_6,VAR_7);
    FUNC_1(120,40,30,VAR_3);
    FUNC_6(0,0,159,143);
    FUNC_2(VAR_0,VAR_2,VAR_5);
    FUNC_0(0,130,40,143,VAR_4);
    FUNC_0(50,130,90,143,VAR_3);


    for (VAR_10=0; VAR_10<=143; VAR_10++) {
 for (VAR_9=0; VAR_9<=142; VAR_9++) {
     for (VAR_8=0; VAR_8<=159; VAR_8++) {
  FUNC_2(FUNC_3(VAR_8,VAR_9+1),VAR_6,VAR_5);
  FUNC_7(VAR_8,VAR_9);
     }
     FUNC_2(VAR_6,VAR_6,VAR_5);
 }
 FUNC_6(0,143,159,143);
    }
}
