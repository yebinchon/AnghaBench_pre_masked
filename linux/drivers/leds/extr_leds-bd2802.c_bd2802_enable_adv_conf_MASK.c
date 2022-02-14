
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bd2802_led {int adf_on; TYPE_2__* client; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_9__ {TYPE_1__ attr; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (TYPE_3__**) ;
 TYPE_3__** VAR_0 ;
 scalar_t__ FUNC_1 (struct bd2802_led*) ;
 int FUNC_2 (struct bd2802_led*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct bd2802_led *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_4(&VAR_1->client->dev,
      VAR_0[VAR_2]);
  if (VAR_3) {
   FUNC_3(&VAR_1->client->dev, "failed: sysfs file %s\n",
     VAR_0[VAR_2]->attr.name);
   goto failed_remove_files;
  }
 }

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1);

 VAR_1->adf_on = 1;

 return;

failed_remove_files:
 for (VAR_2--; VAR_2 >= 0; VAR_2--)
  FUNC_5(&VAR_1->client->dev,
      VAR_0[VAR_2]);
}
