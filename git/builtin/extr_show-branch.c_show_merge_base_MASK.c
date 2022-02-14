
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {int dummy; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct commit* FUNC_1 (struct commit_list**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct commit_list *VAR_2, int VAR_3)
{
 int VAR_4 = ((1u << (VAR_0 + VAR_3)) - 1);
 int VAR_5 = VAR_4 & ~((1u << VAR_0) - 1);
 int VAR_6 = 1;

 while (VAR_2) {
  struct commit *VAR_7 = FUNC_1(&VAR_2);
  int VAR_8 = VAR_7->object.flags & VAR_4;
  if (!(VAR_8 & VAR_1) &&
      ((VAR_8 & VAR_5) == VAR_5)) {
   FUNC_2(FUNC_0(&VAR_7->object.oid));
   VAR_6 = 0;
   VAR_7->object.flags |= VAR_1;
  }
 }
 return VAR_6;
}
