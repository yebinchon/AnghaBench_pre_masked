
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb_node {int entry; struct urb* urb; int release_urb_work; struct udl_device* dev; } ;
struct urb {int transfer_flags; int transfer_dma; } ;
struct TYPE_2__ {size_t size; size_t count; scalar_t__ available; int limit_sem; int list; int lock; } ;
struct udl_device {TYPE_1__ urbs; int udev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct urb_node*) ;
 struct urb_node* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 struct udl_device* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int ,size_t,int ,int *) ;
 struct urb* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct urb*,int ,int ,char*,size_t,int ,struct urb_node*) ;
 int FUNC_14 (struct urb*) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int FUNC_16(struct drm_device *VAR_5, int VAR_6, size_t VAR_7)
{
 struct udl_device *VAR_8 = FUNC_8(VAR_5);
 struct urb *VAR_9;
 struct urb_node *VAR_10;
 char *VAR_11;
 size_t VAR_12 = VAR_6 * VAR_7;

 FUNC_7(&VAR_8->urbs.lock);

retry:
 VAR_8->urbs.size = VAR_7;
 FUNC_2(&VAR_8->urbs.list);

 FUNC_6(&VAR_8->urbs.limit_sem, 0);
 VAR_8->urbs.count = 0;
 VAR_8->urbs.available = 0;

 while (VAR_8->urbs.count * VAR_7 < VAR_12) {
  VAR_10 = FUNC_4(sizeof(struct urb_node), VAR_0);
  if (!VAR_10)
   break;
  VAR_10->dev = VAR_8;

  FUNC_1(&VAR_10->release_urb_work,
     VAR_3);

  VAR_9 = FUNC_12(0, VAR_0);
  if (!VAR_9) {
   FUNC_3(VAR_10);
   break;
  }
  VAR_10->urb = VAR_9;

  VAR_11 = FUNC_11(VAR_8->udev, VAR_7, VAR_0,
      &VAR_9->transfer_dma);
  if (!VAR_11) {
   FUNC_3(VAR_10);
   FUNC_14(VAR_9);
   if (VAR_7 > VAR_1) {
    VAR_7 /= 2;
    FUNC_9(VAR_5);
    goto retry;
   }
   break;
  }


  FUNC_13(VAR_9, VAR_8->udev, FUNC_15(VAR_8->udev, 1),
   VAR_11, VAR_7, VAR_4, VAR_10);
  VAR_9->transfer_flags |= VAR_2;

  FUNC_5(&VAR_10->entry, &VAR_8->urbs.list);

  FUNC_10(&VAR_8->urbs.limit_sem);
  VAR_8->urbs.count++;
  VAR_8->urbs.available++;
 }

 FUNC_0("allocated %d %d byte urbs\n", VAR_8->urbs.count, (int) VAR_7);

 return VAR_8->urbs.count;
}
