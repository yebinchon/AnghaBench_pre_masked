
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_txreq {int dummy; } ;
struct TYPE_2__ {int txreq_cache; } ;
struct hfi1_devdata {int unit; TYPE_1__ vnic; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (char*,int,char*,int) ;

int FUNC_2(struct hfi1_devdata *VAR_3)
{
 char VAR_4[VAR_1];

 FUNC_1(VAR_4, sizeof(VAR_4), "hfi1_%u_vnic_txreq_cache", VAR_3->unit);
 VAR_3->vnic.txreq_cache = FUNC_0(VAR_4,
       sizeof(struct vnic_txreq),
       0, VAR_2,
       ((void*)0));
 if (!VAR_3->vnic.txreq_cache)
  return -VAR_0;
 return 0;
}
