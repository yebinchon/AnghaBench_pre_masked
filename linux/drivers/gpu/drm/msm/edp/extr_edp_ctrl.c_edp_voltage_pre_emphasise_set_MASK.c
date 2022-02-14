
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_ctrl {scalar_t__ p_level; scalar_t__ v_level; int phy; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct edp_ctrl*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 int** VAR_1 ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_3(struct edp_ctrl *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 FUNC_0("v=%d p=%d", VAR_3->v_level, VAR_3->p_level);

 VAR_4 = VAR_1[(int)(VAR_3->v_level)][(int)(VAR_3->p_level)];
 VAR_5 = VAR_2[(int)(VAR_3->v_level)][(int)(VAR_3->p_level)];


 if (VAR_4 != 0xFF && VAR_5 != 0xFF) {
  FUNC_2(VAR_3->phy, VAR_4, VAR_5);
  return FUNC_1(VAR_3, VAR_3->v_level, VAR_3->p_level);
 }

 return -VAR_0;
}
