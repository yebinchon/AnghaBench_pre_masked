
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct shash_desc {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_1, const u8 *VAR_2,
       unsigned int VAR_3)
{
 u16 *VAR_4 = FUNC_5(VAR_1);

 if (VAR_3 >= VAR_0 && FUNC_2()) {
  FUNC_3();
  *VAR_4 = FUNC_1(*VAR_4, VAR_2, VAR_3);
  FUNC_4();
 } else {
  *VAR_4 = FUNC_0(*VAR_4, VAR_2, VAR_3);
 }

 return 0;
}
