
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct firmware {int* data; int size; } ;
struct device {int dummy; } ;
struct cyapa {TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct device*,char*,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_4, const struct firmware *VAR_5)
{
 struct device *VAR_6 = &VAR_4->client->dev;
 u16 VAR_7;
 u16 VAR_8;


 if (VAR_5->size != VAR_2) {
  FUNC_1(VAR_6, "invalid firmware size = %zu, expected %u.\n",
   VAR_5->size, VAR_2);
  return -VAR_3;
 }


 VAR_8 = (VAR_5->data[0] << 8) | VAR_5->data[1];
 VAR_7 = FUNC_0(&VAR_5->data[2], VAR_1 - 2);
 if (VAR_7 != VAR_8) {
  FUNC_1(VAR_6, "%s %04x, expected: %04x\n",
   "invalid firmware header checksum = ",
   VAR_7, VAR_8);
  return -VAR_3;
 }


 VAR_8 = (VAR_5->data[VAR_1 - 2] << 8) |
    VAR_5->data[VAR_1 - 1];
 VAR_7 = FUNC_0(&VAR_5->data[VAR_1],
   VAR_0);
 if (VAR_7 != VAR_8) {
  FUNC_1(VAR_6, "%s %04x, expected: %04x\n",
   "invalid firmware header checksum = ",
   VAR_7, VAR_8);
  return -VAR_3;
 }
 return 0;
}
