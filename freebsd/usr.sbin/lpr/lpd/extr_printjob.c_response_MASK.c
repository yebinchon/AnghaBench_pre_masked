
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int printer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static char
FUNC_2(const struct printer *VAR_2)
{
 char VAR_3;

 if (FUNC_0(VAR_1, &VAR_3, 1) != 1) {
  FUNC_1(VAR_0, "%s: lost connection", VAR_2->printer);
  return (-1);
 }
 return (VAR_3);
}
