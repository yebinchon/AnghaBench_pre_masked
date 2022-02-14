
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_4__ {int * empty_tree; } ;


 char const* FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(struct commit *VAR_1)
{
 return FUNC_0(VAR_1 ? &VAR_1->object.oid : VAR_0->empty_tree);
}
