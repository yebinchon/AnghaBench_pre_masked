
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct net_conf {int max_buffers; } ;
struct drbd_peer_device {TYPE_1__* connection; struct drbd_device* device; } ;
struct drbd_device {int pp_in_use; int pp_in_use_by_net; } ;
struct TYPE_2__ {int net_conf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct page* FUNC_1 (struct drbd_device*,unsigned int) ;
 int FUNC_2 (unsigned int,int *) ;
 unsigned int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (struct drbd_device*,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 struct net_conf* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_5 ;

struct page *FUNC_13(struct drbd_peer_device *VAR_6, unsigned int VAR_7,
         bool VAR_8)
{
 struct drbd_device *VAR_9 = VAR_6->device;
 struct page *VAR_10 = ((void*)0);
 struct net_conf *VAR_11;
 FUNC_0(VAR_5);
 unsigned int VAR_12;

 FUNC_9();
 VAR_11 = FUNC_8(VAR_6->connection->net_conf);
 VAR_12 = VAR_11 ? VAR_11->max_buffers : 1000000;
 FUNC_10();

 if (FUNC_3(&VAR_9->pp_in_use) < VAR_12)
  VAR_10 = FUNC_1(VAR_9, VAR_7);



 if (VAR_10 && FUNC_3(&VAR_9->pp_in_use_by_net) > 512)
  FUNC_4(VAR_9);

 while (VAR_10 == ((void*)0)) {
  FUNC_7(&VAR_4, &VAR_5, VAR_1);

  FUNC_4(VAR_9);

  if (FUNC_3(&VAR_9->pp_in_use) < VAR_12) {
   VAR_10 = FUNC_1(VAR_9, VAR_7);
   if (VAR_10)
    break;
  }

  if (!VAR_8)
   break;

  if (FUNC_12(VAR_3)) {
   FUNC_5(VAR_9, "drbd_alloc_pages interrupted!\n");
   break;
  }

  if (FUNC_11(VAR_0/10) == 0)
   VAR_12 = VAR_2;
 }
 FUNC_6(&VAR_4, &VAR_5);

 if (VAR_10)
  FUNC_2(VAR_7, &VAR_9->pp_in_use);
 return VAR_10;
}
