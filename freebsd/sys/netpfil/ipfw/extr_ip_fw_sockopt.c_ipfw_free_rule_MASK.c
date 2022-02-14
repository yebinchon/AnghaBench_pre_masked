
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw {int refcnt; int cntr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ip_fw *VAR_2)
{







 if (VAR_2->refcnt > 1)
  return;
 FUNC_1(VAR_1, VAR_2->cntr);
 FUNC_0(VAR_2, VAR_0);
}
