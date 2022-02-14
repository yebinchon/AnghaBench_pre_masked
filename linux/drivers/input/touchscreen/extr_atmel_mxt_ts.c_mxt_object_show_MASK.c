
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mxt_object {int start_address; int type; } ;
struct mxt_data {int client; struct mxt_object* object_table; TYPE_1__* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int object_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int,int *) ;
 struct mxt_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct mxt_object*) ;
 int FUNC_5 (struct mxt_object*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,struct mxt_object*,int,int *) ;
 scalar_t__ FUNC_8 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 struct mxt_data *VAR_6 = FUNC_1(VAR_3);
 struct mxt_object *VAR_7;
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 int VAR_11;
 u8 *VAR_12;


 VAR_12 = FUNC_3(256, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_6->info->object_num; VAR_9++) {
  VAR_7 = VAR_6->object_table + VAR_9;

  if (!FUNC_6(VAR_7->type))
   continue;

  VAR_8 += FUNC_8(VAR_5 + VAR_8, VAR_2 - VAR_8,
    "T%u:\n", VAR_7->type);

  for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_7); VAR_10++) {
   u16 VAR_13 = FUNC_5(VAR_7);
   u16 VAR_14 = VAR_7->start_address + VAR_10 * VAR_13;

   VAR_11 = FUNC_0(VAR_6->client, VAR_14, VAR_13, VAR_12);
   if (VAR_11)
    goto done;

   VAR_8 = FUNC_7(VAR_5, VAR_8, VAR_7, VAR_10, VAR_12);
  }
 }

done:
 FUNC_2(VAR_12);
 return VAR_11 ?: VAR_8;
}
