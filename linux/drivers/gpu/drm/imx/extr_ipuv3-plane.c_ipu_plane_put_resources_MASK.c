
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_plane {int alpha_ch; int ipu_ch; int dmfc; int dp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ipu_plane *VAR_0)
{
 if (!FUNC_0(VAR_0->dp))
  FUNC_2(VAR_0->dp);
 if (!FUNC_0(VAR_0->dmfc))
  FUNC_1(VAR_0->dmfc);
 if (!FUNC_0(VAR_0->ipu_ch))
  FUNC_3(VAR_0->ipu_ch);
 if (!FUNC_0(VAR_0->alpha_ch))
  FUNC_3(VAR_0->alpha_ch);
}
