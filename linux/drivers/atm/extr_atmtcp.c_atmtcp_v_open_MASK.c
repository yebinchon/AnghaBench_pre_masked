
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {short vpi; int vci; } ;
struct TYPE_7__ {TYPE_2__ sap_addr; int sap_family; } ;
struct TYPE_5__ {void* vci; void* vpi; } ;
struct atmtcp_control {int qos; int type; TYPE_3__ addr; TYPE_1__ hdr; } ;
struct atm_vcc {short vpi; int vci; int flags; int qos; } ;
typedef int msg ;
struct TYPE_8__ {int sk_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 int FUNC_0 (struct atm_vcc*,int ,struct atmtcp_control*,int ) ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct atmtcp_control*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 TYPE_4__* FUNC_5 (struct atm_vcc*) ;

__attribute__((used)) static int FUNC_6(struct atm_vcc *VAR_6)
{
 struct atmtcp_control VAR_7;
 int VAR_8;
 short VAR_9 = VAR_6->vpi;
 int VAR_10 = VAR_6->vci;

 FUNC_3(&VAR_7,0,sizeof(VAR_7));
 VAR_7.addr.sap_family = VAR_0;
 VAR_7.hdr.vpi = FUNC_2(VAR_9);
 VAR_7.addr.sap_addr.vpi = VAR_9;
 VAR_7.hdr.vci = FUNC_2(VAR_10);
 VAR_7.addr.sap_addr.vci = VAR_10;
 if (VAR_9 == VAR_5 || VAR_10 == VAR_2) return 0;
 VAR_7.type = VAR_1;
 VAR_7.qos = VAR_6->qos;
 FUNC_4(VAR_3,&VAR_6->flags);
 FUNC_1(VAR_4,&VAR_6->flags);
 VAR_8 = FUNC_0(VAR_6,VAR_1,&VAR_7,VAR_4);
 if (VAR_8) return VAR_8;
 return -FUNC_5(VAR_6)->sk_err;
}
