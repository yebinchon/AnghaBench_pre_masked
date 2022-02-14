
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_1, u8 *VAR_2)
{
 if (FUNC_0(VAR_1->tfm) == VAR_0)
  return FUNC_1(FUNC_3(VAR_1), VAR_2);
 else
  return FUNC_2(FUNC_3(VAR_1), VAR_2);
}
