
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oidstr ;
typedef int git_tag ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 char* FUNC_2 (int const*) ;
 char* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(const git_tag *VAR_1)
{
 char VAR_2[VAR_0 + 1];

 FUNC_1(VAR_2, sizeof(VAR_2), FUNC_5(VAR_1));;
 FUNC_8("object %s\n", VAR_2);
 FUNC_8("type %s\n", FUNC_0(FUNC_6(VAR_1)));
 FUNC_8("tag %s\n", FUNC_3(VAR_1));
 FUNC_7("tagger", FUNC_4(VAR_1));

 if (FUNC_2(VAR_1))
  FUNC_8("\n%s\n", FUNC_2(VAR_1));
}
