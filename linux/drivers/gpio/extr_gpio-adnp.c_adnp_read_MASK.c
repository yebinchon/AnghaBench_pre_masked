
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int parent; } ;
struct adnp {TYPE_1__ gpio; int client; } ;


 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct adnp *VAR_0, unsigned VAR_1, uint8_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->client, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0->gpio.parent, "%s failed: %d\n",
   "i2c_smbus_read_byte_data()", VAR_3);
  return VAR_3;
 }

 *VAR_2 = VAR_3;
 return 0;
}
