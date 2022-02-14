
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tpm_chip {int timeout_c; int timeout_b; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int locality; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 size_t VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (struct tpm_chip*,int ,int ) ;
 scalar_t__ FUNC_5 (struct tpm_chip*,int ) ;
 TYPE_1__ VAR_12 ;
 int FUNC_6 (struct tpm_chip*) ;
 int FUNC_7 (struct tpm_chip*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct tpm_chip*,int,int ,int*) ;

__attribute__((used)) static int FUNC_10(struct tpm_chip *VAR_13, u8 *VAR_14, size_t VAR_15)
{
 int VAR_16, VAR_17;
 ssize_t VAR_18;
 size_t VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21 = VAR_10;

 if (VAR_15 > VAR_7)
  return -VAR_0;

 if (FUNC_5(VAR_13, 0) < 0)
  return -VAR_1;

 VAR_17 = FUNC_7(VAR_13);
 if ((VAR_17 & VAR_8) == 0) {
  FUNC_6(VAR_13);
  if (FUNC_9
      (VAR_13, VAR_8,
       VAR_13->timeout_b, &VAR_17) < 0) {
   VAR_16 = -VAR_3;
   goto out_err;
  }
 }

 while (VAR_19 < VAR_15 - 1) {
  VAR_18 = FUNC_2(VAR_13);


  if (VAR_18 < 0)
   return VAR_18;

  if (VAR_18 > (VAR_15 - 1 - VAR_19))
   VAR_18 = VAR_15 - 1 - VAR_19;

  VAR_16 = FUNC_3(FUNC_0(VAR_12.locality),
       &(VAR_14[VAR_19]), VAR_18);
  if (VAR_16 == 0)
   VAR_19 += VAR_18;
  else if (VAR_16 < 0)
   VAR_20++;


  if (VAR_20 > VAR_4) {
   VAR_16 = -VAR_2;
   goto out_err;
  }

  FUNC_9(VAR_13, VAR_11,
         VAR_13->timeout_c, &VAR_17);

  if ((VAR_17 & VAR_9) == 0) {
   VAR_16 = -VAR_2;
   goto out_err;
  }
 }


 FUNC_3(FUNC_0(VAR_12.locality), &(VAR_14[VAR_19]), 1);
 FUNC_9(VAR_13, VAR_11, VAR_13->timeout_c, &VAR_17);
 if ((VAR_17 & VAR_9) != 0) {
  VAR_16 = -VAR_2;
  goto out_err;
 }


 FUNC_3(FUNC_1(VAR_12.locality), &VAR_21, 1);

 return 0;
out_err:
 FUNC_6(VAR_13);



 FUNC_8(VAR_6, VAR_5);
 FUNC_4(VAR_13, VAR_12.locality, 0);
 return VAR_16;
}
