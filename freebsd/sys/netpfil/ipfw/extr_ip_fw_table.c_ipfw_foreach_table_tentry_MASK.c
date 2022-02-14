
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ta_foreach_f ;
struct TYPE_2__ {int kidx; } ;
struct table_config {int astate; TYPE_1__ no; struct table_algo* ta; } ;
struct table_algo {int (* foreach ) (int ,int ,int ,struct dump_args*) ;} ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct dump_args {int ti; void* farg; int * f; struct table_config* tc; struct ip_fw_chain* ch; } ;
typedef int da ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_fw_chain*,int ) ;
 scalar_t__ FUNC_2 (struct namedobj_instance*,int ) ;
 int FUNC_3 (struct dump_args*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,struct dump_args*) ;

int
FUNC_5(struct ip_fw_chain *VAR_2, uint16_t VAR_3,
    ta_foreach_f *VAR_4, void *VAR_5)
{
 struct namedobj_instance *VAR_6;
 struct table_config *VAR_7;
 struct table_algo *VAR_8;
 struct dump_args VAR_9;

 VAR_6 = FUNC_0(VAR_2);

 VAR_7 = (struct table_config *)FUNC_2(VAR_6, VAR_3);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_8 = VAR_7->ta;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ch = VAR_2;
 VAR_9.ti = FUNC_1(VAR_2, VAR_7->no.kidx);
 VAR_9.tc = VAR_7;
 VAR_9.f = VAR_4;
 VAR_9.farg = VAR_5;

 VAR_8->foreach(VAR_7->astate, VAR_9.ti, VAR_1, &VAR_9);

 return (0);
}
