
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {size_t pos; } ;


 int * FUNC_0 (int*,struct opal_dev*,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static void FUNC_2(int *VAR_0, struct opal_dev *VAR_1,
     const u8 *VAR_2, size_t VAR_3)
{
 u8 *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
 if (!VAR_4)
  return;
 FUNC_1(VAR_4, VAR_2, VAR_3);
 VAR_1->pos += VAR_3;
}
