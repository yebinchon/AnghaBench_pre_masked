
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct tpm_tis_data {int int_queue; } ;
struct tpm_chip {int dev; int timeout_c; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct tpm_tis_data* FUNC_2 (int *) ;
 int FUNC_3 (struct tpm_chip*,int *,size_t) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*) ;
 scalar_t__ FUNC_6 (struct tpm_chip*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct tpm_chip *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 struct tpm_tis_data *VAR_8 = FUNC_2(&VAR_5->dev);
 int VAR_9 = 0;
 int VAR_10;
 u32 VAR_11;

 if (VAR_7 < VAR_2) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_2);

 if (VAR_9 < VAR_2) {
  FUNC_1(&VAR_5->dev, "Unable to read header\n");
  goto out;
 }

 VAR_11 = FUNC_0(*(__be32 *) (VAR_6 + 2));
 if (VAR_11 > VAR_7 || VAR_11 < VAR_2) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 += FUNC_3(VAR_5, &VAR_6[VAR_2],
     VAR_11 - VAR_2);
 if (VAR_9 < VAR_11) {
  FUNC_1(&VAR_5->dev, "Unable to read remainder of result\n");
  VAR_9 = -VAR_1;
  goto out;
 }

 if (FUNC_6(VAR_5, VAR_4, VAR_5->timeout_c,
    &VAR_8->int_queue, 0) < 0) {
  VAR_9 = -VAR_1;
  goto out;
 }
 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10 & VAR_3) {
  FUNC_1(&VAR_5->dev, "Error left over data\n");
  VAR_9 = -VAR_0;
  goto out;
 }

out:
 FUNC_4(VAR_5);
 return VAR_9;
}
