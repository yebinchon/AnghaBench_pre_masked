
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_start; unsigned long vm_end; } ;
struct file {struct client* private_data; } ;
struct TYPE_6__ {int * pages; } ;
struct client {int vm_start; int buffer_is_mapped; TYPE_5__* device; TYPE_1__ buffer; int lock; scalar_t__ iso_context; } ;
struct TYPE_7__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,struct vm_area_struct*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct client *VAR_8 = VAR_6->private_data;
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_0(VAR_8->device))
  return -VAR_2;


 if (VAR_8->buffer.pages != ((void*)0))
  return -VAR_0;

 if (!(VAR_7->vm_flags & VAR_5))
  return -VAR_1;

 if (VAR_7->vm_start & ~VAR_3)
  return -VAR_1;

 VAR_8->vm_start = VAR_7->vm_start;
 VAR_9 = VAR_7->vm_end - VAR_7->vm_start;
 VAR_10 = VAR_9 >> VAR_4;
 if (VAR_9 & ~VAR_3)
  return -VAR_1;

 VAR_11 = FUNC_1(&VAR_8->buffer, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_6(&VAR_8->lock);
 if (VAR_8->iso_context) {
  VAR_11 = FUNC_3(&VAR_8->buffer,
    VAR_8->device->card,
    FUNC_5(VAR_8->iso_context));
  VAR_8->buffer_is_mapped = (VAR_11 == 0);
 }
 FUNC_7(&VAR_8->lock);
 if (VAR_11 < 0)
  goto fail;

 VAR_11 = FUNC_4(&VAR_8->buffer, VAR_7);
 if (VAR_11 < 0)
  goto fail;

 return 0;
 fail:
 FUNC_2(&VAR_8->buffer, VAR_8->device->card);
 return VAR_11;
}
