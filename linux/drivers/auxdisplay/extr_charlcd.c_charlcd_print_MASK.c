
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; } ;
struct charlcd_priv {TYPE_1__ addr; } ;
struct charlcd {scalar_t__ bwidth; char* char_conv; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* write_data ) (struct charlcd*,char) ;} ;


 int FUNC_0 (struct charlcd*) ;
 struct charlcd_priv* FUNC_1 (struct charlcd*) ;
 int FUNC_2 (struct charlcd*,char) ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_0, char VAR_1)
{
 struct charlcd_priv *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->addr.x < VAR_0->bwidth) {
  if (VAR_0->char_conv)
   VAR_1 = VAR_0->char_conv[(unsigned char)VAR_1];
  VAR_0->ops->write_data(VAR_0, VAR_1);
  VAR_2->addr.x++;


  if (VAR_2->addr.x == VAR_0->bwidth)
   FUNC_0(VAR_0);
 }
}
