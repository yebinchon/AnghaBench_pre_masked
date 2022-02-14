
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {unsigned int devtype; int lock; } ;
struct wiimote_data {TYPE_5__* input; TYPE_4__ state; TYPE_3__* hdev; } ;
struct wiimod_ops {int flags; int (* probe ) (struct wiimod_ops const*,struct wiimote_data*) ;int (* remove ) (struct wiimod_ops const*,struct wiimote_data*) ;} ;
typedef size_t __u8 ;
struct TYPE_10__ {int version; int product; int vendor; int bustype; } ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_13__ {int name; TYPE_2__ id; TYPE_1__ dev; } ;
struct TYPE_11__ {int version; int product; int vendor; int bus; int dev; } ;


 int VAR_0 ;
 size_t const VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,struct wiimote_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wiimod_ops const*,struct wiimote_data*) ;
 int FUNC_7 (struct wiimod_ops const*,struct wiimote_data*) ;
 struct wiimod_ops** VAR_3 ;
 size_t** VAR_4 ;

__attribute__((used)) static void FUNC_8(struct wiimote_data *VAR_5,
     unsigned int VAR_6)
{
 bool VAR_7 = 0;
 const __u8 *VAR_8, *VAR_9;
 const struct wiimod_ops *VAR_10;
 int VAR_11;

 VAR_8 = VAR_4[VAR_6];

 for (VAR_9 = VAR_8; *VAR_9 != VAR_1; ++VAR_9) {
  if (VAR_3[*VAR_9]->flags & VAR_0) {
   VAR_7 = 1;
   break;
  }
 }

 if (VAR_7) {
  VAR_5->input = FUNC_0();
  if (!VAR_5->input)
   return;

  FUNC_3(VAR_5->input, VAR_5);
  VAR_5->input->dev.parent = &VAR_5->hdev->dev;
  VAR_5->input->id.bustype = VAR_5->hdev->bus;
  VAR_5->input->id.vendor = VAR_5->hdev->vendor;
  VAR_5->input->id.product = VAR_5->hdev->product;
  VAR_5->input->id.version = VAR_5->hdev->version;
  VAR_5->input->name = VAR_2;
 }

 for (VAR_9 = VAR_8; *VAR_9 != VAR_1; ++VAR_9) {
  VAR_10 = VAR_3[*VAR_9];
  if (!VAR_10->probe)
   continue;

  VAR_11 = VAR_10->probe(VAR_10, VAR_5);
  if (VAR_11)
   goto error;
 }

 if (VAR_5->input) {
  VAR_11 = FUNC_2(VAR_5->input);
  if (VAR_11)
   goto error;
 }

 FUNC_4(&VAR_5->state.lock);
 VAR_5->state.devtype = VAR_6;
 FUNC_5(&VAR_5->state.lock);
 return;

error:
 for ( ; VAR_9-- != VAR_8; ) {
  VAR_10 = VAR_3[*VAR_9];
  if (VAR_10->remove)
   VAR_10->remove(VAR_10, VAR_5);
 }

 if (VAR_5->input) {
  FUNC_1(VAR_5->input);
  VAR_5->input = ((void*)0);
 }
}
