
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct etmv4_config {int vissctlr; int vinst_ctrl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct etmv4_config*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct etmv4_config *VAR_1)
{
 u64 VAR_2, VAR_3;





 VAR_2 = 0x0;
 VAR_3 = ~0x0;

 FUNC_1(VAR_1, VAR_2, VAR_3,
       VAR_0);





 VAR_1->vinst_ctrl |= FUNC_0(9);


 VAR_1->vissctlr = 0x0;
}
