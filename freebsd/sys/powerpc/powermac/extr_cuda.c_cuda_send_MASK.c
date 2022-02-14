
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cuda_softc {scalar_t__ sc_state; scalar_t__ sc_polling; int sc_mutex; scalar_t__ sc_waiting; int sc_outq; int sc_freeq; int sc_dev; } ;
struct cuda_packet {int len; int data; int type; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct cuda_packet* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cuda_packet*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cuda_softc*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(void *VAR_3, int VAR_4, int VAR_5, uint8_t *VAR_6)
{
 struct cuda_softc *VAR_7 = VAR_3;
 device_t VAR_8 = VAR_7->sc_dev;
 struct cuda_packet *VAR_9;

 if (VAR_7->sc_state == VAR_0)
  return (-1);

 FUNC_6(&VAR_7->sc_mutex);

 VAR_9 = FUNC_0(&VAR_7->sc_freeq);
 if (VAR_9 == ((void*)0)) {
  FUNC_7(&VAR_7->sc_mutex);
  return (-1);
 }

 VAR_9->len = VAR_5 - 1;
 VAR_9->type = VAR_6[0];
 FUNC_5(VAR_9->data, &VAR_6[1], VAR_9->len);

 FUNC_2(&VAR_7->sc_freeq, VAR_2);
 FUNC_1(&VAR_7->sc_outq, VAR_9, VAR_2);






 if (VAR_7->sc_waiting) {
  FUNC_7(&VAR_7->sc_mutex);
  return (0);
 }

 FUNC_4(VAR_7);
 FUNC_7(&VAR_7->sc_mutex);

 if (VAR_7->sc_polling || VAR_4 || VAR_1)
  FUNC_3(VAR_8);

 return (0);
}
