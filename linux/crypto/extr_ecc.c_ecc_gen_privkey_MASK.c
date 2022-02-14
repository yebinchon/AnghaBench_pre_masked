
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ecc_curve {int n; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ecc_curve const*,int *,unsigned int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,unsigned int) ;
 struct ecc_curve* FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 unsigned int FUNC_7 (int ,unsigned int) ;

int FUNC_8(unsigned int VAR_5, unsigned int VAR_6, u64 *VAR_7)
{
 const struct ecc_curve *VAR_8 = FUNC_5(VAR_5);
 u64 VAR_9[VAR_1];
 unsigned int VAR_10 = VAR_6 << VAR_0;
 unsigned int VAR_11 = FUNC_7(VAR_8->n, VAR_6);
 int VAR_12;


 if (VAR_11 < 160 || VAR_6 > FUNC_0(VAR_9))
  return -VAR_3;
 if (FUNC_2())
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_4, (u8 *)VAR_9, VAR_10);
 FUNC_3();
 if (VAR_12)
  return VAR_12;


 if (FUNC_1(VAR_8, VAR_9, VAR_6))
  return -VAR_3;

 FUNC_6(VAR_9, VAR_7, VAR_6);

 return 0;
}
