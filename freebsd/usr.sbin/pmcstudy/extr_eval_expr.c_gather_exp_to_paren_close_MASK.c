
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {scalar_t__ type; struct expression* next; } ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (struct expression*,int ,struct expression**) ;

__attribute__((used)) static struct expression *
FUNC_1(struct expression *VAR_1, double *VAR_2)
{
 struct expression *VAR_3;
 double VAR_4;

 if (VAR_1->type == VAR_0) {
  VAR_3 = FUNC_1(VAR_1->next, &VAR_4);
  *VAR_2 = VAR_4;
 } else {
  *VAR_2 = FUNC_0(VAR_1, 0, &VAR_3);
 }
 return(VAR_3);
}
