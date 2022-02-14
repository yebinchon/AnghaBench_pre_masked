
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxt_data {int t19_num_keys; int * t19_keymap; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char const*,int) ;
 int FUNC_1 (struct device*,char const*) ;
 scalar_t__ FUNC_2 (struct device*,char const*) ;
 int FUNC_3 (struct device*,char const*,int *,int) ;
 int * FUNC_4 (struct device*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct mxt_data *VAR_3)
{
 static const char VAR_4[] = "linux,gpio-keymap";
 struct device *VAR_5 = &VAR_3->client->dev;
 u32 *VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_5, VAR_4)) {
  VAR_7 = FUNC_1(VAR_5, VAR_4);
  if (VAR_7 <= 0) {
   VAR_8 = VAR_7 < 0 ? VAR_7 : -VAR_0;
   FUNC_0(VAR_5, "invalid/malformed '%s' property: %d\n",
    VAR_4, VAR_8);
   return VAR_8;
  }

  VAR_6 = FUNC_4(VAR_5, VAR_7, sizeof(*VAR_6),
         VAR_2);
  if (!VAR_6)
   return -VAR_1;

  VAR_8 = FUNC_3(VAR_5, VAR_4,
             VAR_6, VAR_7);
  if (VAR_8) {
   FUNC_0(VAR_5, "failed to parse '%s' property: %d\n",
    VAR_4, VAR_8);
   return VAR_8;
  }

  VAR_3->t19_keymap = VAR_6;
  VAR_3->t19_num_keys = VAR_7;
 }

 return 0;
}
