
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct op_counter_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct op_counter_config *VAR_4)
{
 u64 VAR_5 = VAR_2;
 u64 VAR_6 = VAR_3;


 VAR_5 &= ~(0x3FUL);
 FUNC_1(VAR_0, VAR_5);


 FUNC_1(VAR_1, VAR_6);

 FUNC_2("setup on cpu %d, mmcr0 %016lx\n", FUNC_3(),
  FUNC_0(VAR_0));
 FUNC_2("setup on cpu %d, mmcr1 %016lx\n", FUNC_3(),
  FUNC_0(VAR_1));

 return 0;
}
