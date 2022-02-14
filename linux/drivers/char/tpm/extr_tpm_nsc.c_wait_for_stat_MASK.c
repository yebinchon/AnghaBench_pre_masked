
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_nsc_priv {scalar_t__ base; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct tpm_nsc_priv* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_5, u8 VAR_6, u8 VAR_7, u8 * VAR_8)
{
 struct tpm_nsc_priv *VAR_9 = FUNC_0(&VAR_5->dev);
 unsigned long VAR_10;


 *VAR_8 = FUNC_1(VAR_9->base + VAR_2);
 if ((*VAR_8 & VAR_6) == VAR_7)
  return 0;


 VAR_10 = VAR_4 + 10 * VAR_1;
 do {
  FUNC_2(VAR_3);
  *VAR_8 = FUNC_1(VAR_9->base + 1);
  if ((*VAR_8 & VAR_6) == VAR_7)
   return 0;
 }
 while (FUNC_3(VAR_4, VAR_10));

 return -VAR_0;
}
