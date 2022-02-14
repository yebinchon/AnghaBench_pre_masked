
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct powerdomain {int prcm_offs; int prcm_partition; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct powerdomain *VAR_1, u8 VAR_2,
        u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 FUNC_2(VAR_4, (VAR_3 << FUNC_0(VAR_4)),
     VAR_1->prcm_partition, VAR_1->prcm_offs,
     VAR_0);

 return 0;
}
