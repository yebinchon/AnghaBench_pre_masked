
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int seed ;
typedef int MINT ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (short) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int * FUNC_9 (int ) ;

void
FUNC_10(char *VAR_5, char *VAR_6, char *VAR_7)
{
 unsigned int VAR_8;




 MINT *VAR_9 = FUNC_2(0);
 MINT *VAR_10 = FUNC_2(0);
 MINT *VAR_11;
 MINT *VAR_12 = FUNC_2((short)(1 << (8*sizeof (short) - 1)));
 MINT *VAR_13 = FUNC_2(VAR_4);
 MINT *VAR_14 = FUNC_9(VAR_2);
 short VAR_15;
 unsigned short VAR_16[VAR_3/(8*sizeof (short) - 1) + 1];
 char *VAR_17;

 FUNC_1((char *)VAR_16, sizeof (VAR_16), (u_char *)VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_3/(8*sizeof (short) - 1) + 1; VAR_8++) {
  VAR_15 = VAR_16[VAR_8] % (1 << (8*sizeof (short) - 1));
  VAR_11 = FUNC_2(VAR_15);
  FUNC_7(VAR_10, VAR_12, VAR_10);
  FUNC_3(VAR_10, VAR_11, VAR_10);
  FUNC_5(VAR_11);
 }
 VAR_11 = FUNC_2(0);
 FUNC_4(VAR_10, VAR_14, VAR_11, VAR_10);
 FUNC_5(VAR_11);
 FUNC_8(VAR_13, VAR_10, VAR_14, VAR_9);
 VAR_17 = FUNC_6(VAR_10);
 FUNC_0(VAR_6, VAR_17);
 VAR_17 = FUNC_6(VAR_9);
 FUNC_0(VAR_5, VAR_17);
 FUNC_5(VAR_10);
 FUNC_5(VAR_12);
 FUNC_5(VAR_9);
 FUNC_5(VAR_13);
 FUNC_5(VAR_14);
}
