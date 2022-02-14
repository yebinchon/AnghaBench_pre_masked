
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nptv6_dump_arg {int ch; int sd; } ;
struct nptv6_cfg {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
typedef int ipfw_nptv6_cfg ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct nptv6_cfg*,int *) ;

__attribute__((used)) static int
FUNC_2(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    void *VAR_2)
{
 struct nptv6_dump_arg *VAR_3 = (struct nptv6_dump_arg *)VAR_2;
 ipfw_nptv6_cfg *VAR_4;

 VAR_4 = (ipfw_nptv6_cfg *)FUNC_0(VAR_3->sd, sizeof(*VAR_4));
 FUNC_1(VAR_3->ch, (struct nptv6_cfg *)VAR_1, VAR_4);
 return (0);
}
