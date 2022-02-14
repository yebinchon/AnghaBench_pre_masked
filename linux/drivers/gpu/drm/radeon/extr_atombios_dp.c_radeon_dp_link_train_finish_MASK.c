
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_dp_link_train_info {int enc_id; int dp_clock; int rdev; int encoder; int use_dpencoder; int aux; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct radeon_dp_link_train_info *VAR_4)
{
 FUNC_4(400);


 FUNC_2(VAR_4->aux,
      VAR_3,
      VAR_2);


 if (FUNC_0(VAR_4->rdev) || !VAR_4->use_dpencoder)
  FUNC_1(VAR_4->encoder,
        VAR_1, 0);
 else
  FUNC_3(VAR_4->rdev, VAR_0,
       VAR_4->dp_clock, VAR_4->enc_id, 0);

 return 0;
}
