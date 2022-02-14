
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_ifidx {int arg; int (* f ) (struct ifentry*,int ) ;} ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct ifentry {int dummy; } ;


 int FUNC_0 (struct ifentry*,int ) ;

__attribute__((used)) static int
FUNC_1(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    void *VAR_2)
{
 struct ifentry *VAR_3;
 struct wa_ifidx *VAR_4;

 VAR_3 = (struct ifentry *)VAR_1;
 VAR_4 = (struct wa_ifidx *)VAR_2;

 VAR_4->f(VAR_3, VAR_4->arg);
 return (0);
}
