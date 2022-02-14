
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*,int ) ;

__attribute__((used)) static int FUNC_6(struct tpm_chip *VAR_11, u8 * VAR_12, size_t VAR_13)
{
 int VAR_14;
 int VAR_15;
 u32 VAR_16 = 0;
 VAR_10 = 0;

recv_begin:

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_15 = FUNC_5(VAR_11, VAR_2);
  if (VAR_15)
   return -VAR_0;
  VAR_12[VAR_14] = FUNC_2(VAR_1);
 }

 if (VAR_12[0] != VAR_9) {
  FUNC_0(&VAR_11->dev,
   "Wrong transport protocol implementation!\n");
  return -VAR_0;
 }

 if (VAR_12[1] == VAR_3) {

  VAR_16 = ((VAR_12[2] << 8) | VAR_12[3]);

  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
   FUNC_5(VAR_11, VAR_2);
   VAR_12[VAR_14] = FUNC_2(VAR_1);
  }

  if ((VAR_16 == 0x6D00) && (VAR_12[1] == 0x80)) {
   FUNC_0(&VAR_11->dev, "Error handling on vendor layer!\n");
   return -VAR_0;
  }

  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++)
   VAR_12[VAR_14] = VAR_12[VAR_14 + 6];

  VAR_16 = VAR_16 - 6;
  return VAR_16;
 }

 if (VAR_12[1] == VAR_5) {
  FUNC_1(&VAR_11->dev, "WTX-package received\n");
  if (VAR_10 < VAR_8) {
   FUNC_3(VAR_11);
   goto recv_begin;
  } else {
   FUNC_4(VAR_11);
   goto recv_begin;
  }
 }

 if (VAR_12[1] == VAR_6) {
  FUNC_1(&VAR_11->dev, "WTX-abort acknowledged\n");
  return VAR_16;
 }

 if (VAR_12[1] == VAR_4) {
  FUNC_0(&VAR_11->dev, "ERROR-package received:\n");
  if (VAR_12[4] == VAR_7)
   FUNC_0(&VAR_11->dev,
    "-> Negative acknowledgement"
    " - retransmit command!\n");
  return -VAR_0;
 }
 return -VAR_0;
}
