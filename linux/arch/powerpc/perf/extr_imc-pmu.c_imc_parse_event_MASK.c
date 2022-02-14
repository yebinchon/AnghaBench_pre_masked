
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct imc_events {void* name; void* scale; void* unit; scalar_t__ value; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_2, const char *VAR_3,
      const char *VAR_4, const char *VAR_5,
      u32 VAR_6, struct imc_events *VAR_7)
{
 const char *VAR_8;
 u32 VAR_9;

 if (FUNC_4(VAR_2, "reg", &VAR_9))
  goto error;

 VAR_7->value = VAR_6 + VAR_9;

 if (FUNC_3(VAR_2, "event-name", &VAR_8))
  goto error;

 VAR_7->name = FUNC_0(VAR_1, "%s%s", VAR_5, VAR_8);
 if (!VAR_7->name)
  goto error;

 if (FUNC_3(VAR_2, "scale", &VAR_8))
  VAR_8 = VAR_3;

 if (VAR_8) {
  VAR_7->scale = FUNC_2(VAR_8, VAR_1);
  if (!VAR_7->scale)
   goto error;
 }

 if (FUNC_3(VAR_2, "unit", &VAR_8))
  VAR_8 = VAR_4;

 if (VAR_8) {
  VAR_7->unit = FUNC_2(VAR_8, VAR_1);
  if (!VAR_7->unit)
   goto error;
 }

 return 0;
error:
 FUNC_1(VAR_7->unit);
 FUNC_1(VAR_7->scale);
 FUNC_1(VAR_7->name);
 return -VAR_0;
}
