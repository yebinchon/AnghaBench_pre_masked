
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofiocdesc {char const* of_name; int of_buflen; char* of_buf; int of_namelen; int of_nodeid; } ;
typedef int phandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ,struct ofiocdesc*) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(int VAR_4, phandle_t VAR_5, const char *VAR_6, char *VAR_7, int VAR_8)
{
 struct ofiocdesc VAR_9;

 VAR_9.of_nodeid = VAR_5;
 VAR_9.of_namelen = VAR_6 != ((void*)0) ? FUNC_2(VAR_6) : 0;
 VAR_9.of_name = VAR_6;
 VAR_9.of_buflen = VAR_8;
 VAR_9.of_buf = VAR_7;
 if (FUNC_1(VAR_4, VAR_2, &VAR_9) == -1) {
  if (VAR_3 == VAR_0)
   return (0);
  else
   FUNC_0(VAR_1, "ioctl(..., OFIOCNEXTPROP, ...) failed");
 }
 return (VAR_9.of_buflen);
}
