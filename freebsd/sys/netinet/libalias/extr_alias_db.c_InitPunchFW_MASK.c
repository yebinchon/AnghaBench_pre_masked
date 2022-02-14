
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {scalar_t__ fireWallFD; int fireWallBaseNum; int fireWallActiveNum; int fireWallNumNums; scalar_t__ fireWallField; } ;


 int VAR_0 ;
 int FUNC_0 (struct libalias*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct libalias *VAR_3)
{

 VAR_3->fireWallField = FUNC_1(VAR_3->fireWallNumNums);
 if (VAR_3->fireWallField) {
  FUNC_2(VAR_3->fireWallField, 0, VAR_3->fireWallNumNums);
  if (VAR_3->fireWallFD < 0) {
   VAR_3->fireWallFD = FUNC_3(VAR_0, VAR_2, VAR_1);
  }
  FUNC_0(VAR_3);
  VAR_3->fireWallActiveNum = VAR_3->fireWallBaseNum;
 }
}
