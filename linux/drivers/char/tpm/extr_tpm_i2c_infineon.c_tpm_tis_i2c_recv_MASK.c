
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct tpm_chip {int dev; int timeout_c; } ;
typedef int __be32 ;
struct TYPE_2__ {int locality; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct tpm_chip*,int *,size_t) ;
 int FUNC_3 (struct tpm_chip*,int ,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct tpm_chip*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct tpm_chip *VAR_8, u8 *VAR_9, size_t VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 u32 VAR_13;

 if (VAR_10 < VAR_4) {
  VAR_11 = -VAR_0;
  goto out;
 }


 VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_4);
 if (VAR_11 < VAR_4) {
  FUNC_1(&VAR_8->dev, "Unable to read header\n");
  goto out;
 }

 VAR_13 = FUNC_0(*(__be32 *)(VAR_9 + 2));
 if (((size_t) VAR_13 > VAR_10) || (VAR_13 < VAR_4)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 += FUNC_2(VAR_8, &VAR_9[VAR_4],
     VAR_13 - VAR_4);
 if (VAR_11 < VAR_13) {
  FUNC_1(&VAR_8->dev, "Unable to read remainder of result\n");
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_6(VAR_8, VAR_6, VAR_8->timeout_c, &VAR_12);
 if (VAR_12 & VAR_5) {
  FUNC_1(&VAR_8->dev, "Error left over data\n");
  VAR_11 = -VAR_0;
  goto out;
 }

out:
 FUNC_4(VAR_8);



 FUNC_5(VAR_3, VAR_2);
 FUNC_3(VAR_8, VAR_7.locality, 0);
 return VAR_11;
}
