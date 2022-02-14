
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(void)
{
 int VAR_5;

 switch(VAR_1)
 {
 default:
  FUNC_1("Not attaching through glue driver due to unsupported bus\n");
  VAR_5 = -VAR_0;
  break;
 }

 if (!VAR_5)
 {
  FUNC_2("SSB/BCMA glue driver successfully attached\n");
  VAR_2 = 1;
 }

 return VAR_5;
}
