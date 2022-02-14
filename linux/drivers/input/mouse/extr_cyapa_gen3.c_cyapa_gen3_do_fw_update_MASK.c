
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int * data; } ;
struct device {int dummy; } ;
struct cyapa {TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cyapa*,int ,size_t,int *) ;
 int FUNC_1 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_5,
  const struct firmware *VAR_6)
{
 struct device *VAR_7 = &VAR_5->client->dev;
 int VAR_8;


 VAR_8 = FUNC_0(VAR_5,
  VAR_2, VAR_1,
  &VAR_6->data[VAR_3 * VAR_0]);
 if (VAR_8) {
  FUNC_1(VAR_7, "FW update aborted, write image: %d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_0(VAR_5,
  VAR_4, VAR_3,
  &VAR_6->data[0]);
 if (VAR_8) {
  FUNC_1(VAR_7, "FW update aborted, write checksum: %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
