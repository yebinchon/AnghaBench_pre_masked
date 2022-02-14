
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int p_proto; } ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 struct protoent* FUNC_1 (char const*) ;
 int FUNC_2 (size_t) ;
 size_t VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct protoent *VAR_4;
 const char *VAR_5;
 size_t VAR_6;

 FUNC_2(VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_1[VAR_6];
  VAR_4 = FUNC_1(VAR_5);
  if (VAR_4 == ((void*)0))
   FUNC_0(1, "getprotobyname: %s", VAR_5);
  VAR_3[VAR_6] = VAR_4->p_proto;
 }
 VAR_2 = VAR_6;
 return (VAR_6);
}
