
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; } ;
typedef int dm_thin_id ;


 int FUNC_0 (char*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_1, char **VAR_2, struct pool *VAR_3)
{
 dm_thin_id VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, 3);
 if (VAR_6)
  return VAR_6;

 if (FUNC_3(VAR_2[1], 10, (unsigned long long *)&VAR_4)) {
  FUNC_0("set_transaction_id message: Unrecognised id %s.", VAR_2[1]);
  return -VAR_0;
 }

 if (FUNC_3(VAR_2[2], 10, (unsigned long long *)&VAR_5)) {
  FUNC_0("set_transaction_id message: Unrecognised new id %s.", VAR_2[2]);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_3->pmd, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to change transaction id from %s to %s.",
         VAR_2[1], VAR_2[2]);
  return VAR_6;
 }

 return 0;
}
