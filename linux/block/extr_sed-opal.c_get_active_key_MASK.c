
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid ;
typedef int u8 ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct opal_dev*,int *,int ) ;
 int FUNC_2 (struct opal_dev*) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_2, void *VAR_3)
{
 u8 VAR_4[VAR_1];
 int VAR_5;
 u8 *VAR_6 = VAR_3;

 VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4), *VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_2);
}
