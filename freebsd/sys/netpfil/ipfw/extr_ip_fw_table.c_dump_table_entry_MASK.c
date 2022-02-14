
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct table_value {int dummy; } ;
struct table_config {int astate; struct table_algo* ta; } ;
struct table_algo {int (* dump_tentry ) (int ,int ,void*,TYPE_5__*) ;} ;
struct TYPE_8__ {int kidx; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_10__ {TYPE_3__ v; int masklen; TYPE_2__ k; } ;
struct dump_args {scalar_t__ cnt; scalar_t__ size; TYPE_5__ tent; struct table_config* tc; int ch; int ti; int uidx; int ent; } ;
struct TYPE_9__ {int value; int masklen; int addr; int tbl; } ;
typedef TYPE_4__ ipfw_table_entry ;


 struct table_value* FUNC_0 (int ,struct table_config*,int ) ;
 int FUNC_1 (struct table_value*) ;
 int FUNC_2 (int ,int ,void*,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, void *VAR_1)
{
 struct dump_args *VAR_2;
 struct table_config *VAR_3;
 struct table_algo *VAR_4;
 ipfw_table_entry *VAR_5;
 struct table_value *VAR_6;
 int VAR_7;

 VAR_2 = (struct dump_args *)VAR_1;

 VAR_3 = VAR_2->tc;
 VAR_4 = VAR_3->ta;


 if (VAR_2->cnt == VAR_2->size)
  return (1);
 VAR_5 = VAR_2->ent++;
 VAR_5->tbl = VAR_2->uidx;
 VAR_2->cnt++;

 VAR_7 = VAR_4->dump_tentry(VAR_3->astate, VAR_2->ti, VAR_0, &VAR_2->tent);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_5->addr = VAR_2->tent.k.addr.s_addr;
 VAR_5->masklen = VAR_2->tent.masklen;
 VAR_6 = FUNC_0(VAR_2->ch, VAR_2->tc, VAR_2->tent.v.kidx);
 VAR_5->value = FUNC_1(VAR_6);

 return (0);
}
