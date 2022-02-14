
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_digest {int digest; } ;
struct tpm_chip {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*,int ,int ) ;
 int FUNC_1 (struct tpm_chip*,int ,struct tpm_digest*,int *) ;
 struct tpm_chip* FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;

int FUNC_4(struct tpm_chip *VAR_2, u32 VAR_3,
   struct tpm_digest *VAR_4)
{
 int VAR_5;

 VAR_2 = FUNC_2(VAR_2);
 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->flags & VAR_1)
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0));
 else
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4->digest);

 FUNC_3(VAR_2);
 return VAR_5;
}
