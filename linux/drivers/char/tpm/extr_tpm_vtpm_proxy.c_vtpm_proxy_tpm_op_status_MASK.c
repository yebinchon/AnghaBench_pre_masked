
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct proxy_dev {scalar_t__ resp_len; } ;


 int VAR_0 ;
 struct proxy_dev* FUNC_0 (int *) ;

__attribute__((used)) static u8 FUNC_1(struct tpm_chip *VAR_1)
{
 struct proxy_dev *VAR_2 = FUNC_0(&VAR_1->dev);

 if (VAR_2->resp_len)
  return VAR_0;

 return 0;
}
