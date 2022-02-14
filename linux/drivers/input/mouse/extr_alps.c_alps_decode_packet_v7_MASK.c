
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct psmouse {struct alps_data* private; } ;
struct alps_fields {int fingers; unsigned char left; unsigned char right; unsigned char middle; TYPE_1__* mt; } ;
struct alps_data {int flags; } ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ y; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,unsigned char) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned char FUNC_2 (unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct alps_fields *VAR_5,
      unsigned char *VAR_6,
      struct psmouse *VAR_7)
{
 struct alps_data *VAR_8 = VAR_7->private;
 unsigned char VAR_9;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 == VAR_1)
  return 0;
 if (VAR_9 == VAR_4)
  return -1;
 if (VAR_9 == VAR_2)
  return 1;

 FUNC_0(VAR_5->mt, VAR_6, VAR_9);

 if (VAR_9 == VAR_3)
  VAR_5->fingers = FUNC_1(VAR_5->mt);
 else
  VAR_5->fingers = 3 + (VAR_6[5] & 0x03);

 VAR_5->left = (VAR_6[0] & 0x80) >> 7;
 if (VAR_8->flags & VAR_0) {
  if (VAR_6[0] & 0x20)
   VAR_5->fingers++;
  if (VAR_6[0] & 0x10)
   VAR_5->fingers++;
 } else {
  VAR_5->right = (VAR_6[0] & 0x20) >> 5;
  VAR_5->middle = (VAR_6[0] & 0x10) >> 4;
 }


 if (VAR_5->fingers == 1 && VAR_5->mt[0].x == 0 && VAR_5->mt[0].y == 0) {
  VAR_5->mt[0].x = VAR_5->mt[1].x;
  VAR_5->mt[0].y = VAR_5->mt[1].y;
  VAR_5->mt[1].x = 0;
  VAR_5->mt[1].y = 0;
 }

 return 0;
}
