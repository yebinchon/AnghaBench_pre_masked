
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_value {int dummy; } ;
struct table_config {int astate; struct table_algo* ta; } ;
struct table_algo {int (* dump_tentry ) (int ,int ,void*,TYPE_3__*) ;} ;
struct dump_args {struct table_config* tc; int ch; int ti; int uidx; int error; int sd; } ;
struct TYPE_6__ {int value; int kidx; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_7__ {TYPE_2__ v; int idx; TYPE_1__ head; } ;
typedef TYPE_3__ ipfw_obj_tentry ;


 int VAR_0 ;
 struct table_value* FUNC_0 (int ,struct table_config*,int ) ;
 int FUNC_1 (struct table_value*,int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,void*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, void *VAR_2)
{
 struct dump_args *VAR_3;
 struct table_config *VAR_4;
 struct table_algo *VAR_5;
 struct table_value *VAR_6;
 ipfw_obj_tentry *VAR_7;
 int VAR_8;

 VAR_3 = (struct dump_args *)VAR_2;

 VAR_4 = VAR_3->tc;
 VAR_5 = VAR_4->ta;

 VAR_7 = (ipfw_obj_tentry *)FUNC_2(VAR_3->sd, sizeof(*VAR_7));

 if (VAR_7 == ((void*)0)) {
  VAR_3->error = VAR_0;
  return (1);
 }
 VAR_7->head.length = sizeof(ipfw_obj_tentry);
 VAR_7->idx = VAR_3->uidx;

 VAR_8 = VAR_5->dump_tentry(VAR_4->astate, VAR_3->ti, VAR_1, VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_6 = FUNC_0(VAR_3->ch, VAR_3->tc, VAR_7->v.kidx);
 FUNC_1(VAR_6, &VAR_7->v.value);

 return (0);
}
