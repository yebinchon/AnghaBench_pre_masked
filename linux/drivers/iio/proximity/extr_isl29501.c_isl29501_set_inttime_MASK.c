
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_1 (struct isl29501_private*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6][0] == VAR_4 &&
      VAR_2[VAR_6][1] == VAR_5) {
   return FUNC_1(VAR_3,
             VAR_1,
             VAR_6);
  }
 }

 return -VAR_0;
}
