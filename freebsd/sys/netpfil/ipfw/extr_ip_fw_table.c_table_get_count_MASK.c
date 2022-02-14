
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct table_info {int dummy; } ;
struct TYPE_2__ {int kidx; } ;
struct table_config {int astate; int count; struct table_algo* ta; TYPE_1__ no; } ;
struct table_algo {int flags; int (* foreach ) (int ,struct table_info*,int ,struct dump_args*) ;int (* get_count ) (int ,struct table_info*) ;} ;
struct ip_fw_chain {int dummy; } ;
struct dump_args {int cnt; } ;
typedef int da ;


 struct table_info* FUNC_0 (struct ip_fw_chain*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dump_args*,int ,int) ;
 int FUNC_2 (int ,struct table_info*) ;
 int FUNC_3 (int ,struct table_info*,int ,struct dump_args*) ;

__attribute__((used)) static uint32_t
FUNC_4(struct ip_fw_chain *VAR_3, struct table_config *VAR_4)
{
 struct table_info *VAR_5;
 struct table_algo *VAR_6;
 struct dump_args VAR_7;

 VAR_5 = FUNC_0(VAR_3, VAR_4->no.kidx);
 VAR_6 = VAR_4->ta;


 if ((VAR_6->flags & VAR_1) == 0)
  return (VAR_4->count);


 if ((VAR_6->flags & VAR_0) != 0)
  return (VAR_6->get_count(VAR_4->astate, VAR_5));


 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_6->foreach(VAR_4->astate, VAR_5, VAR_2, &VAR_7);

 return (VAR_7.cnt);
}
