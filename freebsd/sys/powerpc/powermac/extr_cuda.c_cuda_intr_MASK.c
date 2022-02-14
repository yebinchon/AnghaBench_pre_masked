
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cuda_softc {int sc_state; int sc_waiting; size_t sc_sent; int* sc_out; int sc_received; size_t sc_out_length; int sc_mutex; int sc_inq; int sc_freeq; void** sc_in; } ;
struct cuda_packet {int len; int data; void* type; } ;
typedef scalar_t__ device_t ;






 int FUNC_0 (int) ;
 struct cuda_packet* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cuda_packet*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cuda_softc*) ;
 int FUNC_5 (struct cuda_softc*) ;
 int FUNC_6 (struct cuda_softc*) ;
 int FUNC_7 (struct cuda_softc*) ;
 int FUNC_8 (struct cuda_softc*) ;
 void* FUNC_9 (struct cuda_softc*,int ) ;
 int FUNC_10 (struct cuda_softc*) ;
 int FUNC_11 (struct cuda_softc*) ;
 int FUNC_12 (struct cuda_softc*) ;
 int FUNC_13 (struct cuda_softc*) ;
 int FUNC_14 (struct cuda_softc*,int ,int) ;
 struct cuda_softc* FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,char*) ;
 int FUNC_17 (int ,void**,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_20(void *VAR_4)
{
 device_t VAR_5;
 struct cuda_softc *VAR_6;

 int VAR_7, VAR_8, VAR_9, VAR_10;
 uint8_t VAR_11;

        VAR_5 = (device_t)VAR_4;
 VAR_6 = FUNC_15(VAR_5);

 FUNC_18(&VAR_6->sc_mutex);

 VAR_9 = 0;
 VAR_10 = 0;
 VAR_11 = FUNC_9(VAR_6, VAR_1);
 if ((VAR_11 & VAR_3) != VAR_3) {
  FUNC_19(&VAR_6->sc_mutex);
  return;
 }

 FUNC_14(VAR_6, VAR_1, 0x7f);

switch_start:
 switch (VAR_6->sc_state) {
 case 131:





  VAR_6->sc_in[1] = FUNC_9(VAR_6, VAR_2);

  if (FUNC_7(VAR_6) == 0) {


   if (VAR_6->sc_waiting) {

    FUNC_0(150);
    VAR_6->sc_state = 128;
    VAR_6->sc_sent = 0;
    FUNC_8(VAR_6);
    FUNC_14(VAR_6, VAR_2, VAR_6->sc_out[1]);
    FUNC_4(VAR_6);
    FUNC_12(VAR_6);
   }
   break;
  }

  FUNC_6(VAR_6);
  FUNC_12(VAR_6);

  VAR_6->sc_received = 1;
  VAR_6->sc_state = 130;
  break;

 case 130:
  VAR_6->sc_in[VAR_6->sc_received] = FUNC_9(VAR_6, VAR_2);
  VAR_8 = 0;

  if (VAR_6->sc_received > 255) {

   if (VAR_6->sc_received == 256) {
    FUNC_16(VAR_5,"input overflow\n");
    VAR_8 = 1;
   }
  } else
   VAR_6->sc_received++;


  if (FUNC_7(VAR_6) == 0) {
   VAR_8 = 1;
  } else {
   FUNC_13(VAR_6);
  }

  if (VAR_8 == 1) {
   struct cuda_packet *VAR_12;


   FUNC_5(VAR_6);


   VAR_12 = FUNC_1(&VAR_6->sc_freeq);
   if (VAR_12 != ((void*)0)) {


    VAR_12->len = VAR_6->sc_received - 2;
    VAR_12->type = VAR_6->sc_in[1];
    FUNC_17(VAR_12->data, &VAR_6->sc_in[2], VAR_12->len);

    FUNC_3(&VAR_6->sc_freeq, VAR_0);
    FUNC_2(&VAR_6->sc_inq, VAR_12, VAR_0);

    VAR_10 = 1;
   }

   VAR_6->sc_state = 131;
   VAR_6->sc_received = 0;





   if (VAR_6->sc_waiting == 1) {
    FUNC_0(1500);
    VAR_6->sc_sent = 0;
    VAR_6->sc_state = 128;







    if (FUNC_7(VAR_6)) {
     FUNC_6(VAR_6);
     FUNC_5(VAR_6);
     VAR_6->sc_sent = 0;
     VAR_6->sc_state = 131;
     VAR_6->sc_received = 0;
     FUNC_0(150);
     goto switch_start;
    }






    FUNC_8(VAR_6);
    FUNC_14(VAR_6, VAR_2,
        VAR_6->sc_out[VAR_6->sc_sent]);
    FUNC_4(VAR_6);
    FUNC_12(VAR_6);
   }
  }
  break;

 case 128:
  VAR_7 = FUNC_9(VAR_6, VAR_2);

  VAR_6->sc_sent++;
  if (FUNC_7(VAR_6)) {
   FUNC_6(VAR_6);
   FUNC_5(VAR_6);
   VAR_6->sc_sent = 0;
   VAR_6->sc_state = 131;
   VAR_6->sc_received = 0;
   VAR_6->sc_waiting = 1;

   FUNC_0(150);
   goto switch_start;

   break;
  }
  if (VAR_6->sc_out_length == VAR_6->sc_sent) {
   VAR_6->sc_waiting = 0;
   VAR_6->sc_state = 131;
   FUNC_6(VAR_6);
   FUNC_5(VAR_6);
  } else {

   FUNC_14(VAR_6, VAR_2, VAR_6->sc_out[VAR_6->sc_sent]);
   FUNC_13(VAR_6);

  }
  break;

 case 129:
  break;

 default:
  break;
 }

 FUNC_19(&VAR_6->sc_mutex);

 if (VAR_10)
  FUNC_10(VAR_6);

 FUNC_18(&VAR_6->sc_mutex);

 if (!VAR_6->sc_waiting && VAR_6->sc_state == 131)
  FUNC_11(VAR_6);

 FUNC_19(&VAR_6->sc_mutex);

}
