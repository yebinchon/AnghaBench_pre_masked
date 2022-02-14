
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bh_priv {unsigned long seen; } ;
struct gpio_keys_button_data {TYPE_1__* b; struct bh_priv bh; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int code; } ;


 int FUNC_0 (char*,unsigned int,int ,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,unsigned long,int) ;
 TYPE_2__* VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static void FUNC_3(struct gpio_keys_button_data *VAR_5,
      unsigned int VAR_6, int VAR_7)
{
 struct bh_priv *VAR_8 = &VAR_5->bh;
 unsigned long VAR_9 = VAR_4;
 int VAR_10;

 FUNC_0("event type=%u, code=%u, value=%d\n", VAR_6, VAR_5->b->code, VAR_7);

 if ((VAR_6 != VAR_0) && (VAR_6 != VAR_1))
  return;

 VAR_10 = FUNC_1(VAR_5->b->code);
 if (VAR_10 < 0)
  return;

 FUNC_2(VAR_3[VAR_10].name, VAR_6,
   (VAR_9 - VAR_8->seen) / VAR_2, VAR_7);
 VAR_8->seen = VAR_9;
}
