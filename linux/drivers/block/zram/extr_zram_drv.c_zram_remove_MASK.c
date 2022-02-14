
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct zram {int claim; TYPE_1__* disk; } ;
struct block_device {int bd_mutex; scalar_t__ bd_openers; } ;
struct TYPE_4__ {int queue; int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct block_device* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct zram*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct zram*) ;
 int FUNC_11 (struct zram*) ;

__attribute__((used)) static int FUNC_12(struct zram *VAR_2)
{
 struct block_device *VAR_3;

 VAR_3 = FUNC_0(VAR_2->disk, 0);
 if (!VAR_3)
  return -VAR_1;

 FUNC_6(&VAR_3->bd_mutex);
 if (VAR_3->bd_openers || VAR_2->claim) {
  FUNC_7(&VAR_3->bd_mutex);
  FUNC_1(VAR_3);
  return -VAR_0;
 }

 VAR_2->claim = 1;
 FUNC_7(&VAR_3->bd_mutex);

 FUNC_10(VAR_2);


 FUNC_4(VAR_3);
 FUNC_11(VAR_2);
 FUNC_1(VAR_3);

 FUNC_8("Removed device: %s\n", VAR_2->disk->disk_name);

 FUNC_3(VAR_2->disk);
 FUNC_2(VAR_2->disk->queue);
 FUNC_9(VAR_2->disk);
 FUNC_5(VAR_2);
 return 0;
}
