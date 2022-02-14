
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paace {int dummy; } ;


 int VAR_0 ;
 struct paace* VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static struct paace *FUNC_1(int VAR_2)
{
 if (!VAR_1 || VAR_2 >= VAR_0) {
  FUNC_0("PPAACT doesn't exist\n");
  return ((void*)0);
 }

 return &VAR_1[VAR_2];
}
