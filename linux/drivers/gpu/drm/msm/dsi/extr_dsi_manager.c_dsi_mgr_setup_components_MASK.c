
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct msm_dsi {int host; int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct msm_dsi_pll*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct msm_dsi_pll*) ;
 struct msm_dsi* FUNC_4 (int) ;
 struct msm_dsi* FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,struct msm_dsi_pll*) ;
 struct msm_dsi_pll* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(int VAR_5)
{
 struct msm_dsi *VAR_6 = FUNC_4(VAR_5);
 struct msm_dsi *VAR_7 = FUNC_5(VAR_5);
 struct msm_dsi *VAR_8 = FUNC_4(VAR_0);
 struct msm_dsi *VAR_9 = FUNC_4(VAR_1);
 struct msm_dsi_pll *VAR_10;
 int VAR_11;

 if (!FUNC_0()) {
  VAR_11 = FUNC_6(VAR_6->host, 1);
  if (VAR_11)
   return VAR_11;

  FUNC_9(VAR_6->phy, VAR_4);
  VAR_10 = FUNC_8(VAR_6->phy);
  if (FUNC_1(VAR_10))
   return FUNC_3(VAR_10);
  VAR_11 = FUNC_7(VAR_6->host, VAR_10);
 } else if (!VAR_7) {
  VAR_11 = 0;
 } else {
  struct msm_dsi *VAR_12 = FUNC_2(VAR_5) ?
       VAR_6 : VAR_7;
  struct msm_dsi *VAR_13 = FUNC_2(VAR_5) ?
       VAR_7 : VAR_6;







  VAR_11 = FUNC_6(VAR_13->host, 0);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_6(VAR_12->host, 1);
  if (VAR_11)
   return VAR_11;


  FUNC_9(VAR_8->phy,
     VAR_2);
  FUNC_9(VAR_9->phy,
     VAR_3);
  VAR_10 = FUNC_8(VAR_8->phy);
  if (FUNC_1(VAR_10))
   return FUNC_3(VAR_10);
  VAR_11 = FUNC_7(VAR_6->host, VAR_10);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_7(VAR_7->host, VAR_10);
 }

 return VAR_11;
}
