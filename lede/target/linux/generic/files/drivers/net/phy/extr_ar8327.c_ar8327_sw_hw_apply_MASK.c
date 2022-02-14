
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_data {scalar_t__* eee; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_3 (struct switch_dev*) ;
 struct ar8xxx_priv* FUNC_4 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_5(struct switch_dev *VAR_2)
{
 struct ar8xxx_priv *VAR_3 = FUNC_4(VAR_2);
 const struct ar8327_data *VAR_4 = VAR_3->chip_data;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  return VAR_5;

 for (VAR_6=0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4->eee[VAR_6])
   FUNC_1(VAR_3, VAR_0,
          FUNC_0(VAR_6));
  else
   FUNC_2(VAR_3, VAR_0,
          FUNC_0(VAR_6));
 }

 return 0;
}
