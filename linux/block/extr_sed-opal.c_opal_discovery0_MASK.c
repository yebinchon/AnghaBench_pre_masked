
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int comid; int resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct opal_dev*) ;
 int FUNC_2 (struct opal_dev*) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2->resp, 0, VAR_0);
 VAR_2->comid = VAR_1;
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2);
}
