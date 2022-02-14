
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_hndl {int start_status; int init_status; } ;


 int FUNC_0 (struct service_hndl*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct service_hndl *VAR_0)
{
 FUNC_1(VAR_0->init_status, 0, sizeof(VAR_0->init_status));
 FUNC_1(VAR_0->start_status, 0, sizeof(VAR_0->start_status));
 FUNC_0(VAR_0);
 return 0;
}
