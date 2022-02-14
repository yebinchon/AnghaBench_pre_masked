
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {struct conf* t_conf; } ;
struct conf {int conf_targets; } ;


 int FUNC_0 (int *,struct target*,int ) ;
 struct target* FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;

struct target *
FUNC_3(struct conf *VAR_1)
{
 struct target *VAR_2;

 VAR_2 = FUNC_1(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  FUNC_2(1, "calloc");
 VAR_2->t_conf = VAR_1;
 FUNC_0(&VAR_1->conf_targets, VAR_2, VAR_0);

 return (VAR_2);
}
