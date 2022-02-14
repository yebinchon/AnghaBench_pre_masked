
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuda_softc {int sc_waiting; scalar_t__ sc_state; int * sc_out; int sc_dev; int sc_freeq; int sc_outq; scalar_t__ sc_sent; scalar_t__ sc_out_length; int sc_mutex; } ;
struct cuda_packet {scalar_t__ len; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct cuda_packet* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cuda_packet*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cuda_softc*) ;
 int FUNC_5 (struct cuda_softc*) ;
 int FUNC_6 (struct cuda_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cuda_softc*) ;
 int FUNC_9 (struct cuda_softc*,int ,int ) ;
 int FUNC_10 (int *,int *,scalar_t__) ;
 int FUNC_11 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_12(struct cuda_softc *VAR_5)
{
 struct cuda_packet *VAR_6;

 FUNC_11(&VAR_5->sc_mutex, VAR_2);

 VAR_6 = FUNC_1(&VAR_5->sc_outq);
 if (VAR_6 == ((void*)0))
  return;

 VAR_5->sc_out_length = VAR_6->len + 1;
 FUNC_10(VAR_5->sc_out, &VAR_6->type, VAR_6->len + 1);
 VAR_5->sc_sent = 0;

 FUNC_3(&VAR_5->sc_outq, VAR_3);
 FUNC_2(&VAR_5->sc_freeq, VAR_6, VAR_3);

 VAR_5->sc_waiting = 1;

 FUNC_7(VAR_5->sc_dev);

 FUNC_0(150);

 if (VAR_5->sc_state == VAR_0 && !FUNC_5(VAR_5)) {
  VAR_5->sc_state = VAR_1;
  FUNC_6(VAR_5);
  FUNC_9(VAR_5, VAR_4, VAR_5->sc_out[0]);
  FUNC_4(VAR_5);
  FUNC_8(VAR_5);
 }
}
