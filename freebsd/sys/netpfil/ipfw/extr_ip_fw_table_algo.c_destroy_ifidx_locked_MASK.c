
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct ifentry {int ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifentry*,int ) ;
 int FUNC_1 (struct ip_fw_chain*,int *) ;
 int FUNC_2 (struct ip_fw_chain*,int *) ;

__attribute__((used)) static int
FUNC_3(struct namedobj_instance *VAR_1, struct named_object *VAR_2,
    void *VAR_3)
{
 struct ifentry *VAR_4;
 struct ip_fw_chain *VAR_5;

 VAR_5 = (struct ip_fw_chain *)VAR_3;
 VAR_4 = (struct ifentry *)VAR_2;

 FUNC_1(VAR_5, &VAR_4->ic);
 FUNC_2(VAR_5, &VAR_4->ic);
 FUNC_0(VAR_4, VAR_0);
 return (0);
}
