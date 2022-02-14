
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nl_cache_ops {scalar_t__ co_protocol; scalar_t__ co_hdrsize; TYPE_2__* co_genl; int co_msg_parser; TYPE_1__* co_msgtypes; } ;
struct TYPE_4__ {int o_list; int o_family; int o_name; struct nl_cache_ops* o_cache_ops; } ;
struct TYPE_3__ {int mt_id; int mt_name; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nl_cache_ops*) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct nl_cache_ops *VAR_5)
{
 int VAR_6;

 if (VAR_5->co_protocol != VAR_0) {
  VAR_6 = -VAR_2;
  goto errout;
 }

 if (VAR_5->co_hdrsize < FUNC_0(0)) {
  VAR_6 = -VAR_1;
  goto errout;
 }

 if (VAR_5->co_genl == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto errout;
 }

 VAR_5->co_genl->o_cache_ops = VAR_5;
 VAR_5->co_genl->o_name = VAR_5->co_msgtypes[0].mt_name;
 VAR_5->co_genl->o_family = VAR_5->co_msgtypes[0].mt_id;
 VAR_5->co_msg_parser = VAR_3;



 FUNC_2(&VAR_5->co_genl->o_list, &VAR_4);

 VAR_6 = FUNC_1(VAR_5);
errout:
 return VAR_6;
}
