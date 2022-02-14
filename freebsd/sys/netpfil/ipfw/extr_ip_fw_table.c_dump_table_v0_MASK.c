
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ti ;
struct tid_info {int ti; struct sockopt_data* sd; struct table_config* tc; struct ip_fw_chain* ch; int uidx; } ;
struct TYPE_3__ {int kidx; int subtype; } ;
struct table_config {int astate; struct table_algo* ta; TYPE_1__ no; } ;
struct table_algo {int (* foreach ) (int ,int ,int ,struct tid_info*) ;} ;
struct sockopt_data {size_t valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct dump_args {int ti; struct sockopt_data* sd; struct table_config* tc; struct ip_fw_chain* ch; int uidx; } ;
struct TYPE_4__ {size_t cnt; size_t size; int tbl; int type; } ;
typedef TYPE_2__ ipfw_xtable ;
typedef int ipfw_table_xentry ;
typedef int ip_fw3_opheader ;
typedef int da ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*,int ) ;
 int VAR_2 ;
 struct table_config* FUNC_4 (int ,struct tid_info*) ;
 scalar_t__ FUNC_5 (struct sockopt_data*,int) ;
 int FUNC_6 (struct tid_info*,int ,int) ;
 int FUNC_7 (int ,int ,int ,struct tid_info*) ;
 size_t FUNC_8 (struct ip_fw_chain*,struct table_config*) ;

__attribute__((used)) static int
FUNC_9(struct ip_fw_chain *VAR_3, ip_fw3_opheader *VAR_4,
    struct sockopt_data *VAR_5)
{
 ipfw_xtable *VAR_6;
 struct tid_info VAR_7;
 struct table_config *VAR_8;
 struct table_algo *VAR_9;
 struct dump_args VAR_10;
 size_t VAR_11, VAR_12;

 VAR_6 = (ipfw_xtable *)FUNC_5(VAR_5, sizeof(ipfw_xtable));
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.uidx = VAR_6->tbl;

 FUNC_1(VAR_3);
 if ((VAR_8 = FUNC_4(FUNC_0(VAR_3), &VAR_7)) == ((void*)0)) {
  FUNC_2(VAR_3);
  return (0);
 }
 VAR_12 = FUNC_8(VAR_3, VAR_8);
 VAR_11 = VAR_12 * sizeof(ipfw_table_xentry) + sizeof(ipfw_xtable);

 VAR_6->cnt = VAR_12;
 VAR_6->size = VAR_11;
 VAR_6->type = VAR_8->no.subtype;
 VAR_6->tbl = VAR_7.uidx;

 if (VAR_5->valsize < VAR_11) {







  FUNC_2(VAR_3);
  return (VAR_1);
 }


 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ch = VAR_3;
 VAR_10.ti = FUNC_3(VAR_3, VAR_8->no.kidx);
 VAR_10.tc = VAR_8;
 VAR_10.sd = VAR_5;

 VAR_9 = VAR_8->ta;

 VAR_9->foreach(VAR_8->astate, VAR_10.ti, VAR_2, &VAR_10);
 FUNC_2(VAR_3);

 return (0);
}
