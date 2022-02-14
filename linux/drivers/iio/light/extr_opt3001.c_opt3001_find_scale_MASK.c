
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opt3001_scale {int val; int val2; } ;
struct opt3001 {int dummy; } ;


 int FUNC_0 (struct opt3001_scale*) ;
 int VAR_0 ;
 struct opt3001_scale* VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct opt3001 *VAR_2, int VAR_3,
  int VAR_4, u8 *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  const struct opt3001_scale *VAR_7 = &VAR_1[VAR_6];






  if ((VAR_3 * 1000 + VAR_4 / 1000) <=
    (VAR_7->val * 1000 + VAR_7->val2 / 1000)) {
   *VAR_5 = VAR_6;
   return 0;
  }
 }

 return -VAR_0;
}
