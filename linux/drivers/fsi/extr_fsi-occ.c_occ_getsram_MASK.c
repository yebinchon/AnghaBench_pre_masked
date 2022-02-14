
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct occ {int dev; int sbefifo; } ;
typedef int ssize_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t,int ) ;
 int FUNC_5 (void*,int *,int ) ;
 int FUNC_6 (int ,int,int *,size_t,size_t*) ;
 int FUNC_7 (int ,int *,int,int *,size_t*) ;

__attribute__((used)) static int FUNC_8(struct occ *VAR_5, u32 VAR_6, void *VAR_7, ssize_t VAR_8)
{
 u32 VAR_9 = ((VAR_8 + 7) / 8) * 8;
 size_t VAR_10, VAR_11;
 __be32 *VAR_12, VAR_13[5];
 int VAR_14;





 VAR_13[0] = FUNC_1(0x5);
 VAR_13[1] = FUNC_1(VAR_4);
 VAR_13[2] = FUNC_1(1);
 VAR_13[3] = FUNC_1(VAR_6);
 VAR_13[4] = FUNC_1(VAR_9);

 VAR_10 = (VAR_9 >> 2) + VAR_3;
 VAR_12 = FUNC_4(VAR_10 << 2, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_14 = FUNC_7(VAR_5->sbefifo, VAR_13, 5, VAR_12, &VAR_10);
 if (VAR_14)
  goto free;

 VAR_14 = FUNC_6(VAR_5->sbefifo, VAR_4,
      VAR_12, VAR_10, &VAR_10);
 if (VAR_14)
  goto free;

 VAR_11 = FUNC_0(VAR_12[VAR_10 - 1]);
 if (VAR_11 != VAR_9) {
  FUNC_2(VAR_5->dev, "SRAM read expected %d bytes got %zd\n",
   VAR_9, VAR_11);
  VAR_14 = -VAR_0;
 } else {
  FUNC_5(VAR_7, VAR_12, VAR_8);
 }

free:

 if (VAR_14 > 0) {
  FUNC_2(VAR_5->dev, "SRAM read returned failure status: %08x\n",
   VAR_14);
  VAR_14 = -VAR_0;
 }

 FUNC_3(VAR_12);
 return VAR_14;
}
