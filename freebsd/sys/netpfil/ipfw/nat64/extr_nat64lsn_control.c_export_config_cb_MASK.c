
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64lsn_cfg {int dummy; } ;
struct nat64_dump_arg {int ch; int sd; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct _ipfw_nat64lsn_cfg {int dummy; } ;
typedef struct _ipfw_nat64lsn_cfg ipfw_nat64lsn_cfg ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct nat64lsn_cfg*,struct _ipfw_nat64lsn_cfg*) ;

__attribute__((used)) static int
FUNC_2(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    void *VAR_2)
{
 struct nat64_dump_arg *VAR_3 = (struct nat64_dump_arg *)VAR_2;
 ipfw_nat64lsn_cfg *VAR_4;

 VAR_4 = (struct _ipfw_nat64lsn_cfg *)FUNC_0(VAR_3->sd,
     sizeof(*VAR_4));
 FUNC_1(VAR_3->ch, (struct nat64lsn_cfg *)VAR_1, VAR_4);
 return (0);
}
