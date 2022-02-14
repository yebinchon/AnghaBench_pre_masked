
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxe_bth {int opcode; } ;



__attribute__((used)) static inline u8 FUNC_0(void *VAR_0)
{
 struct rxe_bth *VAR_1 = VAR_0;

 return VAR_1->opcode;
}
