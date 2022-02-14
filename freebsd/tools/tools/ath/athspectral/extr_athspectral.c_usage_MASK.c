
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(const char *VAR_0)
{
 FUNC_0("Usage:\n");
 FUNC_0("\t%s: [-i <interface>] <cmd> (<arg>)\n", VAR_0);
 FUNC_0("\t%s: [-h]\n", VAR_0);
 FUNC_0("\n");
 FUNC_0("Valid commands:\n");
 FUNC_0("\tget:\t\tGet current spectral parameters\n");
 FUNC_0("\tset <param> <value>:\t\tSet spectral parameter\n");
 FUNC_0("\tstart: Start spectral scan\n");
 FUNC_0("\tstop: Stop spectral scan\n");
 FUNC_0("\tenable_at_reset <0|1>: enable reporting upon channel reset\n");
}
