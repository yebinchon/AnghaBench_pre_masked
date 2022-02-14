
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct firmware {int* data; int size; } ;
struct btmrvl_sdio_card {int ioport; TYPE_1__* func; int helper; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (void*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_4 (struct btmrvl_sdio_card*,int) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int*,int const*,int) ;
 int FUNC_8 (int*,int,size_t) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int*,size_t) ;

__attribute__((used)) static int FUNC_12(struct btmrvl_sdio_card *VAR_10)
{
 const struct firmware *VAR_11 = ((void*)0);
 const u8 *VAR_12 = ((void*)0);
 int VAR_13;
 void *VAR_14 = ((void*)0);
 int VAR_15, VAR_16, VAR_17;
 u8 *VAR_18;
 u32 VAR_19;

 VAR_13 = FUNC_10(&VAR_11, VAR_10->helper,
      &VAR_10->func->dev);
 if ((VAR_13 < 0) || !VAR_11) {
  FUNC_3("request_firmware(helper) failed, error code = %d",
         VAR_13);
  VAR_13 = -VAR_4;
  goto done;
 }

 VAR_12 = VAR_11->data;
 VAR_17 = VAR_11->size;

 FUNC_2("Downloading helper image (%d bytes), block size %d bytes",
      VAR_17, VAR_8);

 VAR_15 = FUNC_1(VAR_0, VAR_1);

 VAR_14 = FUNC_6(VAR_15, VAR_7);
 if (!VAR_14) {
  FUNC_3("Unable to allocate buffer for helper."
   " Terminating download");
  VAR_13 = -VAR_5;
  goto done;
 }

 VAR_18 = (u8 *) FUNC_0(VAR_14, VAR_1);


 VAR_19 = (VAR_6 * VAR_8)
   - VAR_9;
 VAR_16 = 0;

 do {
  VAR_13 = FUNC_4(VAR_10,
         VAR_2 | VAR_3);
  if (VAR_13 < 0) {
   FUNC_3("Helper download poll status timeout @ %d",
    VAR_16);
   goto done;
  }


  if (VAR_16 >= VAR_17)
   break;

  if (VAR_17 - VAR_16 < VAR_19)
   VAR_19 = VAR_17 - VAR_16;


  VAR_18[0] = ((VAR_19 & 0x000000ff) >> 0);
  VAR_18[1] = ((VAR_19 & 0x0000ff00) >> 8);
  VAR_18[2] = ((VAR_19 & 0x00ff0000) >> 16);
  VAR_18[3] = ((VAR_19 & 0xff000000) >> 24);

  FUNC_7(&VAR_18[VAR_9], &VAR_12[VAR_16],
    VAR_19);


  VAR_13 = FUNC_11(VAR_10->func, VAR_10->ioport, VAR_18,
    VAR_6 * VAR_8);
  if (VAR_13 < 0) {
   FUNC_3("IO error during helper download @ %d",
    VAR_16);
   goto done;
  }

  VAR_16 += VAR_19;
 } while (1);

 FUNC_2("Transferring helper image EOF block");

 FUNC_8(VAR_18, 0x0, VAR_8);

 VAR_13 = FUNC_11(VAR_10->func, VAR_10->ioport, VAR_18,
       VAR_8);
 if (VAR_13 < 0) {
  FUNC_3("IO error in writing helper image EOF block");
  goto done;
 }

 VAR_13 = 0;

done:
 FUNC_5(VAR_14);
 FUNC_9(VAR_11);
 return VAR_13;
}
