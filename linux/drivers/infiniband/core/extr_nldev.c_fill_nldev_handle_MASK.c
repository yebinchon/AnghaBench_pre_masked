
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ib_device {int dev; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, struct ib_device *VAR_4)
{
 if (FUNC_2(VAR_3, VAR_1, VAR_4->index))
  return -VAR_0;
 if (FUNC_1(VAR_3, VAR_2,
      FUNC_0(&VAR_4->dev)))
  return -VAR_0;

 return 0;
}
