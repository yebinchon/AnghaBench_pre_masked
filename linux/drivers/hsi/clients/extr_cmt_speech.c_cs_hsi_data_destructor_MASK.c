
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hsi_msg {scalar_t__ ttype; int status; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {scalar_t__ iface_state; int data_state; int lock; int datawait; } ;
struct TYPE_4__ {TYPE_1__* cl; } ;
struct TYPE_3__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct hsi_msg *VAR_7)
{
 struct cs_hsi_iface *VAR_8 = VAR_7->context;
 const char *VAR_9 = (VAR_7->ttype == VAR_1) ? "TX" : "RX";

 FUNC_0(&VAR_6.cl->device, "Freeing data %s message\n", VAR_9);

 FUNC_2(&VAR_8->lock);
 if (VAR_8->iface_state != VAR_0)
  FUNC_1(&VAR_6.cl->device,
    "Data %s flush while device active\n", VAR_9);
 if (VAR_7->ttype == VAR_1)
  VAR_8->data_state &=
   ~(VAR_3 | VAR_4);
 else
  VAR_8->data_state &= ~VAR_5;

 VAR_7->status = VAR_2;
 if (FUNC_4(FUNC_5(&VAR_8->datawait)))
  FUNC_6(&VAR_8->datawait);

 FUNC_3(&VAR_8->lock);
}
