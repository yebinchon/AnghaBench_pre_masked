
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_value {int dummy; } ;
struct table_algo {int (* dump_tentry ) (int ,int ,void*,TYPE_2__*) ;} ;
struct ip_fw_chain {scalar_t__ valuestate; } ;
struct TYPE_5__ {int kidx; } ;
struct TYPE_6__ {TYPE_1__ v; } ;
struct flush_args {struct ip_fw_chain* ch; int ti; int astate; TYPE_2__ tent; struct table_algo* ta; } ;
typedef TYPE_2__ ipfw_obj_tentry ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int ,void*,TYPE_2__*) ;
 int FUNC_3 (int ,struct table_value*,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, void *VAR_1)
{
 struct flush_args *VAR_2;
 struct ip_fw_chain *VAR_3;
 struct table_algo *VAR_4;
 ipfw_obj_tentry *VAR_5;
 int VAR_6;

 VAR_2 = (struct flush_args *)VAR_1;

 VAR_4 = VAR_2->ta;
 FUNC_1(&VAR_2->tent, 0, sizeof(VAR_2->tent));
 VAR_5 = &VAR_2->tent;
 VAR_6 = VAR_4->dump_tentry(VAR_2->astate, VAR_2->ti, VAR_0, VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_3 = VAR_2->ch;

 FUNC_3(FUNC_0(VAR_3),
     (struct table_value *)VAR_3->valuestate, VAR_5->v.kidx);

 return (0);
}
