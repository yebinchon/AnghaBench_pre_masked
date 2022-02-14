
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int FUNC_0 (struct node*,struct node*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct node*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct node *VAR_0, struct node *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_3("1>");
  FUNC_1(VAR_2);
  FUNC_2(VAR_0);
  FUNC_3("2>");
  FUNC_1(VAR_2);
  FUNC_2(VAR_1);
 }
 return (VAR_3);
}
