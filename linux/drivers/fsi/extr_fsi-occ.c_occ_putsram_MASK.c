
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
 size_t VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t,int ) ;
 size_t FUNC_5 (size_t,size_t) ;
 int FUNC_6 (int *,void const*,int ) ;
 int FUNC_7 (int ,int,int *,size_t,size_t*) ;
 int FUNC_8 (int ,int *,size_t,int *,size_t*) ;

__attribute__((used)) static int FUNC_9(struct occ *VAR_5, u32 VAR_6, const void *VAR_7,
         ssize_t VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = ((VAR_8 + 7) / 8) * 8;
 __be32 *VAR_14;
 int VAR_15;





 VAR_11 = VAR_3;
 VAR_9 = (VAR_13 >> 2) + 5;
 VAR_10 = FUNC_5(VAR_9, VAR_11);
 VAR_14 = FUNC_4(VAR_10 << 2, VAR_2);
 if (!VAR_14)
  return -VAR_1;





 VAR_14[0] = FUNC_1(VAR_9);
 VAR_14[1] = FUNC_1(VAR_4);
 VAR_14[2] = FUNC_1(1);
 VAR_14[3] = FUNC_1(VAR_6);
 VAR_14[4] = FUNC_1(VAR_13);

 FUNC_6(&VAR_14[5], VAR_7, VAR_8);

 VAR_15 = FUNC_8(VAR_5->sbefifo, VAR_14, VAR_9, VAR_14, &VAR_11);
 if (VAR_15)
  goto free;

 VAR_15 = FUNC_7(VAR_5->sbefifo, VAR_4,
      VAR_14, VAR_11, &VAR_11);
 if (VAR_15)
  goto free;

 if (VAR_11 != 1) {
  FUNC_2(VAR_5->dev, "SRAM write response length invalid: %zd\n",
   VAR_11);
  VAR_15 = -VAR_0;
 } else {
  VAR_12 = FUNC_0(VAR_14[0]);
  if (VAR_12 != VAR_13) {
   FUNC_2(VAR_5->dev,
    "SRAM write expected %d bytes got %zd\n",
    VAR_13, VAR_12);
   VAR_15 = -VAR_0;
  }
 }

free:

 if (VAR_15 > 0) {
  FUNC_2(VAR_5->dev, "SRAM write returned failure status: %08x\n",
   VAR_15);
  VAR_15 = -VAR_0;
 }

 FUNC_3(VAR_14);
 return VAR_15;
}
