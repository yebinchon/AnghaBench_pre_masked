
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_index; } ;


 int FUNC_0 (struct ifnet*) ;
 struct ifnet* FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 struct ifnet *VAR_1;
 int VAR_2;

 VAR_2 = 0;

 if ((VAR_1 = FUNC_1(VAR_0)) != ((void*)0)) {
  VAR_2 = VAR_1->if_index;
  FUNC_0(VAR_1);
 }

 return (VAR_2);
}
