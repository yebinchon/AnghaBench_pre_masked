
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct tpm_chip*,int *,size_t) ;
 int FUNC_1 (struct tpm_chip*,int *,size_t) ;
 struct tpm_chip* FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;

int FUNC_4(struct tpm_chip *VAR_4, u8 *VAR_5, size_t VAR_6)
{
 int VAR_7;

 if (!VAR_5 || VAR_6 > VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_4);
 if (!VAR_4)
  return -VAR_1;

 if (VAR_4->flags & VAR_2)
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 else
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);

 FUNC_3(VAR_4);
 return VAR_7;
}
