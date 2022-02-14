
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct coreboot_table_header {int header_bytes; int table_entries; } ;
struct coreboot_table_entry {scalar_t__ size; } ;
struct TYPE_4__ {int release; int * bus; struct device* parent; } ;
struct coreboot_device {TYPE_1__ dev; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 struct coreboot_device* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,void*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7;
 void *VAR_8;
 struct coreboot_device *VAR_9;
 struct coreboot_table_entry *VAR_10;
 struct coreboot_table_header *VAR_11 = VAR_5;

 VAR_8 = VAR_5 + VAR_11->header_bytes;
 for (VAR_6 = 0; VAR_6 < VAR_11->table_entries; VAR_6++) {
  VAR_10 = VAR_8;

  VAR_9 = FUNC_2(sizeof(struct device) + VAR_10->size, VAR_1);
  if (!VAR_9)
   return -VAR_0;

  FUNC_0(&VAR_9->dev, "coreboot%d", VAR_6);
  VAR_9->dev.parent = VAR_4;
  VAR_9->dev.bus = &VAR_2;
  VAR_9->dev.release = VAR_3;
  FUNC_3(&VAR_9->entry, VAR_8, VAR_10->size);

  VAR_7 = FUNC_1(&VAR_9->dev);
  if (VAR_7) {
   FUNC_4(&VAR_9->dev);
   return VAR_7;
  }

  VAR_8 += VAR_10->size;
 }

 return 0;
}
