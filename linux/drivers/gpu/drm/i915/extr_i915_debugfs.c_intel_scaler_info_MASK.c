
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct intel_scaler {int mode; int in_use; } ;
struct TYPE_3__ {struct intel_scaler* scalers; int scaler_id; int scaler_users; } ;
struct intel_crtc_state {TYPE_1__ scaler_state; } ;
struct TYPE_4__ {int state; } ;
struct intel_crtc {int num_scalers; TYPE_2__ base; } ;


 int FUNC_0 (struct seq_file*,char*,int,int ,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;
 struct intel_crtc_state* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0, struct intel_crtc *VAR_1)
{
 struct intel_crtc_state *VAR_2;
 int VAR_3 = VAR_1->num_scalers;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1->base.state);


 if (VAR_3) {
  FUNC_0(VAR_0, "\tnum_scalers=%d, scaler_users=%x scaler_id=%d",
      VAR_3,
      VAR_2->scaler_state.scaler_users,
      VAR_2->scaler_state.scaler_id);

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   struct intel_scaler *VAR_5 =
     &VAR_2->scaler_state.scalers[VAR_4];

   FUNC_0(VAR_0, ", scalers[%d]: use=%s, mode=%x",
       VAR_4, FUNC_3(VAR_5->in_use), VAR_5->mode);
  }
  FUNC_1(VAR_0, "\n");
 } else {
  FUNC_1(VAR_0, "\tNo scalers available on this platform\n");
 }
}
