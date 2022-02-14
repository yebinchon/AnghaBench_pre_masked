
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int quirks; int dev; } ;
struct gb_host_device {int connections; int dev; } ;
struct gb_connection {int hd_cport_id; int intf_cport_id; unsigned long flags; int bundle_links; int hd_links; int kref; int wq; int operations; int lock; int mutex; int op_cycle; int state; int handler; struct gb_bundle* bundle; struct gb_interface* intf; struct gb_host_device* hd; } ;
struct gb_bundle {int connections; } ;
typedef int gb_request_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gb_connection* FUNC_0 (int) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct gb_interface*,int) ;
 int FUNC_7 (struct gb_connection*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct gb_host_device*,int,unsigned long) ;
 int FUNC_9 (struct gb_host_device*,int) ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (int *) ;
 struct gb_connection* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct gb_connection*) ;

__attribute__((used)) static struct gb_connection *
FUNC_21(struct gb_host_device *VAR_9, int VAR_10,
        struct gb_interface *VAR_11,
        struct gb_bundle *VAR_12, int VAR_13,
        gb_request_handler_t VAR_14,
        unsigned long VAR_15)
{
 struct gb_connection *VAR_16;
 int VAR_17;

 FUNC_15(&VAR_7);

 if (VAR_11 && FUNC_6(VAR_11, VAR_13)) {
  FUNC_4(&VAR_11->dev, "cport %u already in use\n", VAR_13);
  VAR_17 = -VAR_0;
  goto err_unlock;
 }

 VAR_17 = FUNC_8(VAR_9, VAR_10, VAR_15);
 if (VAR_17 < 0) {
  FUNC_4(&VAR_9->dev, "failed to allocate cport: %d\n", VAR_17);
  goto err_unlock;
 }
 VAR_10 = VAR_17;

 VAR_16 = FUNC_12(sizeof(*VAR_16), VAR_5);
 if (!VAR_16) {
  VAR_17 = -VAR_1;
  goto err_hd_cport_release;
 }

 VAR_16->hd_cport_id = VAR_10;
 VAR_16->intf_cport_id = VAR_13;
 VAR_16->hd = VAR_9;
 VAR_16->intf = VAR_11;
 VAR_16->bundle = VAR_12;
 VAR_16->handler = VAR_14;
 VAR_16->flags = VAR_15;
 if (VAR_11 && (VAR_11->quirks & VAR_4))
  VAR_16->flags |= VAR_2;
 VAR_16->state = VAR_3;

 FUNC_3(&VAR_16->op_cycle, 0);
 FUNC_14(&VAR_16->mutex);
 FUNC_17(&VAR_16->lock);
 FUNC_1(&VAR_16->operations);

 VAR_16->wq = FUNC_2("%s:%d", VAR_6, 1,
      FUNC_5(&VAR_9->dev), VAR_10);
 if (!VAR_16->wq) {
  VAR_17 = -VAR_1;
  goto err_free_connection;
 }

 FUNC_11(&VAR_16->kref);

 FUNC_7(VAR_16);

 FUNC_18(&VAR_8);
 FUNC_13(&VAR_16->hd_links, &VAR_9->connections);

 if (VAR_12)
  FUNC_13(&VAR_16->bundle_links, &VAR_12->connections);
 else
  FUNC_1(&VAR_16->bundle_links);

 FUNC_19(&VAR_8);

 FUNC_16(&VAR_7);

 FUNC_20(VAR_16);

 return VAR_16;

err_free_connection:
 FUNC_10(VAR_16);
err_hd_cport_release:
 FUNC_9(VAR_9, VAR_10);
err_unlock:
 FUNC_16(&VAR_7);

 return FUNC_0(VAR_17);
}
