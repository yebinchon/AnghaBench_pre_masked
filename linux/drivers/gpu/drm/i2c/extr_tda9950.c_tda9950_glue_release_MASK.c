
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda9950_priv {int open; TYPE_1__* glue; } ;
struct TYPE_2__ {int data; int (* release ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tda9950_priv *VAR_0)
{
 VAR_0->open = 0;

 if (VAR_0->glue && VAR_0->glue->release)
  VAR_0->glue->release(VAR_0->glue->data);
}
