
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_dpcd_ident {int hw_rev; int sw_minor_rev; int sw_major_rev; int device_id; int oui; } ;
struct drm_dp_desc {int quirks; struct drm_dp_dpcd_ident ident; } ;
struct drm_dp_aux {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,char*,int,int ,int,int ,int,int,int ,int ,int ) ;
 int FUNC_1 (struct drm_dp_aux*,unsigned int,struct drm_dp_dpcd_ident*,int) ;
 int FUNC_2 (struct drm_dp_dpcd_ident*,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct drm_dp_aux *VAR_2, struct drm_dp_desc *VAR_3,
       bool VAR_4)
{
 struct drm_dp_dpcd_ident *VAR_5 = &VAR_3->ident;
 unsigned int VAR_6 = VAR_4 ? VAR_0 : VAR_1;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_5, sizeof(*VAR_5));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_3->quirks = FUNC_2(VAR_5, VAR_4);

 VAR_8 = FUNC_3(VAR_5->device_id, sizeof(VAR_5->device_id));

 FUNC_0("DP %s: OUI %*phD dev-ID %*pE HW-rev %d.%d SW-rev %d.%d quirks 0x%04x\n",
        VAR_4 ? "branch" : "sink",
        (int)sizeof(VAR_5->oui), VAR_5->oui,
        VAR_8, VAR_5->device_id,
        VAR_5->hw_rev >> 4, VAR_5->hw_rev & 0xf,
        VAR_5->sw_major_rev, VAR_5->sw_minor_rev,
        VAR_3->quirks);

 return 0;
}
