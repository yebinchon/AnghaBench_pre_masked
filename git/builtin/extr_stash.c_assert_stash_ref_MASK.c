
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct stash_info {TYPE_1__ revision; int is_stash_ref; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct stash_info*) ;

__attribute__((used)) static void FUNC_4(struct stash_info *VAR_0)
{
 if (!VAR_0->is_stash_ref) {
  FUNC_1(FUNC_0("'%s' is not a stash reference"), VAR_0->revision.buf);
  FUNC_3(VAR_0);
  FUNC_2(1);
 }
}
