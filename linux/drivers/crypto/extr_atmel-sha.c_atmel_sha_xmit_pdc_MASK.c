
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_sha_reqctx {size_t* digcnt; } ;
struct atmel_sha_dev {int flags; int dev; int req; } ;
typedef int dma_addr_t ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct atmel_sha_reqctx* FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_sha_dev*,int ,int) ;
 int FUNC_3 (struct atmel_sha_dev*,int) ;
 int FUNC_4 (int ,char*,size_t,size_t,size_t,int) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_10, dma_addr_t VAR_11,
  size_t VAR_12, dma_addr_t VAR_13, size_t VAR_14, int VAR_15)
{
 struct atmel_sha_reqctx *VAR_16 = FUNC_1(VAR_10->req);
 int VAR_17;

 FUNC_4(VAR_10->dev, "xmit_pdc: digcnt: 0x%llx 0x%llx, length: %zd, final: %d\n",
  VAR_16->digcnt[1], VAR_16->digcnt[0], VAR_12, VAR_15);

 VAR_17 = FUNC_0(VAR_12, sizeof(u32));
 FUNC_2(VAR_10, VAR_3, VAR_4);
 FUNC_2(VAR_10, VAR_9, VAR_11);
 FUNC_2(VAR_10, VAR_6, VAR_17);

 VAR_17 = FUNC_0(VAR_14, sizeof(u32));
 FUNC_2(VAR_10, VAR_8, VAR_13);
 FUNC_2(VAR_10, VAR_7, VAR_17);

 FUNC_3(VAR_10, 1);


 VAR_16->digcnt[0] += VAR_12;
 if (VAR_16->digcnt[0] < VAR_12)
  VAR_16->digcnt[1]++;

 if (VAR_15)
  VAR_10->flags |= VAR_2;

 VAR_10->flags |= VAR_1;


 FUNC_2(VAR_10, VAR_3, VAR_5);

 return -VAR_0;
}
