
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int* VAR_1 ;

__attribute__((used)) static inline u64 FUNC_1(u64 VAR_2, int VAR_3)
{
 if (VAR_3 > VAR_0) {
  FUNC_0("Invalid domain %d, failed to scale data\n", VAR_3);
  return VAR_2;
 }






 return VAR_2 << (32 - VAR_1[VAR_3 - 1]);
}
