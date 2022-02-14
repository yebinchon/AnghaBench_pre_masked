
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slbtnode {int ua_level; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct slbtnode* FUNC_1 (int ,int) ;

struct slbtnode *
FUNC_2(void)
{
 struct slbtnode *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0 | VAR_1);
 FUNC_0(VAR_4 != ((void*)0), ("unhandled NULL case"));
 VAR_4->ua_level = VAR_2;

 return (VAR_4);
}
