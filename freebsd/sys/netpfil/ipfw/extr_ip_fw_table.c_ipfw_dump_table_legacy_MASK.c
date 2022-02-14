
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tid_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ subtype; int kidx; } ;
struct table_config {int astate; TYPE_1__ no; struct table_algo* ta; } ;
struct table_algo {int (* foreach ) (int ,int ,int ,struct dump_args*) ;} ;
struct ip_fw_chain {int dummy; } ;
struct dump_args {int cnt; int ti; int size; int * ent; struct table_config* tc; struct ip_fw_chain* ch; } ;
struct TYPE_5__ {int cnt; int size; int * ent; } ;
typedef TYPE_2__ ipfw_table ;
typedef int da ;


 int FUNC_0 (struct ip_fw_chain*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ip_fw_chain*,int ) ;
 int VAR_1 ;
 struct table_config* FUNC_2 (int ,struct tid_info*) ;
 int FUNC_3 (struct dump_args*,int ,int) ;
 int FUNC_4 (int ,int ,int ,struct dump_args*) ;

int
FUNC_5(struct ip_fw_chain *VAR_2, struct tid_info *VAR_3,
    ipfw_table *VAR_4)
{
 struct table_config *VAR_5;
 struct table_algo *VAR_6;
 struct dump_args VAR_7;

 VAR_4->cnt = 0;

 if ((VAR_5 = FUNC_2(FUNC_0(VAR_2), VAR_3)) == ((void*)0))
  return (0);

 VAR_6 = VAR_5->ta;


 if (VAR_5->no.subtype != VAR_0)
  return (0);

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ch = VAR_2;
 VAR_7.ti = FUNC_1(VAR_2, VAR_5->no.kidx);
 VAR_7.tc = VAR_5;
 VAR_7.ent = &VAR_4->ent[0];
 VAR_7.size = VAR_4->size;

 VAR_4->cnt = 0;
 VAR_6->foreach(VAR_5->astate, VAR_7.ti, VAR_1, &VAR_7);
 VAR_4->cnt = VAR_7.cnt;

 return (0);
}
