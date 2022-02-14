
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofiocdesc {char const* of_name; int of_buflen; int of_namelen; int of_nodeid; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct ofiocdesc*) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(int VAR_1, phandle_t VAR_2, const char *VAR_3)
{
 struct ofiocdesc VAR_4;

 VAR_4.of_nodeid = VAR_2;
 VAR_4.of_namelen = FUNC_1(VAR_3);
 VAR_4.of_name = VAR_3;
 FUNC_0(VAR_1, VAR_0, &VAR_4);
 return (VAR_4.of_buflen);
}
