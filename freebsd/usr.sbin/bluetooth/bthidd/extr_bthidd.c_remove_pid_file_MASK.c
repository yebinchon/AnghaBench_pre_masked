
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int32_t
FUNC_4(char const *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));

 if (FUNC_3(VAR_2) < 0) {
  FUNC_2(VAR_0, "Could not unlink file %s. %s (%d)",
   VAR_2, FUNC_1(VAR_1), VAR_1);
  return (-1);
 }

 return (0);
}
