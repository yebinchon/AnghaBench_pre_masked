
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef enum ps3_interrupt_type { ____Placeholder_ps3_interrupt_type } ps3_interrupt_type ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,void**,void**) ;

int FUNC_3(unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3,
 enum ps3_interrupt_type *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 u64 VAR_7 = 0;
 u64 VAR_8 = 0;

 VAR_6 = FUNC_2(VAR_0,
  FUNC_1("bus", VAR_1),
  FUNC_0("dev", VAR_2),
  FUNC_0("intr", VAR_3),
  0,
  &VAR_7, &VAR_8);
 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;
 return VAR_6;
}
