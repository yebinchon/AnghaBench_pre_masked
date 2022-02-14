
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_tis_data {int locality; } ;
struct tpm_chip {int flags; unsigned long timeout_a; unsigned long timeout_d; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct tpm_tis_data*,int ,int*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_5)
{
 struct tpm_tis_data *VAR_6 = FUNC_1(&VAR_5->dev);
 unsigned long VAR_7;
 int VAR_8, VAR_9;
 u32 VAR_10;


 if (VAR_5->flags & VAR_1)
  VAR_7 = VAR_4 + VAR_5->timeout_a;
 else
  VAR_7 = VAR_4 + VAR_5->timeout_d;
 do {
  VAR_9 = FUNC_3(VAR_6, FUNC_0(VAR_6->locality), &VAR_10);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8 = (VAR_10 >> 8) & 0xFFFF;
  if (VAR_8)
   return VAR_8;
  FUNC_4(VAR_3, VAR_2);
 } while (FUNC_2(VAR_4, VAR_7));
 return -VAR_0;
}
