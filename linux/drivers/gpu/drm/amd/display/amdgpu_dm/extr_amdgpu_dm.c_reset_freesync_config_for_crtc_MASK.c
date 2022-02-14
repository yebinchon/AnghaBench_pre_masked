
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_crtc_state {int vrr_supported; int vrr_infopacket; int vrr_params; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(
 struct dm_crtc_state *VAR_0)
{
 VAR_0->vrr_supported = 0;

 FUNC_0(&VAR_0->vrr_params, 0,
        sizeof(VAR_0->vrr_params));
 FUNC_0(&VAR_0->vrr_infopacket, 0,
        sizeof(VAR_0->vrr_infopacket));
}
