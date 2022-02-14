
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct tid_info {int dummy; } ;
struct TYPE_4__ {int kidx; } ;
struct table_config {int astate; struct table_algo* ta; TYPE_1__ no; } ;
struct table_algo {int (* foreach ) (int ,int ,int ,struct dump_args*) ;} ;
struct sockopt_data {scalar_t__ valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct dump_args {int error; int ti; struct sockopt_data* sd; struct table_config* tc; struct ip_fw_chain* ch; } ;
struct _ipfw_obj_header {int dummy; } ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_2__ ipfw_xtable_info ;
typedef int ipfw_obj_header ;
typedef int ip_fw3_opheader ;
typedef int da ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct ip_fw_chain*,struct table_config*,TYPE_2__*) ;
 struct table_config* FUNC_5 (int ,struct tid_info*) ;
 scalar_t__ FUNC_6 (struct sockopt_data*,int) ;
 int FUNC_7 (struct dump_args*,int ,int) ;
 int FUNC_8 (struct _ipfw_obj_header*,struct tid_info*) ;
 int FUNC_9 (int ,int ,int ,struct dump_args*) ;

__attribute__((used)) static int
FUNC_10(struct ip_fw_chain *VAR_4, ip_fw3_opheader *VAR_5,
    struct sockopt_data *VAR_6)
{
 struct _ipfw_obj_header *VAR_7;
 ipfw_xtable_info *VAR_8;
 struct tid_info VAR_9;
 struct table_config *VAR_10;
 struct table_algo *VAR_11;
 struct dump_args VAR_12;
 uint32_t VAR_13;

 VAR_13 = sizeof(ipfw_obj_header) + sizeof(ipfw_xtable_info);
 VAR_7 = (struct _ipfw_obj_header *)FUNC_6(VAR_6, VAR_13);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_8 = (ipfw_xtable_info *)(VAR_7 + 1);
 FUNC_8(VAR_7, &VAR_9);

 FUNC_1(VAR_4);
 if ((VAR_10 = FUNC_5(FUNC_0(VAR_4), &VAR_9)) == ((void*)0)) {
  FUNC_2(VAR_4);
  return (VAR_2);
 }
 FUNC_4(VAR_4, VAR_10, VAR_8);

 if (VAR_6->valsize < VAR_8->size) {







  FUNC_2(VAR_4);
  return (VAR_1);
 }




 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.ch = VAR_4;
 VAR_12.ti = FUNC_3(VAR_4, VAR_10->no.kidx);
 VAR_12.tc = VAR_10;
 VAR_12.sd = VAR_6;

 VAR_11 = VAR_10->ta;

 VAR_11->foreach(VAR_10->astate, VAR_12.ti, VAR_3, &VAR_12);
 FUNC_2(VAR_4);

 return (VAR_12.error);
}
