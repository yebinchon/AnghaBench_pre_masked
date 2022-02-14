
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ec_params_mkbp_info {int event_type; int info_type; } ;
struct cros_ec_device {int dev; } ;
struct cros_ec_command {int version; int outsize; int insize; scalar_t__ data; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct cros_ec_device *VAR_7, bool VAR_8,
      bool *VAR_9)
{
 struct ec_params_mkbp_info *VAR_10;
 struct cros_ec_command *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(sizeof(*VAR_11) + FUNC_5(sizeof(u32), sizeof(*VAR_10)),
        VAR_6);
 if (!VAR_11)
  return -VAR_4;

 VAR_11->command = VAR_0;
 VAR_11->version = 1;
 VAR_11->outsize = sizeof(*VAR_10);
 VAR_11->insize = sizeof(u32);
 VAR_10 = (struct ec_params_mkbp_info *)VAR_11->data;
 VAR_10->info_type = VAR_8 ?
  VAR_2 : VAR_3;
 VAR_10->event_type = VAR_1;

 VAR_12 = FUNC_1(VAR_7, VAR_11);
 if (VAR_12 >= 0) {
  if (VAR_12 != sizeof(u32)) {
   FUNC_2(VAR_7->dev, "wrong result size: %d != %zu\n",
     VAR_12, sizeof(u32));
   VAR_12 = -VAR_5;
  } else {
   *VAR_9 = FUNC_0(VAR_11->data);
   VAR_12 = 0;
  }
 }

 FUNC_3(VAR_11);

 return VAR_12;
}
