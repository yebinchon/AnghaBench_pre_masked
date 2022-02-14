
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_neverlock_status { ____Placeholder_lgdt3306a_neverlock_status } lgdt3306a_neverlock_status ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int,int*) ;

__attribute__((used)) static enum lgdt3306a_neverlock_status
FUNC_2(struct lgdt3306a_state *VAR_0)
{
 u8 VAR_1 = 0;
 int VAR_2;
 enum lgdt3306a_neverlock_status VAR_3;

 VAR_2 = FUNC_1(VAR_0, 0x0080, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_3 = (enum lgdt3306a_neverlock_status)(VAR_1 & 0x03);

 FUNC_0("NeverLock=%d", VAR_3);

 return VAR_3;
}
