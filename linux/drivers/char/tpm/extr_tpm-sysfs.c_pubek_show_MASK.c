
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_readpubek_out {int* algorithm; int* encscheme; int* sigscheme; int* parameters; int* modulus; int keysize; } ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int * data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int anti_replay ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**,int ,int) ;
 int FUNC_2 (char*,char*,...) ;
 struct tpm_chip* FUNC_3 (struct device*) ;
 int FUNC_4 (struct tpm_buf*,char*,int) ;
 int FUNC_5 (struct tpm_buf*) ;
 scalar_t__ FUNC_6 (struct tpm_buf*,int ,int ) ;
 int FUNC_7 (struct tpm_chip*) ;
 scalar_t__ FUNC_8 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;
 scalar_t__ FUNC_9 (struct tpm_chip*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3, struct device_attribute *VAR_4,
     char *VAR_5)
{
 struct tpm_buf VAR_6;
 struct tpm_readpubek_out *VAR_7;
 int VAR_8;
 char *VAR_9 = VAR_5;
 struct tpm_chip *VAR_10 = FUNC_3(VAR_3);
 char VAR_11[20];

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 if (FUNC_9(VAR_10))
  return 0;

 if (FUNC_6(&VAR_6, VAR_2, VAR_1))
  goto out_ops;

 FUNC_4(&VAR_6, VAR_11, sizeof(VAR_11));

 if (FUNC_8(VAR_10, &VAR_6, VAR_0,
        "attempting to read the PUBEK"))
  goto out_buf;

 VAR_7 = (struct tpm_readpubek_out *)&VAR_6.data[10];
 VAR_9 +=
     FUNC_2(VAR_9,
      "Algorithm: %02X %02X %02X %02X\n"
      "Encscheme: %02X %02X\n"
      "Sigscheme: %02X %02X\n"
      "Parameters: %02X %02X %02X %02X "
      "%02X %02X %02X %02X "
      "%02X %02X %02X %02X\n"
      "Modulus length: %d\n"
      "Modulus:\n",
      VAR_7->algorithm[0], VAR_7->algorithm[1], VAR_7->algorithm[2],
      VAR_7->algorithm[3],
      VAR_7->encscheme[0], VAR_7->encscheme[1],
      VAR_7->sigscheme[0], VAR_7->sigscheme[1],
      VAR_7->parameters[0], VAR_7->parameters[1],
      VAR_7->parameters[2], VAR_7->parameters[3],
      VAR_7->parameters[4], VAR_7->parameters[5],
      VAR_7->parameters[6], VAR_7->parameters[7],
      VAR_7->parameters[8], VAR_7->parameters[9],
      VAR_7->parameters[10], VAR_7->parameters[11],
      FUNC_0(VAR_7->keysize));

 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_9 += FUNC_2(VAR_9, "%02X ", VAR_7->modulus[VAR_8]);
  if ((VAR_8 + 1) % 16 == 0)
   VAR_9 += FUNC_2(VAR_9, "\n");
 }

out_buf:
 FUNC_5(&VAR_6);
out_ops:
 FUNC_7(VAR_10);
 return VAR_9 - VAR_5;
}
