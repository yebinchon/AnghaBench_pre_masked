
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct repository {int dummy; } ;
struct commit_list {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {scalar_t__ generation; TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct commit*,int ) ;
 int FUNC_1 (int,struct commit**,int ) ;
 int FUNC_2 (struct commit_list*) ;
 struct commit_list* FUNC_3 (struct repository*,struct commit*,int,struct commit**,scalar_t__) ;
 scalar_t__ FUNC_4 (struct repository*,struct commit*) ;

int FUNC_5(struct repository *VAR_3, struct commit *VAR_4,
        int VAR_5, struct commit **VAR_6)
{
 struct commit_list *VAR_7;
 int VAR_8 = 0, VAR_9;
 uint32_t VAR_10 = VAR_0;

 if (FUNC_4(VAR_3, VAR_4))
  return VAR_8;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (FUNC_4(VAR_3, VAR_6[VAR_9]))
   return VAR_8;
  if (VAR_6[VAR_9]->generation < VAR_10)
   VAR_10 = VAR_6[VAR_9]->generation;
 }

 if (VAR_4->generation > VAR_10)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_4,
         VAR_5, VAR_6,
         VAR_4->generation);
 if (VAR_4->object.flags & VAR_1)
  VAR_8 = 1;
 FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_5, VAR_6, VAR_2);
 FUNC_2(VAR_7);
 return VAR_8;
}
