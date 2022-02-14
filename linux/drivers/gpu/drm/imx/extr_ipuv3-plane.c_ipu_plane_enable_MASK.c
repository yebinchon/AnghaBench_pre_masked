
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_plane {scalar_t__ dp; int alpha_ch; int ipu_ch; int dmfc; int ipu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ipu_plane*) ;

__attribute__((used)) static void FUNC_5(struct ipu_plane *VAR_0)
{
 if (VAR_0->dp)
  FUNC_1(VAR_0->ipu);
 FUNC_0(VAR_0->dmfc);
 FUNC_3(VAR_0->ipu_ch);
 if (FUNC_4(VAR_0))
  FUNC_3(VAR_0->alpha_ch);
 if (VAR_0->dp)
  FUNC_2(VAR_0->dp);
}
