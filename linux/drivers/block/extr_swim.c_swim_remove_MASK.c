
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct swim_priv {int floppy_count; TYPE_2__* unit; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* disk; int tag_set; } ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct swim_priv*) ;
 struct swim_priv* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_2)
{
 struct swim_priv *VAR_3 = FUNC_7(VAR_2);
 int VAR_4;
 struct resource *VAR_5;

 FUNC_3(FUNC_0(VAR_0, 0), 256);

 for (VAR_4 = 0; VAR_4 < VAR_3->floppy_count; VAR_4++) {
  FUNC_4(VAR_3->unit[VAR_4].disk);
  FUNC_1(VAR_3->unit[VAR_4].disk->queue);
  FUNC_2(&VAR_3->unit[VAR_4].tag_set);
  FUNC_9(VAR_3->unit[VAR_4].disk);
 }

 FUNC_12(VAR_0, "fd");



 for (VAR_4 = 0; VAR_4 < VAR_3->floppy_count; VAR_4++)
  FUNC_5(&VAR_3->unit[VAR_4]);

 VAR_5 = FUNC_8(VAR_2, VAR_1, 0);
 if (VAR_5)
  FUNC_10(VAR_5->start, FUNC_11(VAR_5));

 FUNC_6(VAR_3);

 return 0;
}
