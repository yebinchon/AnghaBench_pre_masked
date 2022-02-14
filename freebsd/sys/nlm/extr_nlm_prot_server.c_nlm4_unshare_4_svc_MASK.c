
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_4__ {int stat; } ;
typedef TYPE_1__ nlm4_shareres ;
typedef int nlm4_shareargs ;
typedef int bool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

bool_t
FUNC_1(nlm4_shareargs *VAR_2, nlm4_shareres *VAR_3, struct svc_req *VAR_4)
{

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->stat = VAR_1;
 return (VAR_0);
}
