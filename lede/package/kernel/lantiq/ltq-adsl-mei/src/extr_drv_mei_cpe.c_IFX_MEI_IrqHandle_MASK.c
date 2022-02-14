
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_4__ {int* CMV_RxMsg; int cmv_waiting; int arcmsgav; int modem_ready; int wait_queue_modemready; scalar_t__ Recent_indicator; int modem_ready_cnt; int wait_queue_arcmsgav; } ;
struct TYPE_3__ {int pData; int (* function ) (int *,size_t,int ) ;} ;
typedef int DSL_DEV_Device_t ;
typedef size_t DSL_BSP_CB_Type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int*,int) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_11 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int *,size_t,int ) ;
 int FUNC_10 (int *,size_t,int ) ;

__attribute__((used)) static irqreturn_t FUNC_11 (int VAR_12, void *VAR_13)
{
 u32 VAR_14;
 DSL_DEV_Device_t *VAR_15 = (DSL_DEV_Device_t *) VAR_13;




        DSL_BSP_CB_Type_t VAR_16;

 if (VAR_15 == ((void*)0))
  FUNC_3("Error: Got Interrupt but pDev is NULL!!!!\n");

 FUNC_2 (VAR_15, VAR_0, &VAR_14, 1);
 if (VAR_14 & VAR_9) {
  FUNC_3("Receive Code Swap Request interrupt!!!\n");
  return VAR_5;
 }
 else if (VAR_14 & VAR_8) {

  FUNC_1("OMB_CLEAREOC_INTERRUPT_CODE\n");
                VAR_16 = VAR_3;
  FUNC_4 (VAR_15, (u32) VAR_6, VAR_1);
                if (VAR_11[VAR_16].function)
   (*VAR_11[VAR_16].function)(VAR_15, VAR_16, VAR_11[VAR_16].pData);
        } else if (VAR_14 & VAR_10) {

                FUNC_1("OMB_REBOOT_INTERRUPT_CODE\n");
                VAR_16 = VAR_4;

  FUNC_4 (VAR_15, (u32) VAR_6, VAR_1);

                if (VAR_11[VAR_16].function)
                        (*VAR_11[VAR_16].function)(VAR_15, VAR_16, VAR_11[VAR_16].pData);
        } else {
                FUNC_5 (VAR_15, FUNC_0(VAR_15)->CMV_RxMsg, VAR_7);
                if (FUNC_0(VAR_15)-> cmv_waiting == 1) {
                        FUNC_0(VAR_15)-> arcmsgav = 1;
                        FUNC_0(VAR_15)-> cmv_waiting = 0;

                        FUNC_6 (FUNC_0(VAR_15)->wait_queue_arcmsgav);

                }
  else {
   FUNC_0(VAR_15)-> modem_ready_cnt++;
   FUNC_8 ((char *) FUNC_0(VAR_15)->Recent_indicator,
    (char *) FUNC_0(VAR_15)->CMV_RxMsg, VAR_7 * 2);
   if (((FUNC_0(VAR_15)->CMV_RxMsg[0] & 0xff0) >> 4) == VAR_2) {

    FUNC_1 ("Got MODEM_READY_MSG\n");
    FUNC_0(VAR_15)->modem_ready = 1;
    FUNC_6 (FUNC_0(VAR_15)->wait_queue_modemready);
   }
  }
 }

 return VAR_5;
}
