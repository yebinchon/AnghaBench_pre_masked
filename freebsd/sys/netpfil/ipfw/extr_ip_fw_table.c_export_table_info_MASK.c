
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct TYPE_5__ {int kidx; int refcnt; int set; int subtype; } ;
struct table_config {scalar_t__ locked; int astate; struct table_algo* ta; TYPE_1__ no; int tablename; int limit; int vmask; int tflags; } ;
struct table_algo {int (* dump_tinfo ) (int ,struct table_info*,TYPE_3__*) ;int name; int (* print_config ) (int ,struct table_info*,int ,int) ;} ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int count; int size; TYPE_3__ ta_info; int algoname; int tablename; int flags; int limit; int refcnt; int kidx; int set; int vmask; int tflags; int type; } ;
typedef TYPE_2__ ipfw_xtable_info ;
typedef int ipfw_obj_tentry ;
typedef int ipfw_obj_header ;


 int VAR_0 ;
 int VAR_1 ;
 struct table_info* FUNC_0 (struct ip_fw_chain*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,struct table_info*,int ,int) ;
 int FUNC_3 (int ,struct table_info*,TYPE_3__*) ;
 int FUNC_4 (struct ip_fw_chain*,struct table_config*) ;

__attribute__((used)) static void
FUNC_5(struct ip_fw_chain *VAR_2, struct table_config *VAR_3,
    ipfw_xtable_info *VAR_4)
{
 struct table_info *VAR_5;
 struct table_algo *VAR_6;

 VAR_4->type = VAR_3->no.subtype;
 VAR_4->tflags = VAR_3->tflags;
 VAR_4->vmask = VAR_3->vmask;
 VAR_4->set = VAR_3->no.set;
 VAR_4->kidx = VAR_3->no.kidx;
 VAR_4->refcnt = VAR_3->no.refcnt;
 VAR_4->count = FUNC_4(VAR_2, VAR_3);
 VAR_4->limit = VAR_3->limit;
 VAR_4->flags |= (VAR_3->locked != 0) ? VAR_1 : 0;
 VAR_4->size = VAR_4->count * sizeof(ipfw_obj_tentry);
 VAR_4->size += sizeof(ipfw_obj_header) + sizeof(ipfw_xtable_info);
 FUNC_1(VAR_4->tablename, VAR_3->tablename, sizeof(VAR_4->tablename));
 VAR_5 = FUNC_0(VAR_2, VAR_3->no.kidx);
 VAR_6 = VAR_3->ta;
 if (VAR_6->print_config != ((void*)0)) {

  VAR_6->print_config(VAR_3->astate, VAR_5, VAR_4->algoname,
      sizeof(VAR_4->algoname));
 } else
  FUNC_1(VAR_4->algoname, VAR_6->name, sizeof(VAR_4->algoname));

 if (VAR_6->dump_tinfo != ((void*)0)) {
  VAR_6->dump_tinfo(VAR_3->astate, VAR_5, &VAR_4->ta_info);
  VAR_4->ta_info.flags |= VAR_0;
 }
}
