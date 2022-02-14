
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct plt_entry {scalar_t__ add; scalar_t__ br; scalar_t__ adrp; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

bool FUNC_3(const struct plt_entry *VAR_1, const struct plt_entry *VAR_2)
{
 u64 VAR_3, VAR_4;







 if (VAR_1->add != VAR_2->add || VAR_1->br != VAR_2->br)
  return 0;

 VAR_3 = FUNC_0((u64)VAR_1, VAR_0);
 VAR_4 = FUNC_0((u64)VAR_2, VAR_0);





 if (VAR_1->adrp == VAR_2->adrp && VAR_3 == VAR_4)
  return 1;

 return (VAR_3 + FUNC_1(FUNC_2(VAR_1->adrp))) ==
        (VAR_4 + FUNC_1(FUNC_2(VAR_2->adrp)));
}
