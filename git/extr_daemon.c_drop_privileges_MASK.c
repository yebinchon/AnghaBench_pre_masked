
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct credentials {TYPE_1__* pass; int gid; } ;
struct TYPE_2__ {int pw_uid; int pw_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct credentials *VAR_0)
{
 if (VAR_0 && (FUNC_1(VAR_0->pass->pw_name, VAR_0->gid) ||
     FUNC_2 (VAR_0->gid) || FUNC_3(VAR_0->pass->pw_uid)))
  FUNC_0("cannot drop privileges");
}
