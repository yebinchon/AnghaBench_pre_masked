
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vadc_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct vadc_priv*,int ,int *) ;
 int FUNC_2 (struct vadc_priv*) ;

__attribute__((used)) static int FUNC_3(struct vadc_priv *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_9 = VAR_7 / VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_11 = FUNC_1(VAR_6, VAR_3, &VAR_10);
  if (VAR_11)
   return VAR_11;

  VAR_10 &= VAR_5;
  if (VAR_10 == VAR_4)
   return 0;

  FUNC_0(VAR_2, VAR_1);
 }

 FUNC_2(VAR_6);

 return -VAR_0;
}
