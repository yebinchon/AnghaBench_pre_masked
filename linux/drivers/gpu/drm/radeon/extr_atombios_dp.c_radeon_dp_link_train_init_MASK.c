
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_encoder_atom_dig {scalar_t__ panel_mode; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_dp_link_train_info {int* dpcd; int dp_lane_count; int aux; int enc_id; int dp_clock; int rdev; int encoder; int use_dpencoder; int connector; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct radeon_encoder* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct radeon_dp_link_train_info *VAR_12)
{
 struct radeon_encoder *VAR_13 = FUNC_7(VAR_12->encoder);
 struct radeon_encoder_atom_dig *VAR_14 = VAR_13->enc_priv;
 u8 VAR_15;


 FUNC_6(VAR_12->connector, VAR_8);


 if (VAR_12->dpcd[3] & 0x1)
  FUNC_2(VAR_12->aux,
       VAR_2, VAR_9);
 else
  FUNC_2(VAR_12->aux,
       VAR_2, 0);

 if (VAR_14->panel_mode == VAR_7)
  FUNC_2(VAR_12->aux, VAR_3, 1);


 VAR_15 = VAR_12->dp_lane_count;
 if (FUNC_3(VAR_12->dpcd))
  VAR_15 |= VAR_4;
 FUNC_2(VAR_12->aux, VAR_5, VAR_15);


 VAR_15 = FUNC_4(VAR_12->dp_clock);
 FUNC_2(VAR_12->aux, VAR_6, VAR_15);


 if (FUNC_0(VAR_12->rdev) || !VAR_12->use_dpencoder)
  FUNC_1(VAR_12->encoder,
        VAR_1, 0);
 else
  FUNC_5(VAR_12->rdev, VAR_0,
       VAR_12->dp_clock, VAR_12->enc_id, 0);


 FUNC_2(VAR_12->aux,
      VAR_11,
      VAR_10);

 return 0;
}
