
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct opal_dev {int dummy; } ;


 size_t FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct opal_dev*,int,int,size_t) ;
 int FUNC_2 (int*,struct opal_dev*,size_t) ;
 int FUNC_3 (int*,struct opal_dev*,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(int *VAR_1, struct opal_dev *VAR_2, u64 VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 if (!(VAR_3 & ~VAR_0)) {
  FUNC_2(VAR_1, VAR_2, VAR_3);
  return;
 }

 VAR_5 = FUNC_4(VAR_3);
 VAR_4 = FUNC_0(VAR_5, 8);

 if (!FUNC_3(VAR_1, VAR_2, VAR_4 + 1)) {
  FUNC_5("Error adding u64: end of buffer.\n");
  return;
 }
 FUNC_1(VAR_2, 0, 0, VAR_4);
 while (VAR_4--)
  FUNC_2(VAR_1, VAR_2, VAR_3 >> (VAR_4 * 8));
}
