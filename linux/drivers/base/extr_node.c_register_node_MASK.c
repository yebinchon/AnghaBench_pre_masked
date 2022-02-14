
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int groups; int release; int * bus; } ;
struct node {TYPE_1__ dev; } ;


 int FUNC_0 (struct node*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct node *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_3->dev.id = VAR_4;
 VAR_3->dev.bus = &VAR_2;
 VAR_3->dev.release = VAR_1;
 VAR_3->dev.groups = VAR_0;
 VAR_5 = FUNC_1(&VAR_3->dev);

 if (VAR_5)
  FUNC_3(&VAR_3->dev);
 else {
  FUNC_2(VAR_3);

  FUNC_0(VAR_3);
 }
 return VAR_5;
}
