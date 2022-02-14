
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda9950_priv {int open; TYPE_1__* glue; } ;
struct TYPE_2__ {int (* open ) (int ) ;int data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tda9950_priv *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->glue && VAR_0->glue->open)
  VAR_1 = VAR_0->glue->open(VAR_0->glue->data);

 VAR_0->open = 1;

 return VAR_1;
}
