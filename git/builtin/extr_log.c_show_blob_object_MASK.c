
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allow_textconv; int textconv_set_via_cmdline; } ;
struct TYPE_4__ {TYPE_1__ flags; int file; } ;
struct rev_info {TYPE_2__ diffopt; } ;
struct object_id {int dummy; } ;
struct object_context {int path; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*,int ,struct object_id*,struct object_context*) ;
 int FUNC_5 (int,struct object_id const*,int *,int ) ;
 int FUNC_6 (int ,int ,int ,struct object_id*,int,char**,unsigned long*) ;
 int VAR_1 ;
 int FUNC_7 (int,char*,unsigned long) ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_2, struct rev_info *VAR_3, const char *VAR_4)
{
 struct object_id VAR_5;
 struct object_context VAR_6;
 char *VAR_7;
 unsigned long VAR_8;

 FUNC_2(VAR_3->diffopt.file);
 if (!VAR_3->diffopt.flags.textconv_set_via_cmdline ||
     !VAR_3->diffopt.flags.allow_textconv)
  return FUNC_5(1, VAR_2, ((void*)0), 0);

 if (FUNC_4(VAR_1, VAR_4,
     VAR_0,
     &VAR_5, &VAR_6))
  FUNC_1(FUNC_0("not a valid object name %s"), VAR_4);
 if (!VAR_6.path ||
     !FUNC_6(VAR_1, VAR_6.path,
        VAR_6.mode, &VAR_5, 1, &VAR_7, &VAR_8)) {
  FUNC_3(VAR_6.path);
  return FUNC_5(1, VAR_2, ((void*)0), 0);
 }

 if (!VAR_7)
  FUNC_1(FUNC_0("git show %s: bad file"), VAR_4);

 FUNC_7(1, VAR_7, VAR_8);
 FUNC_3(VAR_6.path);
 return 0;
}
