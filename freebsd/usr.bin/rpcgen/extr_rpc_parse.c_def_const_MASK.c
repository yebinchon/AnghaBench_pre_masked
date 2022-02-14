
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int str; } ;
typedef TYPE_2__ token ;
struct TYPE_7__ {int co; } ;
struct TYPE_9__ {TYPE_1__ def; int def_name; int def_kind; } ;
typedef TYPE_3__ definition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(definition *VAR_4)
{
 token VAR_5;

 VAR_4->def_kind = VAR_0;
 FUNC_0(VAR_2, &VAR_5);
 VAR_4->def_name = VAR_5.str;
 FUNC_0(VAR_1, &VAR_5);
 FUNC_1(VAR_2, VAR_3, &VAR_5);
 VAR_4->def.co = VAR_5.str;
}
