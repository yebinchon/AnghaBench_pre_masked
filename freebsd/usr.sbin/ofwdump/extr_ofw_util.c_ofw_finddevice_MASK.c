
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofiocdesc {char const* of_name; scalar_t__ of_nodeid; int * of_buf; scalar_t__ of_buflen; int of_namelen; } ;
typedef scalar_t__ phandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int ,struct ofiocdesc*) ;
 int FUNC_2 (char const*) ;

phandle_t
FUNC_3(int VAR_5, const char *VAR_6)
{
 struct ofiocdesc VAR_7;

 VAR_7.of_nodeid = 0;
 VAR_7.of_namelen = FUNC_2(VAR_6);
 VAR_7.of_name = VAR_6;
 VAR_7.of_buflen = 0;
 VAR_7.of_buf = ((void*)0);
 if (FUNC_1(VAR_5, VAR_3, &VAR_7) == -1) {
  if (VAR_4 == VAR_0)
   FUNC_0(VAR_2, "Node '%s' not found", VAR_6);
  else
   FUNC_0(VAR_1,
       "ioctl(..., OFIOCFINDDEVICE, ...) failed");
 }
 return (VAR_7.of_nodeid);
}
