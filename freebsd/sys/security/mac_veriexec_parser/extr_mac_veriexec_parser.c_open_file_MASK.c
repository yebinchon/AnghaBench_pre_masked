
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,char const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct nameidata*,int*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_5, struct nameidata *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = VAR_0;

 FUNC_2();

 FUNC_1(VAR_6, VAR_1, 0, VAR_3, VAR_5, VAR_4);
 VAR_8 = FUNC_3(VAR_6, &VAR_7, 0, ((void*)0));
 FUNC_0(VAR_6, VAR_2);
 if (VAR_8 != 0)
  return (VAR_8);

 return (0);
}
