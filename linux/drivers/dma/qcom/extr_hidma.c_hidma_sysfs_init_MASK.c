
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct hidma_dev {int chid_attrs; TYPE_1__ ddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hidma_dev*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct hidma_dev *VAR_2)
{
 VAR_2->chid_attrs = FUNC_1(VAR_2, "chid", VAR_1);
 if (!VAR_2->chid_attrs)
  return -VAR_0;

 return FUNC_0(VAR_2->ddev.dev, VAR_2->chid_attrs);
}
