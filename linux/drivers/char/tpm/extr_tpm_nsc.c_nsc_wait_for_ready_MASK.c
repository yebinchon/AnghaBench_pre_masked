
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_nsc_priv {scalar_t__ base; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tpm_nsc_priv* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_7)
{
 struct tpm_nsc_priv *VAR_8 = FUNC_0(&VAR_7->dev);
 int VAR_9;
 unsigned long VAR_10;


 VAR_9 = FUNC_2(VAR_8->base + VAR_2);
 if (VAR_9 & VAR_3)
  VAR_9 = FUNC_2(VAR_8->base + VAR_1);
 if (VAR_9 & VAR_4)
  return 0;


 VAR_10 = VAR_6 + 100;
 do {
  FUNC_3(VAR_5);
  VAR_9 = FUNC_2(VAR_8->base + VAR_2);
  if (VAR_9 & VAR_3)
   VAR_9 = FUNC_2(VAR_8->base + VAR_1);
  if (VAR_9 & VAR_4)
   return 0;
 }
 while (FUNC_4(VAR_6, VAR_10));

 FUNC_1(&VAR_7->dev, "wait for ready failed\n");
 return -VAR_0;
}
