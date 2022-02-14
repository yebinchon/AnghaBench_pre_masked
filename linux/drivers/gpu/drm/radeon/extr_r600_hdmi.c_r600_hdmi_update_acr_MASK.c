
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct radeon_hdmi_acr {int n_48khz; int cts_48khz; int n_44_1khz; int cts_44_1khz; int n_32khz; int cts_32khz; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (scalar_t__,int,int) ;

void FUNC_8(struct drm_encoder *VAR_16, long VAR_17,
 const struct radeon_hdmi_acr *VAR_18)
{
 struct drm_device *VAR_19 = VAR_16->dev;
 struct radeon_device *VAR_20 = VAR_19->dev_private;


 uint32_t VAR_21 = FUNC_0(VAR_20) ? VAR_0 :
           VAR_14;
 FUNC_7(VAR_21 + VAR_17,
  VAR_15 |
  VAR_7,
  ~(VAR_15 |
  VAR_7));

 FUNC_7(VAR_1 + VAR_17,
  FUNC_1(VAR_18->cts_32khz),
  ~VAR_8);
 FUNC_7(VAR_2 + VAR_17,
  FUNC_4(VAR_18->n_32khz),
  ~VAR_11);

 FUNC_7(VAR_3 + VAR_17,
  FUNC_2(VAR_18->cts_44_1khz),
  ~VAR_9);
 FUNC_7(VAR_4 + VAR_17,
  FUNC_5(VAR_18->n_44_1khz),
  ~VAR_12);

 FUNC_7(VAR_5 + VAR_17,
  FUNC_3(VAR_18->cts_48khz),
  ~VAR_10);
 FUNC_7(VAR_6 + VAR_17,
  FUNC_6(VAR_18->n_48khz),
  ~VAR_13);
}
