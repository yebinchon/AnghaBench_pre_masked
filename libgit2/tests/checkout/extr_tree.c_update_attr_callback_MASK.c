
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int,int,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

void FUNC_3(
 const char *VAR_2,
 size_t VAR_3,
 size_t VAR_4,
 void *VAR_5)
{
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);

 if (VAR_2 && FUNC_2(VAR_2, "ident1.txt") == 0)
  FUNC_1("testrepo/.gitattributes",
   "*.txt ident\n", 12, VAR_1|VAR_0, 0666);
}
