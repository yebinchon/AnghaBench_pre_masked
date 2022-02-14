
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc_clock; } ;
struct TYPE_4__ {TYPE_1__ adjusted_mode; } ;
struct intel_crtc_state {int port_clock; int pipe_bpp; scalar_t__ output_format; int pixel_multiplier; TYPE_2__ base; scalar_t__ has_hdmi_sink; int dp_m_n; int fdi_m_n; scalar_t__ has_pch_encoder; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct intel_crtc_state *VAR_1)
{
 int VAR_2;

 if (VAR_1->has_pch_encoder)
  VAR_2 = FUNC_1(VAR_1->port_clock,
          &VAR_1->fdi_m_n);
 else if (FUNC_0(VAR_1))
  VAR_2 = FUNC_1(VAR_1->port_clock,
          &VAR_1->dp_m_n);
 else if (VAR_1->has_hdmi_sink && VAR_1->pipe_bpp > 24)
  VAR_2 = VAR_1->port_clock * 24 / VAR_1->pipe_bpp;
 else
  VAR_2 = VAR_1->port_clock;

 if (VAR_1->output_format == VAR_0 &&
     !FUNC_0(VAR_1))
  VAR_2 *= 2;

 if (VAR_1->pixel_multiplier)
  VAR_2 /= VAR_1->pixel_multiplier;

 VAR_1->base.adjusted_mode.crtc_clock = VAR_2;
}
