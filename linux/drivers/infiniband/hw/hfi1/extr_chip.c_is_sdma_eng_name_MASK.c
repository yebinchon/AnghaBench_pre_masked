
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char** VAR_1 ;
 int FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static char *FUNC_2(char *VAR_2, size_t VAR_3, unsigned int VAR_4)
{

 unsigned int VAR_5 = VAR_4 / VAR_0;

 unsigned int VAR_6 = VAR_4 % VAR_0;

 if (FUNC_0(VAR_5 < 3))
  FUNC_1(VAR_2, VAR_3, "%s%u", VAR_1[VAR_5], VAR_6);
 else
  FUNC_1(VAR_2, VAR_3, "Invalid SDMA interrupt %u", VAR_4);
 return VAR_2;
}
