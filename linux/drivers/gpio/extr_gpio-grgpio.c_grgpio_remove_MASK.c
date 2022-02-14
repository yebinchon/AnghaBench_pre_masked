
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int bgpio_lock; } ;
struct grgpio_priv {TYPE_2__ gc; scalar_t__ domain; TYPE_1__* uirqs; } ;
struct TYPE_3__ {scalar_t__ refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 struct grgpio_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct grgpio_priv *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_3->gc.bgpio_lock, VAR_4);

 if (VAR_3->domain) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (VAR_3->uirqs[VAR_5].refcnt != 0) {
    VAR_6 = -VAR_0;
    goto out;
   }
  }
 }

 FUNC_0(&VAR_3->gc);

 if (VAR_3->domain)
  FUNC_1(VAR_3->domain);

out:
 FUNC_4(&VAR_3->gc.bgpio_lock, VAR_4);

 return VAR_6;
}
