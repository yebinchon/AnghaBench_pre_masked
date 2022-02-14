
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vadc_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vadc_priv*,int ,int *) ;
 int FUNC_1 (struct vadc_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vadc_priv *VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_5 |= VAR_2;

 return FUNC_1(VAR_4, VAR_3, VAR_5);
}
