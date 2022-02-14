
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct decode_info {int op_len; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 struct decode_info*** VAR_1 ;

__attribute__((used)) static inline u32 FUNC_1(u32 VAR_2, int VAR_3)
{
 const struct decode_info *VAR_4;

 VAR_4 = VAR_1[VAR_3][FUNC_0(VAR_2)];
 if (VAR_4 == ((void*)0))
  return VAR_0;

 return VAR_2 >> (32 - VAR_4->op_len);
}
