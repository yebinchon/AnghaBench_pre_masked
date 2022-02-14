
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stat; } ;
struct nlm_res {TYPE_1__ stat; int cookie; } ;
struct TYPE_4__ {int stat; } ;
struct nlm4_res {TYPE_2__ stat; int cookie; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nlm_res *VAR_0, struct nlm4_res *VAR_1)
{
 VAR_0->cookie = VAR_1->cookie;
 VAR_0->stat.stat = FUNC_0(VAR_1->stat.stat);
}
