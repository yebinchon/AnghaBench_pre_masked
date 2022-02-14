
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_6__ {char* address; char* org_address; int size; size_t nCopy; void* type; } ;
typedef TYPE_2__ smmu_mem_info_t ;
typedef int img_hdr_tmp ;
struct TYPE_8__ {int image_size; int nBar; TYPE_3__* img_hdr; TYPE_2__* adsl_mem_info; } ;
struct TYPE_7__ {unsigned long size; TYPE_1__* page; } ;
struct TYPE_5__ {unsigned long p_offset; } ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;
typedef TYPE_3__ ARC_IMG_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*,char const*,size_t) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int,int ) ;
 int FUNC_12 (unsigned long) ;

DSL_DEV_MeiError_t
FUNC_13 (DSL_DEV_Device_t * VAR_9, const char *VAR_10,
    unsigned long VAR_11, long *VAR_12, long *VAR_13)
{
 ARC_IMG_HDR VAR_14;
 smmu_mem_info_t *VAR_15 = FUNC_0(VAR_9)->adsl_mem_info;

 size_t VAR_16 = 0, VAR_17 = 0;
 char *VAR_18;
 char *VAR_19 = ((void*)0);
 ssize_t VAR_20 = -VAR_2;
 int VAR_21 = 0;

        FUNC_4("\n");

 if (*VAR_12 == 0) {
  if (VAR_11 < sizeof (VAR_14)) {
   FUNC_5 ("Firmware size is too small!\n");
   return VAR_20;
  }
  FUNC_9 ((char *) &VAR_14, VAR_10, sizeof (VAR_14));

  FUNC_0(VAR_9)->image_size = FUNC_12 (VAR_14.size) + 8;

  if (FUNC_0(VAR_9)->image_size > 1024 * 1024) {
   FUNC_5 ("Firmware size is too large!\n");
   return VAR_20;
  }

  FUNC_7 (VAR_9);
  FUNC_6 (VAR_9);

  FUNC_3 (VAR_9, VAR_3);

  VAR_20 = FUNC_2 (VAR_9, FUNC_0(VAR_9)->image_size);
  if (VAR_20 < 0) {
   FUNC_5 ("Error: No memory space left.\n");
   goto error;
  }
  for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {

   if (VAR_21 == VAR_8)
    continue;
   if (VAR_21 * VAR_7 < FUNC_12 (VAR_14.page[0].p_offset))
    VAR_15[VAR_21].type = VAR_4;
   else
    VAR_15[VAR_21].type = VAR_5;
  }
  FUNC_0(VAR_9)->nBar = VAR_20;

  FUNC_0(VAR_9)->img_hdr =
   (ARC_IMG_HDR *) VAR_15[0].address;

  VAR_19 = FUNC_11 (VAR_7, VAR_6);
  if (VAR_19 == ((void*)0)) {
   FUNC_5 ("kmalloc memory fail!\n");
   VAR_20 = -VAR_2;
   goto error;
  }

  if (((unsigned long)VAR_19) & (1023)) {



   FUNC_10(VAR_19);
   VAR_19 = FUNC_11 (VAR_7 + 1024, VAR_6);
   if (VAR_19 == ((void*)0)) {
    FUNC_5 ("kmalloc memory fail!\n");
    VAR_20 = -VAR_2;
    goto error;
   }
   VAR_15[VAR_8].address =
    (char *) ((unsigned long) (VAR_19 + 1023) & ~(1024 -1));
  } else {
   VAR_15[VAR_8].address = VAR_19;
  }

  VAR_15[VAR_8].org_address = VAR_19;
  VAR_15[VAR_8].size = VAR_7;

  VAR_15[VAR_8].type = VAR_4;
  FUNC_4("-> IFX_MEI_BarUpdate()\n");
  FUNC_1 (VAR_9, (FUNC_0(VAR_9)->nBar));
 }
 else if (FUNC_0(VAR_9)-> image_size == 0) {
  FUNC_5 ("Error: Firmware size=0! \n");
  goto error;
 }

 VAR_16 = 0;
 while (VAR_16 < VAR_11) {
  long VAR_22 = ((long) (*VAR_12) + VAR_16) % VAR_7;
  VAR_21 = (((long) (*VAR_12)) + VAR_16) / VAR_7;
  VAR_18 = (char *) FUNC_8 ((unsigned long) (VAR_15[VAR_21].address) + VAR_22);
  if ((VAR_11 - VAR_16 + VAR_22) > VAR_7)
   VAR_17 = VAR_7 - VAR_22;
  else
   VAR_17 = VAR_11 - VAR_16;
  FUNC_9 (VAR_18, VAR_10 + VAR_16, VAR_17);
  for (VAR_22 = 0; VAR_22 < (VAR_17 / 4); VAR_22++) {
   ((unsigned long *) VAR_18)[VAR_22] = FUNC_12 (((unsigned long *) VAR_18)[VAR_22]);
  }
  VAR_16 += VAR_17;
  VAR_15[VAR_21].nCopy += VAR_17;
 }

 *VAR_12 += VAR_11;
 *VAR_13 = VAR_11;
 return VAR_1;
error:
 FUNC_3 (VAR_9, VAR_3);
 return VAR_0;
}
