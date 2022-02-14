
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxtet_device {int idx; int dev; int id; } ;
struct moxtet {int count; int dev; int * modules; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct moxtet_device*) ;
 struct moxtet_device* FUNC_2 (struct moxtet*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct moxtet *VAR_1)
{
 struct moxtet_device *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->count; ++VAR_3) {
  VAR_2 = FUNC_2(VAR_1);
  if (!VAR_2) {
   FUNC_0(VAR_1->dev, "Moxtet device %u alloc error\n",
    VAR_3);
   continue;
  }

  VAR_2->idx = VAR_3;
  VAR_2->id = VAR_1->modules[VAR_3];

  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4 && VAR_4 != -VAR_0) {
   FUNC_3(&VAR_2->dev);
   FUNC_0(VAR_1->dev,
    "Moxtet device %u register error: %i\n", VAR_3,
    VAR_4);
  }
 }
}
