
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct group {int dummy; } ;


 int VAR_0 ;
 struct group* FUNC_0 (int ) ;
 struct group* FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,int ,int ,char const**) ;

__attribute__((used)) static struct group *
FUNC_4(char *VAR_2)
{
 const char *VAR_3 = ((void*)0);
 struct group *VAR_4;
 uintmax_t VAR_5;

 if ((VAR_4 = FUNC_1(VAR_2)) == ((void*)0)) {
  VAR_5 = FUNC_3(VAR_2, 0, VAR_1, &VAR_3);
  if (VAR_3)
   FUNC_2(VAR_0, "group `%s' does not exist", VAR_2);
  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4 == ((void*)0))
   FUNC_2(VAR_0, "group `%s' does not exist", VAR_2);
 }

 return (VAR_4);
}
