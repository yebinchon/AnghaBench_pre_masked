
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipstat {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ipstat*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct ipstat*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ipstat *VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_2 = sizeof(*VAR_1);
 VAR_3 = FUNC_4("net.inet.ip.stats", VAR_1, &VAR_2, ((void*)0), 0);
 FUNC_1(VAR_3 == 0, "sysctl(net.inet.ip.stats) failed: %s",
     FUNC_3(VAR_0));
 FUNC_0(VAR_2 == sizeof(*VAR_1));
}
