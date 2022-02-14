
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int ver; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct v3d_dev *VAR_4)
{
 if (VAR_4->ver >= 41)
  return;

 FUNC_2(VAR_0, VAR_3);

 if (FUNC_3((FUNC_1(VAR_1) &
        VAR_2) ==
       VAR_2, 100)) {
  FUNC_0("Failed to wait for safe GCA shutdown\n");
 }
}
