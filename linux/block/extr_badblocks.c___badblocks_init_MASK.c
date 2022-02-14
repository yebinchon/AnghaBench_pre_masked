
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct badblocks {int shift; int lock; int page; scalar_t__ count; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct badblocks *VAR_4,
  int VAR_5)
{
 VAR_4->dev = VAR_3;
 VAR_4->count = 0;
 if (VAR_5)
  VAR_4->shift = 0;
 else
  VAR_4->shift = -1;
 if (VAR_3)
  VAR_4->page = FUNC_0(VAR_3, VAR_2, VAR_1);
 else
  VAR_4->page = FUNC_1(VAR_2, VAR_1);
 if (!VAR_4->page) {
  VAR_4->shift = -1;
  return -VAR_0;
 }
 FUNC_2(&VAR_4->lock);

 return 0;
}
