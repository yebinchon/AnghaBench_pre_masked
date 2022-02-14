
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amdgpu_encoder_atom_dig {scalar_t__ panel_mode; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_atombios_dp_link_train_info {int* dpcd; int dp_lane_count; int aux; int encoder; int dp_clock; int connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 struct amdgpu_encoder* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct amdgpu_atombios_dp_link_train_info *VAR_11)
{
 struct amdgpu_encoder *VAR_12 = FUNC_5(VAR_11->encoder);
 struct amdgpu_encoder_atom_dig *VAR_13 = VAR_12->enc_priv;
 u8 VAR_14;


 FUNC_0(VAR_11->connector, VAR_7);


 if (VAR_11->dpcd[3] & 0x1)
  FUNC_2(VAR_11->aux,
       VAR_1, VAR_8);
 else
  FUNC_2(VAR_11->aux,
       VAR_1, 0);

 if (VAR_13->panel_mode == VAR_6)
  FUNC_2(VAR_11->aux, VAR_2, 1);


 VAR_14 = VAR_11->dp_lane_count;
 if (FUNC_3(VAR_11->dpcd))
  VAR_14 |= VAR_3;
 FUNC_2(VAR_11->aux, VAR_4, VAR_14);


 VAR_14 = FUNC_4(VAR_11->dp_clock);
 FUNC_2(VAR_11->aux, VAR_5, VAR_14);


 FUNC_1(VAR_11->encoder,
        VAR_0, 0);


 FUNC_2(VAR_11->aux,
      VAR_10,
      VAR_9);

 return 0;
}
