
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int * bus; int parent; } ;
struct moxtet_device {TYPE_1__ dev; struct moxtet* moxtet; } ;
struct moxtet {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct moxtet_device* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct moxtet_device *
FUNC_4(struct moxtet *VAR_3)
{
 struct moxtet_device *VAR_4;

 if (!FUNC_1(VAR_3->dev))
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_3(VAR_3->dev);
  return ((void*)0);
 }

 VAR_4->moxtet = VAR_3;
 VAR_4->dev.parent = VAR_3->dev;
 VAR_4->dev.bus = &VAR_1;
 VAR_4->dev.release = VAR_2;

 FUNC_0(&VAR_4->dev);

 return VAR_4;
}
