
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct linear_conf* private; int raid_disks; } ;
struct linear_conf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct linear_conf*) ;
 struct linear_conf* FUNC_1 (struct mddev*,int ) ;
 int FUNC_2 (struct mddev*,int ,int ) ;
 scalar_t__ FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*,int ) ;

__attribute__((used)) static int FUNC_6 (struct mddev *VAR_1)
{
 struct linear_conf *VAR_2;
 int VAR_3;

 if (FUNC_3(VAR_1))
  return -VAR_0;
 VAR_2 = FUNC_1(VAR_1, VAR_1->raid_disks);

 if (!VAR_2)
  return 1;
 VAR_1->private = VAR_2;
 FUNC_5(VAR_1, FUNC_2(VAR_1, 0, 0));

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2);
  VAR_1->private = ((void*)0);
 }
 return VAR_3;
}
