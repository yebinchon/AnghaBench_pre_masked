
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofiocdesc {char const* of_name; int of_buflen; int of_buf; int of_namelen; int of_nodeid; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct ofiocdesc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void const*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(int VAR_1, phandle_t VAR_2, const char *VAR_3, const void *VAR_4,
    int VAR_5)
{
 struct ofiocdesc VAR_6;

 VAR_6.of_nodeid = VAR_2;
 VAR_6.of_namelen = FUNC_4(VAR_3);
 VAR_6.of_name = VAR_3;
 VAR_6.of_buflen = VAR_5;
 VAR_6.of_buf = FUNC_3(VAR_5);
 FUNC_2(VAR_6.of_buf, VAR_4, VAR_5);
 FUNC_0(VAR_1, VAR_0, &VAR_6);
 FUNC_1(VAR_6.of_buf);
 return (VAR_6.of_buflen);
}
