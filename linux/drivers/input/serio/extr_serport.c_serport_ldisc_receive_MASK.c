
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ disc_data; } ;
struct serport {int lock; int serio; int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,unsigned char const,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_3, const unsigned char *VAR_4, char *VAR_5, int VAR_6)
{
 struct serport *VAR_7 = (struct serport*) VAR_3->disc_data;
 unsigned long VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;

 FUNC_1(&VAR_7->lock, VAR_8);

 if (!FUNC_3(VAR_2, &VAR_7->flags))
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_5) {
   switch (VAR_5[VAR_10]) {
   case 129:
    VAR_9 = VAR_0;
    break;

   case 128:
    VAR_9 = VAR_1;
    break;

   default:
    VAR_9 = 0;
    break;
   }
  }

  FUNC_0(VAR_7->serio, VAR_4[VAR_10], VAR_9);
 }

out:
 FUNC_2(&VAR_7->lock, VAR_8);
}
