
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct commit *VAR_1, struct commit *VAR_2,
         int VAR_3)
{
 return FUNC_1(((void*)0), "post-checkout",
      FUNC_0(VAR_1 ? &VAR_1->object.oid : &VAR_0),
      FUNC_0(VAR_2 ? &VAR_2->object.oid : &VAR_0),
      VAR_3 ? "1" : "0", ((void*)0));



}
