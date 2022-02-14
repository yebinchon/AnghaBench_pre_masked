
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umcast_data {int * remote_addr; int * listen_addr; scalar_t__ unicast; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct umcast_data *VAR_1 = VAR_0;

 FUNC_0(VAR_1->listen_addr);
 if (VAR_1->unicast)
  FUNC_0(VAR_1->remote_addr);
 VAR_1->listen_addr = VAR_1->remote_addr = ((void*)0);
}
