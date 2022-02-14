
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* address; char* org_address; int size; } ;
typedef TYPE_1__ smmu_mem_info_t ;
struct TYPE_7__ {TYPE_1__* adsl_mem_info; } ;
typedef TYPE_2__ ifx_mei_device_private_t ;
struct TYPE_8__ {scalar_t__ pPriv; } ;
typedef TYPE_3__ DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5 (DSL_DEV_Device_t * VAR_7, long VAR_8)
{
 unsigned long VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 long VAR_12 = 0;
 int VAR_13 = 0;
 smmu_mem_info_t *VAR_14 =
  ((ifx_mei_device_private_t *) VAR_7->pPriv)->adsl_mem_info;

 int VAR_15 = VAR_5;

 FUNC_1("image_size = %ld\n", VAR_8);

 for (VAR_11 = 0; VAR_8 > 0 && VAR_11 < VAR_4; VAR_11++) {

  if (VAR_11 == VAR_6)
   continue;







                if (VAR_11 == (VAR_4 - 1))
                        VAR_15 = VAR_8;
                else
                        VAR_15 = VAR_5;

  VAR_10 = FUNC_4 (VAR_15, VAR_3);
  if (VAR_10 == ((void*)0)) {
                        FUNC_2 ("%d: kmalloc %d bytes memory fail!\n", VAR_11, VAR_15);
   VAR_13 = -VAR_1;
   goto allocate_error;
  }

  if (((unsigned long)VAR_10) & (1023)) {



   FUNC_3(VAR_10);
   VAR_10 = FUNC_4 (VAR_15 + 1024, VAR_3);
   if (VAR_10 == ((void*)0)) {
    FUNC_2 ("%d: kmalloc %d bytes memory fail!\n",
                  VAR_11, VAR_15 + 1024);
    VAR_13 = -VAR_1;
    goto allocate_error;
   }
   VAR_9 = (unsigned long) (VAR_10 + 1023) & ~(1024 -1);
  } else {
   VAR_9 = (unsigned long) VAR_10;
  }

                VAR_14[VAR_11].address = (char *) VAR_9;
                VAR_14[VAR_11].org_address = VAR_10;
                VAR_14[VAR_11].size = VAR_15;
                VAR_8 -= VAR_15;
                VAR_12 += VAR_15;
 }
 if (VAR_8 > 0) {
  FUNC_2 ("Image size is too large!\n");
  VAR_13 = -VAR_0;
  goto allocate_error;
 }
 VAR_13 = VAR_11;
 return VAR_13;

      allocate_error:
 FUNC_0 (VAR_7, VAR_2);
 return VAR_13;
}
