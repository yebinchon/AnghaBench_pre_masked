
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int dummy; } ;
struct table_config {int dummy; } ;
struct table_algo {int (* foreach ) (void*,struct table_info*,int ,struct flush_args*) ;} ;
struct ip_fw_chain {int dummy; } ;
struct flush_args {struct table_info* ti; void* astate; struct table_algo* ta; struct ip_fw_chain* ch; } ;
typedef int fa ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct flush_args*,int ,int) ;
 int FUNC_2 (void*,struct table_info*,int ,struct flush_args*) ;
 int VAR_0 ;

void
FUNC_3(struct ip_fw_chain *VAR_1, struct table_config *VAR_2,
    struct table_algo *VAR_3, void *VAR_4, struct table_info *VAR_5)
{
 struct flush_args VAR_6;

 FUNC_0(VAR_1);

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ch = VAR_1;
 VAR_6.ta = VAR_3;
 VAR_6.astate = VAR_4;
 VAR_6.ti = VAR_5;

 VAR_3->foreach(VAR_4, VAR_5, VAR_0, &VAR_6);
}
