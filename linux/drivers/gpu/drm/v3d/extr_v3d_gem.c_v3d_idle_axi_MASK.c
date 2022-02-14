
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct v3d_dev *VAR_6, int VAR_7)
{
 FUNC_2(VAR_7, VAR_0, VAR_1);

 if (FUNC_3((FUNC_1(VAR_7, VAR_2) &
        (VAR_4 |
         VAR_5 |
         VAR_3)) == 0, 100)) {
  FUNC_0("Failed to wait for safe GMP shutdown\n");
 }
}
