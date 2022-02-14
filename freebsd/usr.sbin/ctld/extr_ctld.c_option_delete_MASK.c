
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int dummy; } ;
struct option {struct option* o_value; struct option* o_name; } ;


 int FUNC_0 (struct options*,struct option*,int ) ;
 int FUNC_1 (struct option*) ;
 int VAR_0 ;

void
FUNC_2(struct options *VAR_1, struct option *VAR_2)
{

 FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_2->o_name);
 FUNC_1(VAR_2->o_value);
 FUNC_1(VAR_2);
}
