
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct rev_info*,TYPE_1__*,char const*) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 struct commit* FUNC_2 (int ,struct object_id*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, struct rev_info *VAR_2, int VAR_3)
{
 struct object_id VAR_4;
 if (FUNC_1(VAR_1, &VAR_4) == 0) {
  struct commit *VAR_5 = FUNC_2(VAR_0,
        &VAR_4);
  if (VAR_5) {
   VAR_5->object.flags |= VAR_3;
   FUNC_0(VAR_2, &VAR_5->object, VAR_1);
   return 0;
  }
 }
 return -1;
}
