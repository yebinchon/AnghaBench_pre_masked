
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxtet_device {scalar_t__ moxtet; scalar_t__ id; scalar_t__ idx; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct moxtet_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, void *VAR_2)
{
 struct moxtet_device *VAR_3 = FUNC_0(VAR_1);
 struct moxtet_device *VAR_4 = VAR_2;

 if (VAR_3->moxtet == VAR_4->moxtet && VAR_3->id == VAR_4->id &&
     VAR_3->idx == VAR_4->idx)
  return -VAR_0;
 return 0;
}
