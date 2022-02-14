
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nv*,struct nv**) ;
 int FUNC_1 (struct nv*,char const*,char*,int ) ;
 int FUNC_2 (struct nv*,int,char*) ;
 struct nv* FUNC_3 () ;
 int FUNC_4 (struct nv*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, int VAR_3)
{
 struct nv *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3();
 FUNC_1(VAR_4, VAR_2, "resource%d", 0);
 FUNC_2(VAR_4, VAR_0, "cmd");
 FUNC_2(VAR_4, VAR_3, "role");
 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 FUNC_4(VAR_4);
 if (VAR_6 != 0)
  return (-1);
 FUNC_4(VAR_5);
 return (VAR_1);
}
