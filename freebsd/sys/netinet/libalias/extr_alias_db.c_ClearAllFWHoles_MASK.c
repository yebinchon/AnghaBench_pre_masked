
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {scalar_t__ fireWallFD; int fireWallBaseNum; int fireWallNumNums; struct ip_fw* fireWallField; } ;
struct ip_fw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw*,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct libalias *VAR_2)
{
 struct ip_fw VAR_3;
 int VAR_4;

 if (VAR_2->fireWallFD < 0)
  return;

 FUNC_0(&VAR_3, 0, sizeof VAR_3);
 for (VAR_4 = VAR_2->fireWallBaseNum; VAR_4 < VAR_2->fireWallBaseNum + VAR_2->fireWallNumNums; VAR_4++) {
  int VAR_5 = VAR_4;

  while (!FUNC_1(VAR_2->fireWallFD, VAR_0, VAR_1, &VAR_5, sizeof VAR_5));
 }

 FUNC_0(VAR_2->fireWallField, 0, VAR_2->fireWallNumNums);
}
