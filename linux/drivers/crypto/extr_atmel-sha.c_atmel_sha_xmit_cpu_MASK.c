
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct atmel_sha_reqctx {size_t* digcnt; } ;
struct atmel_sha_dev {int flags; int dev; int req; } ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct atmel_sha_reqctx* FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_sha_dev*,int ,int const) ;
 int FUNC_4 (struct atmel_sha_dev*,int ) ;
 int FUNC_5 (int ,char*,size_t,size_t,size_t,int) ;

__attribute__((used)) static int FUNC_6(struct atmel_sha_dev *VAR_3, const u8 *VAR_4,
         size_t VAR_5, int VAR_6)
{
 struct atmel_sha_reqctx *VAR_7 = FUNC_2(VAR_3->req);
 int VAR_8, VAR_9;
 const u32 *VAR_10 = (const u32 *)VAR_4;

 FUNC_5(VAR_3->dev, "xmit_cpu: digcnt: 0x%llx 0x%llx, length: %zd, final: %d\n",
  VAR_7->digcnt[1], VAR_7->digcnt[0], VAR_5, VAR_6);

 FUNC_4(VAR_3, 0);


 VAR_7->digcnt[0] += VAR_5;
 if (VAR_7->digcnt[0] < VAR_5)
  VAR_7->digcnt[1]++;

 if (VAR_6)
  VAR_3->flags |= VAR_2;

 VAR_9 = FUNC_0(VAR_5, sizeof(u32));

 VAR_3->flags |= VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_3(VAR_3, FUNC_1(VAR_8), VAR_10[VAR_8]);

 return -VAR_0;
}
