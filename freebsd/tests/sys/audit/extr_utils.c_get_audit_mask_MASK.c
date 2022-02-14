
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int am_failure; int am_success; } ;
typedef TYPE_1__ au_mask_t ;
struct TYPE_6__ {int ac_class; } ;
typedef TYPE_2__ au_class_ent_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (char const*) ;

__attribute__((used)) static au_mask_t
FUNC_2(const char *VAR_0)
{
 au_mask_t VAR_1;
 au_class_ent_t *VAR_2;

 FUNC_0((VAR_2 = FUNC_1(VAR_0)) != ((void*)0));
 VAR_1.am_success = VAR_2->ac_class;
 VAR_1.am_failure = VAR_2->ac_class;
 return (VAR_1);
}
