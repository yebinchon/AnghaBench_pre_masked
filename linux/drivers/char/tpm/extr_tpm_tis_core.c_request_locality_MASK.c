
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_tis_data {int int_queue; } ;
struct tpm_chip {unsigned long timeout_a; int flags; int dev; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct tpm_chip*,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 struct tpm_tis_data* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int ) ;
 long FUNC_7 (struct tpm_tis_data*,int ,int ) ;
 long FUNC_8 (int ,scalar_t__,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct tpm_chip *VAR_7, int VAR_8)
{
 struct tpm_tis_data *VAR_9 = FUNC_3(&VAR_7->dev);
 unsigned long VAR_10, VAR_11;
 long VAR_12;

 if (FUNC_1(VAR_7, VAR_8))
  return VAR_8;

 VAR_12 = FUNC_7(VAR_9, FUNC_0(VAR_8), VAR_2);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10 = VAR_6 + VAR_7->timeout_a;

 if (VAR_7->flags & VAR_3) {
again:
  VAR_11 = VAR_10 - VAR_6;
  if ((long)VAR_11 <= 0)
   return -1;
  VAR_12 = FUNC_8(VAR_9->int_queue,
            (FUNC_1
             (VAR_7, VAR_8)),
            VAR_11);
  if (VAR_12 > 0)
   return VAR_8;
  if (VAR_12 == -VAR_0 && FUNC_4(VAR_5)) {
   FUNC_2(VAR_1);
   goto again;
  }
 } else {

  do {
   if (FUNC_1(VAR_7, VAR_8))
    return VAR_8;
   FUNC_6(VAR_4);
  } while (FUNC_5(VAR_6, VAR_10));
 }
 return -1;
}
