
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypt_ctl {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct device *VAR_6 = &VAR_5->dev;
 FUNC_0(sizeof(struct crypt_ctl) != 64);
 VAR_4 = FUNC_1(VAR_6,
     VAR_2 * sizeof(struct crypt_ctl),
     &VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 return 0;
}
