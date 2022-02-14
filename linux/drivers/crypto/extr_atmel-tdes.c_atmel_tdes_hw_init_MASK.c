
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_dev {int flags; scalar_t__ err; int iclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_tdes_dev*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct atmel_tdes_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->iclk);
 if (VAR_4)
  return VAR_4;

 if (!(VAR_3->flags & VAR_2)) {
  FUNC_0(VAR_3, VAR_0, VAR_1);
  VAR_3->flags |= VAR_2;
  VAR_3->err = 0;
 }

 return 0;
}
