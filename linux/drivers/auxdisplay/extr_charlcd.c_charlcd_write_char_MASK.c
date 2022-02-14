
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t len; char* buf; } ;
struct TYPE_5__ {int y; int x; } ;
struct charlcd_priv {TYPE_3__ esc_seq; TYPE_2__ addr; } ;
struct charlcd {int height; TYPE_1__* ops; int bwidth; } ;
struct TYPE_4__ {int (* write_data ) (struct charlcd*,char) ;int (* write_cmd ) (struct charlcd*,int ) ;} ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct charlcd*) ;
 int FUNC_1 (struct charlcd*) ;
 int FUNC_2 (struct charlcd*) ;
 int FUNC_3 (struct charlcd*,char) ;
 struct charlcd_priv* FUNC_4 (struct charlcd*) ;
 int FUNC_5 (struct charlcd*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (struct charlcd*,int ) ;
 int FUNC_8 (struct charlcd*,char) ;
 int FUNC_9 (struct charlcd*,int ) ;
 int FUNC_10 (struct charlcd*,char) ;

__attribute__((used)) static void FUNC_11(struct charlcd *VAR_2, char VAR_3)
{
 struct charlcd_priv *VAR_4 = FUNC_4(VAR_2);


 if ((VAR_3 != '\n') && VAR_4->esc_seq.len >= 0) {

  VAR_4->esc_seq.buf[VAR_4->esc_seq.len++] = VAR_3;
  VAR_4->esc_seq.buf[VAR_4->esc_seq.len] = '\0';
 } else {

  VAR_4->esc_seq.len = -1;

  switch (VAR_3) {
  case 128:

   VAR_4->esc_seq.len = 0;
   VAR_4->esc_seq.buf[VAR_4->esc_seq.len] = '\0';
   break;
  case '\b':

   if (VAR_4->addr.x > 0) {




    if (VAR_4->addr.x < VAR_2->bwidth)

     VAR_2->ops->write_cmd(VAR_2, VAR_0);
    VAR_4->addr.x--;
   }

   VAR_2->ops->write_data(VAR_2, ' ');

   VAR_2->ops->write_cmd(VAR_2, VAR_0);
   break;
  case '\f':

   FUNC_0(VAR_2);
   break;
  case '\n':




   for (; VAR_4->addr.x < VAR_2->bwidth; VAR_4->addr.x++)
    VAR_2->ops->write_data(VAR_2, ' ');
   VAR_4->addr.x = 0;
   VAR_4->addr.y = (VAR_4->addr.y + 1) % VAR_2->height;
   FUNC_1(VAR_2);
   break;
  case '\r':

   VAR_4->addr.x = 0;
   FUNC_1(VAR_2);
   break;
  case '\t':

   FUNC_3(VAR_2, ' ');
   break;
  default:

   FUNC_3(VAR_2, VAR_3);
   break;
  }
 }





 if (VAR_4->esc_seq.len >= 2) {
  int VAR_5 = 0;

  if (!FUNC_6(VAR_4->esc_seq.buf, "[2J")) {

   FUNC_0(VAR_2);
   VAR_5 = 1;
  } else if (!FUNC_6(VAR_4->esc_seq.buf, "[H")) {

   FUNC_2(VAR_2);
   VAR_5 = 1;
  }

  else if ((VAR_4->esc_seq.len >= 3) &&
    (VAR_4->esc_seq.buf[0] == '[') &&
    (VAR_4->esc_seq.buf[1] == 'L')) {
   VAR_5 = FUNC_5(VAR_2);
  }






  if (VAR_5 || (VAR_4->esc_seq.len >= VAR_1))
   VAR_4->esc_seq.len = -1;
 }
}
