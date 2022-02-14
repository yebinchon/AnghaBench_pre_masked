
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int name; } ;
struct adm5120_if_priv {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct adm5120_if_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_8();
 VAR_10 &= VAR_3;
 if (!VAR_10)
  return VAR_1;
 FUNC_6(VAR_10);

 if (VAR_10 & (VAR_6 | VAR_5))
  FUNC_1(VAR_2);

 if (VAR_10 & VAR_7)
  FUNC_2();


 return VAR_0;
}
