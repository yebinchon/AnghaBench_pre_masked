
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm4000_dev {int flags1; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2, struct cm4000_dev *VAR_3)
{


 if (FUNC_3(FUNC_0(VAR_2)) & 8) {
  FUNC_2(VAR_0, &VAR_3->flags);
  FUNC_4(VAR_1, &VAR_3->flags);
  return 0;
 }

 FUNC_5(VAR_3->flags1 | 0x40, FUNC_1(VAR_2));
 if ((FUNC_3(FUNC_0(VAR_2)) & 8) == 0) {
  FUNC_2(VAR_0, &VAR_3->flags);
  FUNC_4(VAR_1, &VAR_3->flags);
  return 0;
 }

 FUNC_5(VAR_3->flags1, FUNC_1(VAR_2));
 return 1;
}
