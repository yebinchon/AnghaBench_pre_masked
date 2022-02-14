
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit*,int *) ;
 int VAR_1 ;
 struct commit* FUNC_1 (int ,struct object_id const*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, const struct object_id *VAR_4,
    int VAR_5, void *VAR_6)
{
 struct commit *VAR_7 = FUNC_1(VAR_2,
              VAR_4, 1);

 if (VAR_7) {
  VAR_7->object.flags |= VAR_0;
  FUNC_0(VAR_7, &VAR_1);
 }
 return 0;
}
