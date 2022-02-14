
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct moxtet_device {int idx; struct moxtet* moxtet; } ;
struct moxtet {int count; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct moxtet*,int*) ;
 struct moxtet_device* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_2)
{
 struct moxtet_device *VAR_3 = FUNC_1(VAR_2);
 struct moxtet *VAR_4 = VAR_3->moxtet;
 u8 VAR_5[VAR_1];
 int VAR_6;

 if (VAR_3->idx >= VAR_4->count)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_5[VAR_3->idx + 1] >> 4;
}
