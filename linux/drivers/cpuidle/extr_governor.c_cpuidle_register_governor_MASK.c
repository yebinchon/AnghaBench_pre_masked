
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_governor {scalar_t__ rating; int name; int governor_list; int select; } ;
struct TYPE_2__ {scalar_t__ rating; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cpuidle_governor*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

int FUNC_7(struct cpuidle_governor *VAR_8)
{
 int VAR_9 = -VAR_1;

 if (!VAR_8 || !VAR_8->select)
  return -VAR_2;

 if (FUNC_0())
  return -VAR_3;

 FUNC_4(&VAR_6);
 if (FUNC_1(VAR_8->name) == ((void*)0)) {
  VAR_9 = 0;
  FUNC_3(&VAR_8->governor_list, &VAR_5);
  if (!VAR_4 ||
      !FUNC_6(VAR_7, VAR_8->name, VAR_0) ||
      (VAR_4->rating < VAR_8->rating &&
       FUNC_6(VAR_7, VAR_4->name,
     VAR_0)))
   FUNC_2(VAR_8);
 }
 FUNC_5(&VAR_6);

 return VAR_9;
}
