
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {int * queue; } ;
struct TYPE_4__ {TYPE_1__* type; int tag_set; int trackbuf; } ;
struct TYPE_3__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 struct gendisk* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct gendisk*) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static struct gendisk *FUNC_7(int VAR_6)
{
 struct gendisk *VAR_7;

 VAR_7 = FUNC_1(1);
 if (!VAR_7)
  goto out;

 VAR_7->queue = FUNC_4(&VAR_5[VAR_6].tag_set, &VAR_4,
      2, VAR_0);
 if (FUNC_0(VAR_7->queue)) {
  VAR_7->queue = ((void*)0);
  goto out_put_disk;
 }

 VAR_5[VAR_6].trackbuf = FUNC_5(VAR_2 * 512, VAR_3);
 if (!VAR_5[VAR_6].trackbuf)
  goto out_cleanup_queue;

 return VAR_7;

out_cleanup_queue:
 FUNC_2(VAR_7->queue);
 VAR_7->queue = ((void*)0);
 FUNC_3(&VAR_5[VAR_6].tag_set);
out_put_disk:
 FUNC_6(VAR_7);
out:
 VAR_5[VAR_6].type->code = VAR_1;
 return ((void*)0);
}
