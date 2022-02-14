
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_msg {int reply; int size; } ;
struct drm_dp_aux {int (* transfer ) (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;int i2c_defer_count; int i2c_nack_count; } ;


 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;

 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct drm_dp_aux_msg*) ;
 int FUNC_4 (struct drm_dp_aux_msg*,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_dp_aux *VAR_7, struct drm_dp_aux_msg *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;







 int VAR_12 = FUNC_5(7, FUNC_4(VAR_8, VAR_6));

 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < (VAR_12 + VAR_10); VAR_9++) {
  VAR_11 = VAR_7->transfer(VAR_7, VAR_8);
  if (VAR_11 < 0) {
   if (VAR_11 == -VAR_3)
    continue;







   if (VAR_11 == -VAR_5)
    FUNC_1("transaction timed out\n");
   else
    FUNC_0("transaction failed: %d\n", VAR_11);

   return VAR_11;
  }


  switch (VAR_8->reply & VAR_2) {
  case 130:




   break;

  case 128:
   FUNC_0("native nack (result=%d, size=%zu)\n", VAR_11, VAR_8->size);
   return -VAR_4;

  case 129:
   FUNC_0("native defer\n");
   FUNC_7(VAR_0, VAR_0 + 100);
   continue;

  default:
   FUNC_2("invalid native reply %#04x\n", VAR_8->reply);
   return -VAR_4;
  }

  switch (VAR_8->reply & VAR_1) {
  case 133:




   if (VAR_11 != VAR_8->size)
    FUNC_3(VAR_8);
   return VAR_11;

  case 131:
   FUNC_0("I2C nack (result=%d, size=%zu)\n",
          VAR_11, VAR_8->size);
   VAR_7->i2c_nack_count++;
   return -VAR_4;

  case 132:
   FUNC_0("I2C defer\n");




   VAR_7->i2c_defer_count++;
   if (VAR_10 < 7)
    VAR_10++;
   FUNC_7(VAR_0, VAR_0 + 100);
   FUNC_3(VAR_8);

   continue;

  default:
   FUNC_2("invalid I2C reply %#04x\n", VAR_8->reply);
   return -VAR_4;
  }
 }

 FUNC_0("too many retries, giving up\n");
 return -VAR_4;
}
