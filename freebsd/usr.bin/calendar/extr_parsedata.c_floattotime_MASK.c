
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static char *
FUNC_2(double VAR_3)
{
 static char VAR_4[100];
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 -= FUNC_0(VAR_3);
 VAR_8 = VAR_3 * VAR_0;

 VAR_5 = VAR_8 / VAR_1;
 VAR_8 %= VAR_1;
 VAR_6 = VAR_8 / VAR_2;
 VAR_8 %= VAR_2;
 VAR_7 = VAR_8;

 FUNC_1(VAR_4, "%02d:%02d:%02d", VAR_5, VAR_6, VAR_7);
 return (VAR_4);
}
