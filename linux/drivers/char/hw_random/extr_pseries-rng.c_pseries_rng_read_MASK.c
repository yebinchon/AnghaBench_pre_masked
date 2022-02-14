
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hwrng {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int *,int) ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_4, void *VAR_5, size_t VAR_6, bool VAR_7)
{
 u64 VAR_8[VAR_3];
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, (unsigned long *)VAR_8);
 if (VAR_9 != VAR_2) {
  FUNC_2("H_RANDOM call failed %d\n", VAR_9);
  return -VAR_0;
 }
 FUNC_0(VAR_5, VAR_8, 8);


 return 8;
}
