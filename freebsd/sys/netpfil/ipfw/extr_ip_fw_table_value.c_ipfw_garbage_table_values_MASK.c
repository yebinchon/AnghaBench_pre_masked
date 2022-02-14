
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tentry_info {scalar_t__ value; int flags; } ;
struct table_value {int dummy; } ;
struct table_config {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*,struct table_config*,int,struct table_value**,struct namedobj_instance**) ;
 int FUNC_1 (struct namedobj_instance*,struct table_value*,scalar_t__) ;

void
FUNC_2(struct ip_fw_chain *VAR_1, struct table_config *VAR_2,
    struct tentry_info *VAR_3, uint32_t VAR_4, int VAR_5)
{
 int VAR_6;
 struct tentry_info *VAR_7;
 struct table_value *VAR_8;
 struct namedobj_instance *VAR_9;
 FUNC_0(VAR_1, VAR_2, 1, &VAR_8, &VAR_9);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = &VAR_3[VAR_6];

  if (VAR_7->value == 0) {





   continue;
  }

  if ((VAR_7->flags & VAR_0) != 0 && VAR_5 == 0) {
   VAR_7->value = 0;
   continue;
  }

  FUNC_1(VAR_9, VAR_8, VAR_7->value);
  VAR_7->value = 0;
 }
}
