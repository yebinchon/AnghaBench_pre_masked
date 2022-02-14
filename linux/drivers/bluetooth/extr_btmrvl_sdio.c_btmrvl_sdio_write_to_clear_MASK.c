
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {TYPE_1__* reg; int func; } ;
struct TYPE_2__ {int host_intstatus; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct btmrvl_sdio_card *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 *VAR_3 = FUNC_2(VAR_2->func, VAR_2->reg->host_intstatus, &VAR_4);
 if (VAR_4) {
  FUNC_1("sdio_readb: read int status failed: %d", VAR_4);
  return VAR_4;
 }

 if (*VAR_3) {





  FUNC_0("int_status = 0x%x", *VAR_3);

  FUNC_3(VAR_2->func, ~(*VAR_3) & (VAR_0 |
          VAR_1),
       VAR_2->reg->host_intstatus, &VAR_4);
  if (VAR_4) {
   FUNC_1("sdio_writeb: clear int status failed: %d", VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
