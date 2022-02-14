
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 double FUNC_0 (double) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,int,int,int,int) ;

__attribute__((used)) static char *
FUNC_3(int VAR_4, double VAR_5)
{
 static char VAR_6[100];
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int *VAR_13 = VAR_3[FUNC_1(VAR_4)];

 for (VAR_7 = 0; 1 + VAR_13[VAR_7] < VAR_5; VAR_7++)
  ;
 VAR_8 = --VAR_7;
 VAR_9 = FUNC_0(VAR_5 - 1 - VAR_13[VAR_7]);
 VAR_5 -= FUNC_0(VAR_5);
 VAR_7 = VAR_5 * VAR_0;

 VAR_10 = VAR_7 / VAR_1;
 VAR_7 %= VAR_1;
 VAR_11 = VAR_7 / VAR_2;
 VAR_7 %= VAR_2;
 VAR_12 = VAR_7;

 FUNC_2(VAR_6, "%02d-%02d %02d:%02d:%02d", VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 return (VAR_6);
}
