
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuda_softc {int sc_autopoll; int sc_mutex; int sc_freeq; int sc_rtc; int adb_bus; int sc_inq; int sc_dev; } ;
struct cuda_packet {int type; int len; int * data; } ;
typedef int device_t ;
 struct cuda_packet* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cuda_packet*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct cuda_softc *VAR_1)
{
 device_t VAR_2;
 struct cuda_packet *VAR_3;

 VAR_2 = VAR_1->sc_dev;

 FUNC_6(&VAR_1->sc_mutex);

 while ((VAR_3 = FUNC_0(&VAR_1->sc_inq)) != ((void*)0)) {
  FUNC_2(&VAR_1->sc_inq, VAR_0);

  FUNC_7(&VAR_1->sc_mutex);


  switch (VAR_3->type) {
     case 130:
   if (VAR_3->len > 2) {
    FUNC_3(VAR_1->adb_bus,
        VAR_3->data[0],VAR_3->data[1],
        VAR_3->len - 2,&VAR_3->data[2]);
   } else {
    FUNC_3(VAR_1->adb_bus,
        VAR_3->data[0],VAR_3->data[1],0,((void*)0));
   }
   break;
     case 128:
   FUNC_6(&VAR_1->sc_mutex);
   switch (VAR_3->data[1]) {
   case 133:
    VAR_1->sc_autopoll = 1;
    break;
   case 132:
    FUNC_5(&VAR_1->sc_rtc, &VAR_3->data[2],
        sizeof(VAR_1->sc_rtc));
    FUNC_8(&VAR_1->sc_rtc);
    break;
   case 131:
    break;
   }
   FUNC_7(&VAR_1->sc_mutex);
   break;
     case 129:







   break;
     default:
   FUNC_4(VAR_2,"unknown CUDA command %d\n",
       VAR_3->type);
   break;
  }

  FUNC_6(&VAR_1->sc_mutex);

  FUNC_1(&VAR_1->sc_freeq, VAR_3, VAR_0);
 }

 FUNC_7(&VAR_1->sc_mutex);
}
