
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int *,size_t*,int *,int ) ;

void
FUNC_2(void)
{
 size_t VAR_2;
 const char *VAR_3 = "net.inet.sctp.stats";

 VAR_1 = VAR_0;
 VAR_2 = sizeof VAR_0;
 if (FUNC_1(VAR_3, &VAR_0, &VAR_2, ((void*)0), 0) < 0) {
  FUNC_0("sysctl getting sctpstat failed");
 }
 return;
}
