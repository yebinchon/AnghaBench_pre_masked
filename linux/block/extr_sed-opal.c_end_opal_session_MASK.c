
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int comid; } ;


 int VAR_0 ;
 int FUNC_0 (int*,struct opal_dev*,int ) ;
 int FUNC_1 (struct opal_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct opal_dev*,int ) ;
 int FUNC_3 (struct opal_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(VAR_2);
 FUNC_3(VAR_2, VAR_2->comid);
 FUNC_0(&VAR_4, VAR_2, VAR_0);

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_2(VAR_2, VAR_1);
}
