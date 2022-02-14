
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vscsi_xfer {scalar_t__ srp_iu_offset; struct vscsi_softc* sc; } ;
struct vscsi_softc {int bus_logged_in; int max_transactions; int dev; scalar_t__ srp_iu_queue; } ;
struct vscsi_crq {int dummy; } ;
struct srp_login_rsp {int request_limit_delta; int buffer_formats; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct vscsi_xfer *VAR_0, struct vscsi_crq *VAR_1)
{
 struct vscsi_softc *VAR_2 = VAR_0->sc;
 struct srp_login_rsp *VAR_3;


 VAR_3 = (struct srp_login_rsp *)((uint8_t *)VAR_2->srp_iu_queue +
     (uintptr_t)VAR_0->srp_iu_offset);
 FUNC_0(FUNC_1(VAR_3->buffer_formats) & 0x3, ("Both direct and indirect "
     "buffers supported"));

 VAR_2->max_transactions = FUNC_2(VAR_3->request_limit_delta);
 FUNC_3(VAR_2->dev, "Queue depth %d commands\n",
     VAR_2->max_transactions);
 VAR_2->bus_logged_in = 1;
}
