
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int dummy; } ;
struct ip_fw {int refcnt; int cntr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ip_fw* FUNC_0 (size_t,int ,int) ;
 int FUNC_1 (int ,int) ;

struct ip_fw *
FUNC_2(struct ip_fw_chain *VAR_4, size_t VAR_5)
{
 struct ip_fw *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_1 | VAR_2);
 VAR_6->cntr = FUNC_1(VAR_3, VAR_1 | VAR_2);
 VAR_6->refcnt = 1;

 return (VAR_6);
}
