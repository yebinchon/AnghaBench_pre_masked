
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ims_pcu {int dev; int cmd_done; scalar_t__ expected_response; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct ims_pcu*,scalar_t__,void const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ims_pcu *VAR_1,
         u8 VAR_2, const void *VAR_3, size_t VAR_4,
         u8 VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_1->expected_response = VAR_5;
 FUNC_2(&VAR_1->cmd_done);

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 &&
     !FUNC_4(&VAR_1->cmd_done,
      FUNC_3(VAR_6))) {
  FUNC_0(VAR_1->dev, "Command 0x%02x timed out\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
