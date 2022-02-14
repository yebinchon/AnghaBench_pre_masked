
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct table_value {int dummy; } ;
struct TYPE_13__ {scalar_t__ subtype; } ;
struct table_config {TYPE_2__ no; int astate; struct table_algo* ta; } ;
struct table_algo {int (* dump_tentry ) (int ,int ,void*,TYPE_6__*) ;} ;
struct TYPE_15__ {int s_addr; } ;
struct TYPE_11__ {TYPE_4__ addr; } ;
struct TYPE_12__ {int kidx; } ;
struct TYPE_17__ {scalar_t__ subtype; TYPE_10__ k; TYPE_1__ v; int masklen; } ;
struct dump_args {TYPE_6__ tent; struct table_config* tc; int ch; int ti; int uidx; int sd; } ;
struct TYPE_14__ {int * s6_addr32; } ;
struct TYPE_18__ {TYPE_3__ addr6; } ;
struct TYPE_16__ {int len; TYPE_9__ k; int flags; int value; int masklen; int tbl; } ;
typedef TYPE_5__ ipfw_table_xentry ;
typedef TYPE_6__ ipfw_obj_tentry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct table_value* FUNC_0 (int ,struct table_config*,int ) ;
 int FUNC_1 (struct table_value*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_9__*,TYPE_10__*,int) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 int FUNC_5 (int ,int ,void*,TYPE_6__*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_3, void *VAR_4)
{
 struct dump_args *VAR_5;
 struct table_config *VAR_6;
 struct table_algo *VAR_7;
 ipfw_table_xentry *VAR_8;
 ipfw_obj_tentry *VAR_9;
 struct table_value *VAR_10;
 int VAR_11;

 VAR_5 = (struct dump_args *)VAR_4;

 VAR_6 = VAR_5->tc;
 VAR_7 = VAR_6->ta;

 VAR_8 = (ipfw_table_xentry *)FUNC_2(VAR_5->sd, sizeof(*VAR_8));

 if (VAR_8 == ((void*)0))
  return (1);
 VAR_8->len = sizeof(ipfw_table_xentry);
 VAR_8->tbl = VAR_5->uidx;

 FUNC_4(&VAR_5->tent, 0, sizeof(VAR_5->tent));
 VAR_9 = &VAR_5->tent;
 VAR_11 = VAR_7->dump_tentry(VAR_6->astate, VAR_5->ti, VAR_3, VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);


 VAR_8->masklen = VAR_9->masklen;
 VAR_10 = FUNC_0(VAR_5->ch, VAR_5->tc, VAR_5->tent.v.kidx);
 VAR_8->value = FUNC_1(VAR_10);

 if (VAR_6->no.subtype == VAR_1 && VAR_9->subtype == VAR_0) {
  VAR_8->k.addr6.s6_addr32[3] = VAR_9->k.addr.s_addr;
  VAR_8->flags = VAR_2;
 } else
  FUNC_3(&VAR_8->k, &VAR_9->k, sizeof(VAR_8->k));

 return (0);
}
