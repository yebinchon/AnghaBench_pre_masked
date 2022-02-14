
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {int vc_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*,int ,int) ;

__attribute__((used)) static inline void FUNC_5(struct dsi_data *VAR_0, int VAR_1,
         u8 VAR_2, u16 VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 FUNC_2(!FUNC_3(VAR_0));

 VAR_6 = VAR_2 | VAR_0->vc[VAR_1].vc_id << 6;

 VAR_5 = FUNC_1(VAR_6, 7, 0) | FUNC_1(VAR_3, 23, 8) |
  FUNC_1(VAR_4, 31, 24);

 FUNC_4(VAR_0, FUNC_0(VAR_1), VAR_5);
}
