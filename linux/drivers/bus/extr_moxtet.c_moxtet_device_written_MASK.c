
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxtet_device {scalar_t__ idx; struct moxtet* moxtet; } ;
struct moxtet {scalar_t__ count; int* tx; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct moxtet_device* FUNC_0 (struct device*) ;

int FUNC_1(struct device *VAR_1)
{
 struct moxtet_device *VAR_2 = FUNC_0(VAR_1);
 struct moxtet *VAR_3 = VAR_2->moxtet;

 if (VAR_2->idx >= VAR_3->count)
  return -VAR_0;

 return VAR_3->tx[VAR_3->count - VAR_2->idx];
}
