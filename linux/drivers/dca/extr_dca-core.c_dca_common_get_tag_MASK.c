
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct dca_provider {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_tag ) (struct dca_provider*,struct device*,int) ;} ;


 int VAR_0 ;
 struct dca_provider* FUNC_0 (struct device*) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct dca_provider*,struct device*,int) ;

__attribute__((used)) static u8 FUNC_4(struct device *VAR_2, int VAR_3)
{
 struct dca_provider *VAR_4;
 u8 VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_1, VAR_6);

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4) {
  FUNC_2(&VAR_1, VAR_6);
  return -VAR_0;
 }
 VAR_5 = VAR_4->ops->get_tag(VAR_4, VAR_2, VAR_3);

 FUNC_2(&VAR_1, VAR_6);
 return VAR_5;
}
