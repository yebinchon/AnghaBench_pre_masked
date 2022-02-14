
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sb_flags; int pending_writes; int sb_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct mddev *VAR_2)
{

 FUNC_2(VAR_2->sb_wait, FUNC_0(&VAR_2->pending_writes)==0);
 if (FUNC_1(VAR_1, &VAR_2->sb_flags))
  return -VAR_0;
 return 0;
}
