
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct etnaviv_gpu {scalar_t__ sec_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct etnaviv_gpu*,int ,int) ;

void FUNC_3(struct etnaviv_gpu *VAR_6, u32 VAR_7, u16 VAR_8)
{
 FUNC_2(VAR_6, VAR_1, VAR_7);
 FUNC_2(VAR_6, VAR_2,
    VAR_3 |
    FUNC_0(VAR_8));

 if (VAR_6->sec_mode == VAR_0) {
  FUNC_2(VAR_6, VAR_4,
     VAR_5 |
     FUNC_1(VAR_8));
 }
}
