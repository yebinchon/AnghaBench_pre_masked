
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_hdmi_acr {int n_48khz; int cts_48khz; int n_44_1khz; int cts_44_1khz; int n_32khz; int cts_32khz; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int ,int ) ;

void FUNC_8(struct drm_encoder *VAR_15, long VAR_16,
 const struct radeon_hdmi_acr *VAR_17)
{
 struct drm_device *VAR_18 = VAR_15->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;

 FUNC_6(VAR_0 + VAR_16,
  VAR_14 |
  VAR_7);

 FUNC_7(VAR_1 + VAR_16,
  FUNC_0(VAR_17->cts_32khz),
  ~VAR_8);
 FUNC_7(VAR_2 + VAR_16,
  FUNC_3(VAR_17->n_32khz),
  ~VAR_11);

 FUNC_7(VAR_3 + VAR_16,
  FUNC_1(VAR_17->cts_44_1khz),
  ~VAR_9);
 FUNC_7(VAR_4 + VAR_16,
  FUNC_4(VAR_17->n_44_1khz),
  ~VAR_12);

 FUNC_7(VAR_5 + VAR_16,
  FUNC_2(VAR_17->cts_48khz),
  ~VAR_10);
 FUNC_7(VAR_6 + VAR_16,
  FUNC_5(VAR_17->n_48khz),
  ~VAR_13);
}
