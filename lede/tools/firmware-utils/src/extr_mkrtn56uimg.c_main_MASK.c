
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int op_mode_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,char**,char*) ;
 char* VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(int VAR_3, char **VAR_4)
{
 int VAR_5;
 char *VAR_6, *VAR_7;
 op_mode_t VAR_8 = 129;

 VAR_7 = VAR_4[0];

 while ((VAR_5 = FUNC_0(VAR_3, VAR_4,":s:f:h?")) != -1) {
  switch (VAR_5) {
  case 's':
   VAR_8 = 128;
   VAR_6 = VAR_2;
   break;
  case 'f':
   VAR_8 = 130;
   VAR_6 = VAR_2;
   break;
  case 'h':
   VAR_8 = 129;
  default:
   FUNC_2(VAR_7, VAR_0);
   VAR_8 = 129;
  }
 }

 if(VAR_6 == ((void*)0))
  VAR_8 = 129;

 switch (VAR_8) {
 case 129:
  FUNC_2(VAR_7, VAR_0);
  break;
 case 130:
 case 128:
  return FUNC_1(VAR_7, VAR_6, VAR_8);
  break;
 }

 return VAR_1;
}
