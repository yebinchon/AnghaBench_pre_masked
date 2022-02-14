
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct deferred_device {int node; struct resource* parent; struct amba_device* dev; } ;
struct amba_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amba_device*,struct resource*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct deferred_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct amba_device *VAR_7, struct resource *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7, VAR_8);

 if (VAR_9 == -VAR_2) {
  struct deferred_device *VAR_10;

  VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_3);
  if (!VAR_10)
   return -VAR_1;

  VAR_10->dev = VAR_7;
  VAR_10->parent = VAR_8;
  VAR_9 = 0;

  FUNC_4(&VAR_5);

  if (FUNC_3(&VAR_4))
   FUNC_6(&VAR_6,
           VAR_0);
  FUNC_2(&VAR_10->node, &VAR_4);

  FUNC_5(&VAR_5);
 }
 return VAR_9;
}
