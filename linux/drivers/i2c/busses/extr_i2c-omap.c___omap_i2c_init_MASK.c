
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_i2c_dev {scalar_t__ rev; scalar_t__ iestate; scalar_t__ westate; scalar_t__ sclhstate; scalar_t__ scllstate; scalar_t__ pscstate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct omap_i2c_dev*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct omap_i2c_dev *VAR_8)
{

 FUNC_0(VAR_8, VAR_1, 0);


 FUNC_0(VAR_8, VAR_3, VAR_8->pscstate);


 FUNC_0(VAR_8, VAR_6, VAR_8->scllstate);
 FUNC_0(VAR_8, VAR_5, VAR_8->sclhstate);
 if (VAR_8->rev >= VAR_4)
  FUNC_0(VAR_8, VAR_7, VAR_8->westate);


 FUNC_0(VAR_8, VAR_1, VAR_0);
 if (VAR_8->iestate)
  FUNC_0(VAR_8, VAR_2, VAR_8->iestate);
}
