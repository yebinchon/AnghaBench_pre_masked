
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_dev {int flags; int dev; scalar_t__ err; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct omap_aes_dev *VAR_1)
{
 int VAR_2;

 if (!(VAR_1->flags & VAR_0)) {
  VAR_1->flags |= VAR_0;
  VAR_1->err = 0;
 }

 VAR_2 = FUNC_1(VAR_1->dev);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "failed to get sync: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
