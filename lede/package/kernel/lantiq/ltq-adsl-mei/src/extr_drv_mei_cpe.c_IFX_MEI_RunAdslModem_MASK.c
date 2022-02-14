
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_15__ {int count; } ;
struct TYPE_14__ {int * nIrq; } ;
struct TYPE_13__ {scalar_t__ nCopy; scalar_t__ address; } ;
struct TYPE_12__ {int image_size; int modem_ready; int wait_queue_modemready; int nBar; TYPE_1__* adsl_mem_info; TYPE_3__* img_hdr; } ;
typedef int DSL_DEV_MeiError_t ;
typedef TYPE_2__ DSL_DEV_Device_t ;
typedef int ARC_SWP_PAGE_HDR ;
typedef TYPE_3__ ARC_IMG_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_10__* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int * VAR_10 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_14 (DSL_DEV_Device_t *VAR_11)
{
 int VAR_12 = 0, VAR_13 = 0;
 uint32_t VAR_14, VAR_15;


 if (VAR_10 == ((void*)0)) {
  VAR_10 =
   (u32 *) FUNC_12 (VAR_7 * 4, VAR_2);
  if (VAR_10 == ((void*)0)) {
   FUNC_4 (">>> malloc fail for codeswap buff!!! <<<\n");
   return VAR_0;
  }
                FUNC_2("allocate %dKB swap buff memory at: 0x%p\n", FUNC_13(VAR_10)/1024, VAR_10);
 }

 FUNC_0(VAR_11)->img_hdr =
  (ARC_IMG_HDR *) FUNC_0(VAR_11)->adsl_mem_info[0].address;
 if ((FUNC_0(VAR_11)->img_hdr->
      count) * sizeof (ARC_SWP_PAGE_HDR) > VAR_9) {
  FUNC_4 ("firmware header size is bigger than 64K segment size\n");
  return VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_12 += FUNC_0(VAR_11)->adsl_mem_info[VAR_13].nCopy;
 }
 if (VAR_12 !=
     FUNC_0(VAR_11)->image_size) {
  FUNC_4 ("Firmware download is not completed. Please download firmware again!\n");
  return VAR_0;
 }



 FUNC_6 (VAR_11);
 FUNC_5 (VAR_11);
 FUNC_1 (VAR_11, FUNC_0(VAR_11)->nBar);



 FUNC_3 (VAR_11);

 VAR_14 = (*VAR_4) & (1 << 20);
 VAR_15 = (*VAR_5) & (1 << 20);


 FUNC_10 (VAR_6);
 FUNC_10 (VAR_11->nIrq[VAR_3]);

 FUNC_7 (VAR_11);

 FUNC_9 (FUNC_0(VAR_11)->wait_queue_modemready, 1000);

 FUNC_8 (VAR_6);
 FUNC_8 (VAR_11->nIrq[VAR_3]);


 FUNC_11(VAR_11->nIrq[VAR_3]);
 *VAR_4 |= VAR_14;
 *VAR_5 |= VAR_15;

 if (FUNC_0(VAR_11)->modem_ready != 1) {
  FUNC_4 ("Modem failed to be ready!\n");
  return VAR_0;
 } else {
  FUNC_2("Modem is ready.\n");
  return VAR_1;
 }
}
