
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiDrawTextLayout ;
typedef int uiDrawTextFont ;
typedef int uiAreaHandler ;
struct TYPE_3__ {int Context; } ;
typedef TYPE_1__ uiAreaDrawParams ;
typedef int uiArea ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,double*,double*,double*,double*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int ,int,int,int *) ;
 int FUNC_6 (int *,double*,double*) ;
 int FUNC_7 (int *,int,int,double,double,int,double) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(uiAreaHandler *VAR_3, uiArea *VAR_4, uiAreaDrawParams *VAR_5)
{
 uiDrawTextFont *VAR_6;
 uiDrawTextLayout *VAR_7;
 double VAR_8, VAR_9, VAR_10, VAR_11;
 char VAR_12[1 + 4 + 1 + 1];
 char VAR_13[2 + 2 + 2 + 3 + 2 + 1];
 double VAR_14, VAR_15;

 VAR_6 = FUNC_8(VAR_2);

 VAR_7 = FUNC_4("One two three four", VAR_6, -1);
 FUNC_7(VAR_7,
  4, 7,
  1, 0, 0, 1);
 FUNC_7(VAR_7,
  8, 14,
  1, 0, 0.5, 0.5);
 FUNC_1(VAR_1, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 FUNC_7(VAR_7,
  14, 18,
  VAR_8, VAR_9, VAR_10, VAR_11);
 FUNC_5(VAR_5->Context, 10, 10, VAR_7);
 FUNC_6(VAR_7, &VAR_14, &VAR_15);
 FUNC_3(VAR_7);

 VAR_12[0] = 'x';
 VAR_12[1] = 0xF0;
 VAR_12[2] = 0x90;
 VAR_12[3] = 0x8C;
 VAR_12[4] = 0x88;
 VAR_12[5] = 'y';
 VAR_12[6] = '\0';

 VAR_7 = FUNC_4(VAR_12, VAR_6, -1);
 FUNC_7(VAR_7,
  1, 2,
  1, 0, 0.5, 0.5);
 FUNC_5(VAR_5->Context, 10, 10 + VAR_15, VAR_7);
 FUNC_3(VAR_7);

 VAR_13[0] = 'z';
 VAR_13[1] = 'z';
 VAR_13[2] = 0xC3;
 VAR_13[3] = 0xA9;
 VAR_13[4] = 'z';
 VAR_13[5] = 'z';
 VAR_13[6] = 0x65;
 VAR_13[7] = 0xCC;
 VAR_13[8] = 0x81;
 VAR_13[9] = 'z';
 VAR_13[10] = 'z';
 VAR_13[11] = '\0';

 VAR_7 = FUNC_4(VAR_13, VAR_6, -1);
 FUNC_7(VAR_7,
  2, 3,
  1, 0, 0.5, 0.5);
 FUNC_7(VAR_7,
  5, 6,
  1, 0, 0.5, 0.5);
 if (!FUNC_0(VAR_0))
  FUNC_7(VAR_7,
   6, 7,
   0.5, 0, 1, 0.5);
 FUNC_5(VAR_5->Context, 10, 10 + VAR_15 + VAR_15, VAR_7);
 FUNC_3(VAR_7);

 FUNC_2(VAR_6);
}
