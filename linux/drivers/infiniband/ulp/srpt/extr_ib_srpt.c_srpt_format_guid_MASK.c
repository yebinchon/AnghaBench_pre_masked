
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be64 ;
typedef int __be16 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*,unsigned int,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, unsigned int VAR_1, const __be64 *VAR_2)
{
 const __be16 *VAR_3 = (const __be16 *)VAR_2;

 return FUNC_1(VAR_0, VAR_1, "%04x:%04x:%04x:%04x",
   FUNC_0(VAR_3[0]), FUNC_0(VAR_3[1]),
   FUNC_0(VAR_3[2]), FUNC_0(VAR_3[3]));
}
