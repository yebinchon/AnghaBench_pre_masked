
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct powerdomain {int prcm_offs; int prcm_partition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct powerdomain *VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_3 << FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_4,
     VAR_2->prcm_partition, VAR_2->prcm_offs,
     VAR_1);

 return 0;
}
