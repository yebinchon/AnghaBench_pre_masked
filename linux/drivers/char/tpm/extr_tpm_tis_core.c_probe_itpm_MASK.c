
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct tpm_tis_data {int flags; int locality; } ;
struct tpm_chip {int dev; } ;
typedef int cmd_getticks ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct tpm_chip*,int ) ;
 scalar_t__ FUNC_4 (struct tpm_chip*,int ) ;
 int FUNC_5 (struct tpm_tis_data*,int ,scalar_t__*) ;
 int FUNC_6 (struct tpm_chip*) ;
 int FUNC_7 (struct tpm_chip*,int const*,size_t) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_4)
{
 struct tpm_tis_data *VAR_5 = FUNC_1(&VAR_4->dev);
 int VAR_6 = 0;
 static const u8 VAR_7[] = {
  0x00, 0xc1, 0x00, 0x00, 0x00, 0x0a,
  0x00, 0x00, 0x00, 0xf1
 };
 size_t VAR_8 = sizeof(VAR_7);
 u16 VAR_9;

 if (VAR_5->flags & VAR_2)
  return 0;

 VAR_6 = FUNC_5(VAR_5, FUNC_0(0), &VAR_9);
 if (VAR_6 < 0)
  return VAR_6;


 if (VAR_9 != VAR_3)
  return 0;

 if (FUNC_4(VAR_4, 0) != 0)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4, VAR_7, VAR_8);
 if (VAR_6 == 0)
  goto out;

 FUNC_6(VAR_4);

 VAR_5->flags |= VAR_2;

 VAR_6 = FUNC_7(VAR_4, VAR_7, VAR_8);
 if (VAR_6 == 0)
  FUNC_2(&VAR_4->dev, "Detected an iTPM.\n");
 else {
  VAR_5->flags &= ~VAR_2;
  VAR_6 = -VAR_1;
 }

out:
 FUNC_6(VAR_4);
 FUNC_3(VAR_4, VAR_5->locality);

 return VAR_6;
}
