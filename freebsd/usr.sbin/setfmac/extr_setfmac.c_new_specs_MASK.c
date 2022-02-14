
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_specs {int head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 struct label_specs* FUNC_2 (int) ;

struct label_specs *
FUNC_3(void)
{
 struct label_specs *VAR_0;

 VAR_0 = FUNC_2(sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  FUNC_1(1, "malloc");
 FUNC_0(&VAR_0->head);
 return (VAR_0);
}
