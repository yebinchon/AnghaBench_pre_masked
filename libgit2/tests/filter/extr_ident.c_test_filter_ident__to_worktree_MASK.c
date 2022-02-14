
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filter_list ;
typedef int git_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int ,int ) ;
 int FUNC_5 (int *,int *,int *) ;
 int * FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_filter_list *VAR_3;
 git_filter *VAR_4;

 FUNC_2(FUNC_4(
  &VAR_3, VAR_2, VAR_1, 0));

 VAR_4 = FUNC_6(VAR_0);
 FUNC_1(VAR_4 != ((void*)0));

 FUNC_2(FUNC_5(VAR_3, VAR_4, ((void*)0)));

 FUNC_0(
  "Hello\n$Id$\nFun stuff\n", VAR_3,
  "Hello\n$Id: b69e2387aafcaf73c4de5b9ab59abe27fdadee30 $\nFun stuff\n");
 FUNC_0(
  "Hello\n$Id: Junky$\nFun stuff\n", VAR_3,
  "Hello\n$Id: 45cd107a7102911cb2a7df08404674327fa050b9 $\nFun stuff\n");
 FUNC_0(
  "$Id$\nAt the start\n", VAR_3,
  "$Id: b13415c767abc196fb95bd17070e8c1113e32160 $\nAt the start\n");
 FUNC_0(
  "At the end\n$Id$", VAR_3,
  "At the end\n$Id: 1344925c6bc65b34c5a7b50f86bf688e48e9a272 $");
 FUNC_0(
  "$Id$", VAR_3,
  "$Id: b3f5ebfb5843bc43ceecff6d4f26bb37c615beb1 $");
 FUNC_0(
  "$Id: Some sort of junk goes here$", VAR_3,
  "$Id: ab2dd3853c7c9a4bff55aca2bea077a73c32ac06 $");

 FUNC_0("$Id: ", VAR_3, "$Id: ");
 FUNC_0("$Id", VAR_3, "$Id");
 FUNC_0("$I", VAR_3, "$I");
 FUNC_0("Id$", VAR_3, "Id$");

 FUNC_3(VAR_3);
}
