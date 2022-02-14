
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int,int *,int *) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static int
FUNC_4(module_t VAR_7, int VAR_8, void *VAR_9)
{
 int VAR_10;

 switch (VAR_8) {
 case 129:
  FUNC_2(&VAR_5, "callout_free", ((void*)0), VAR_1);




  FUNC_0(&VAR_2, &VAR_5, 0);
  FUNC_3("callout_free_func = %p\n", VAR_4);
  FUNC_3("callout_free_arg = %p\n", &VAR_3);
  FUNC_1(&VAR_2, VAR_6/10, VAR_4,
      &VAR_3);
  VAR_10 = 0;
  break;

 case 128:
  VAR_10 = 0;
  break;

 default:
  VAR_10 = VAR_0;
  break;
 }

 return (VAR_10);
}
