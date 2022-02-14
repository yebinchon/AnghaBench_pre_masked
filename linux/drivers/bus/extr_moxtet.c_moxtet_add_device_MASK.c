
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moxtet_device {scalar_t__ idx; int id; TYPE_1__* moxtet; int dev; } ;
struct TYPE_2__ {int dev; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,struct moxtet_device*,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct moxtet_device *VAR_4)
{
 static DEFINE_MUTEX(VAR_5);
 int VAR_6;

 if (VAR_4->idx >= VAR_1 || VAR_4->id > 0xf)
  return -VAR_0;

 FUNC_3(&VAR_4->dev, "moxtet-%s.%u", FUNC_5(VAR_4->id),
       VAR_4->idx);

 FUNC_6(&VAR_5);

 VAR_6 = FUNC_0(&VAR_2, ((void*)0), VAR_4,
          VAR_3);
 if (VAR_6)
  goto done;

 VAR_6 = FUNC_4(&VAR_4->dev);
 if (VAR_6 < 0)
  FUNC_1(VAR_4->moxtet->dev, "can't add %s, status %d\n",
   FUNC_2(VAR_4->moxtet->dev), VAR_6);

done:
 FUNC_7(&VAR_5);
 return VAR_6;
}
