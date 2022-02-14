
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_2)
{
 if (!VAR_1)
  return FUNC_0(VAR_2, "off\n");

 return FUNC_0(VAR_2, "%s\n", VAR_1 == &VAR_0 ?
     "active" : "passive");
}
