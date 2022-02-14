
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_device {int index; int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,struct ib_device*,int ,int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_6, const char *VAR_7)
{
 static u32 VAR_8;
 int VAR_9;

 FUNC_4(&VAR_4);

 if (FUNC_5(VAR_7, '%'))
  VAR_9 = FUNC_1(VAR_6, VAR_7);
 else
  VAR_9 = FUNC_3(&VAR_6->dev, VAR_7);
 if (VAR_9)
  goto out;

 if (FUNC_0(FUNC_2(&VAR_6->dev))) {
  VAR_9 = -VAR_0;
  goto out;
 }
 FUNC_6(VAR_6->name, FUNC_2(&VAR_6->dev), VAR_2);

 VAR_9 = FUNC_8(&VAR_3, &VAR_6->index, VAR_6, VAR_5,
   &VAR_8, VAR_1);
 if (VAR_9 > 0)
  VAR_9 = 0;

out:
 FUNC_7(&VAR_4);
 return VAR_9;
}
