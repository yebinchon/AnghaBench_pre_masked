
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tpm_chip {int dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct tpm_chip*,unsigned char*,size_t) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_4, unsigned char *VAR_5,
       size_t VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;

 if (!VAR_4)
  return -VAR_0;

 if (VAR_6 < VAR_3) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_3);
 if (VAR_7 < VAR_3) {
  FUNC_1(&VAR_4->dev, "Unable to read header\n");
  goto out;
 }

 VAR_8 = FUNC_0(*(__be32 *)(VAR_5 + 2));
 if (VAR_8 > VAR_6 || VAR_8 < VAR_3) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 += FUNC_2(VAR_4, &VAR_5[VAR_3],
   VAR_8 - VAR_3);
 if (VAR_7 < VAR_8) {
  FUNC_1(&VAR_4->dev, "Unable to read remainder of result\n");
  VAR_7 = -VAR_2;
 }

out:
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 return VAR_7;
}
