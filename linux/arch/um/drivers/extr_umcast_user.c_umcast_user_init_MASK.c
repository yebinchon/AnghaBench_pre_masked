
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umcast_data {void* dev; void* remote_addr; void* listen_addr; int lport; scalar_t__ unicast; int rport; int * addr; } ;


 void* FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct umcast_data *VAR_2 = VAR_0;

 VAR_2->remote_addr = FUNC_0(VAR_2->addr, VAR_2->rport);
 if (VAR_2->unicast)
  VAR_2->listen_addr = FUNC_0(((void*)0), VAR_2->lport);
 else
  VAR_2->listen_addr = VAR_2->remote_addr;
 VAR_2->dev = VAR_1;
 return 0;
}
