
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_du_group {int channels_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rcar_du_group*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rcar_du_group *VAR_4)
{
 u32 VAR_5 = VAR_1;

 if (VAR_4->channels_mask & FUNC_0(0))
  VAR_5 |= VAR_2;

 if (VAR_4->channels_mask & FUNC_0(1))
  VAR_5 |= VAR_3;

 FUNC_1(VAR_4, VAR_0, VAR_5);
}
