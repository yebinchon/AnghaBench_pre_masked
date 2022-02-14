
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u64 ;
typedef scalar_t__ int64_t ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int,int *) ;

__attribute__((used)) static int FUNC_4(uint32_t VAR_1, uint64_t VAR_2, u64 VAR_3, u64 *VAR_4)
{
 int64_t VAR_5;
 __be64 VAR_6;

 VAR_3 = FUNC_2(VAR_2 + VAR_3);
 VAR_5 = FUNC_3(VAR_1, VAR_3, (__be64 *)FUNC_0(&VAR_6));
 if (VAR_5) {
  *VAR_4 = 0xfffffffffffffffful;
  return -VAR_0;
 }
 *VAR_4 = FUNC_1(VAR_6);
 return 0;
}
