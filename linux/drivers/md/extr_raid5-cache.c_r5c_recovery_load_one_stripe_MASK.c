
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int disks; struct r5dev* dev; } ;
struct r5l_log {int dummy; } ;
struct r5dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct r5l_log *VAR_3,
      struct stripe_head *VAR_4)
{
 struct r5dev *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_4->disks; VAR_6--; ) {
  VAR_5 = VAR_4->dev + VAR_6;
  if (FUNC_1(VAR_2, &VAR_5->flags)) {
   FUNC_0(VAR_0, &VAR_5->flags);
   FUNC_0(VAR_1, &VAR_5->flags);
  }
 }
}
