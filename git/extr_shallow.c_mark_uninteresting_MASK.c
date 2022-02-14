
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 struct commit* FUNC_0 (int ,struct object_id const*,int) ;
 int FUNC_1 (struct commit*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const struct object_id *VAR_3,
         int VAR_4, void *VAR_5)
{
 struct commit *VAR_6 = FUNC_0(VAR_1,
              VAR_3, 1);
 if (!VAR_6)
  return 0;
 VAR_6->object.flags |= VAR_0;
 FUNC_1(VAR_6);
 return 0;
}
