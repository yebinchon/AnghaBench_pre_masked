
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,struct bundle_header*,char const*) ;

int FUNC_4(const char *VAR_1, struct bundle_header *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1, VAR_0);

 if (VAR_3 < 0)
  return FUNC_1(FUNC_0("could not open '%s'"), VAR_1);
 return FUNC_3(VAR_3, VAR_2, VAR_1);
}
