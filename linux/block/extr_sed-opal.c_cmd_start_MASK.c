
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {int comid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,struct opal_dev*,int const*,int ) ;
 int FUNC_1 (int*,struct opal_dev*,int ) ;
 int FUNC_2 (struct opal_dev*) ;
 int FUNC_3 (struct opal_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_4, const u8 *VAR_5, const u8 *VAR_6)
{
 int VAR_7 = 0;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4, VAR_4->comid);

 FUNC_1(&VAR_7, VAR_4, VAR_0);
 FUNC_0(&VAR_7, VAR_4, VAR_5, VAR_3);
 FUNC_0(&VAR_7, VAR_4, VAR_6, VAR_1);






 FUNC_1(&VAR_7, VAR_4, VAR_2);

 return VAR_7;
}
