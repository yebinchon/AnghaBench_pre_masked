
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int int_tv_support; int int_crt_support; int lvds_ssc_freq; int lvds_use_ssc; } ;
struct bdb_header {int dummy; } ;
struct bdb_general_features {int int_tv_support; int int_crt_support; scalar_t__ ssc_freq; int enable_ssc; } ;


 int VAR_0 ;
 struct bdb_general_features* FUNC_0 (struct bdb_header*,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_psb_private *VAR_1,
         struct bdb_header *VAR_2)
{
 struct bdb_general_features *VAR_3;


 VAR_1->int_tv_support = 1;
 VAR_1->int_crt_support = 1;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3) {
  VAR_1->int_tv_support = VAR_3->int_tv_support;
  VAR_1->int_crt_support = VAR_3->int_crt_support;
  VAR_1->lvds_use_ssc = VAR_3->enable_ssc;

  if (VAR_1->lvds_use_ssc) {
   VAR_1->lvds_ssc_freq
    = VAR_3->ssc_freq ? 100 : 96;
  }
 }
}
