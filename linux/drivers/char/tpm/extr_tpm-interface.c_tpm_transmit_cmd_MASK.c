
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_header {int return_code; } ;
struct tpm_chip {int dev; } ;
struct tpm_buf {scalar_t__ data; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,char const*) ;
 scalar_t__ FUNC_2 (struct tpm_chip*,scalar_t__,int ) ;

ssize_t FUNC_3(struct tpm_chip *VAR_6, struct tpm_buf *VAR_7,
    size_t VAR_8, const char *VAR_9)
{
 const struct tpm_header *VAR_10 = (struct tpm_header *)VAR_7->data;
 int VAR_11;
 ssize_t VAR_12;

 VAR_12 = FUNC_2(VAR_6, VAR_7->data, VAR_1);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = FUNC_0(VAR_10->return_code);
 if (VAR_11 != 0 && VAR_11 != VAR_4 && VAR_11 != VAR_3
     && VAR_11 != VAR_2 && VAR_9)
  FUNC_1(&VAR_6->dev, "A TPM error (%d) occurred %s\n", VAR_11,
   VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_12 < VAR_8 + VAR_5)
  return -VAR_0;

 return 0;
}
