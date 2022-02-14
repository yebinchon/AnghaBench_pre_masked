
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int srvstate; int srvmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;

void
FUNC_2(struct ip_fw_chain *VAR_4)
{

 VAR_4->srvmap = FUNC_0(VAR_0);
 VAR_4->srvstate = FUNC_1(sizeof(void *) * VAR_0,
     VAR_1, VAR_2 | VAR_3);
}
