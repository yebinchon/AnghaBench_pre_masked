
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ecc_curve {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecc_curve const*,int const*,unsigned int) ;
 struct ecc_curve* FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_2, unsigned int VAR_3,
       const u64 *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 const struct ecc_curve *VAR_7 = FUNC_1(VAR_2);

 VAR_6 = VAR_3 << VAR_0;

 if (VAR_5 != VAR_6)
  return -VAR_1;

 return FUNC_0(VAR_7, VAR_4, VAR_3);
}
