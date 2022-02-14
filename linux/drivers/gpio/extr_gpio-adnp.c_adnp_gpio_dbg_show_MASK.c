
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct adnp {int reg_shift; int i2c_lock; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct adnp*) ;
 scalar_t__ FUNC_2 (struct adnp*) ;
 scalar_t__ FUNC_3 (struct adnp*) ;
 scalar_t__ FUNC_4 (struct adnp*) ;
 int FUNC_5 (struct adnp*,scalar_t__,int*) ;
 struct adnp* FUNC_6 (struct gpio_chip*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct seq_file*,char*,unsigned int,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_10(struct seq_file *VAR_0, struct gpio_chip *VAR_1)
{
 struct adnp *VAR_2 = FUNC_6(VAR_1);
 unsigned int VAR_3 = 1 << VAR_2->reg_shift, VAR_4, VAR_5;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u8 VAR_7, VAR_8, VAR_9, VAR_10;

  FUNC_7(&VAR_2->i2c_lock);

  VAR_6 = FUNC_5(VAR_2, FUNC_1(VAR_2) + VAR_4, &VAR_7);
  if (VAR_6 < 0)
   goto unlock;

  VAR_6 = FUNC_5(VAR_2, FUNC_4(VAR_2) + VAR_4, &VAR_8);
  if (VAR_6 < 0)
   goto unlock;

  VAR_6 = FUNC_5(VAR_2, FUNC_2(VAR_2) + VAR_4, &VAR_9);
  if (VAR_6 < 0)
   goto unlock;

  VAR_6 = FUNC_5(VAR_2, FUNC_3(VAR_2) + VAR_4, &VAR_10);
  if (VAR_6 < 0)
   goto unlock;

  FUNC_8(&VAR_2->i2c_lock);

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   unsigned int VAR_11 = (VAR_4 << VAR_2->reg_shift) + VAR_5;
   const char *VAR_12 = "input ";
   const char *VAR_13 = "low ";
   const char *VAR_14 = "disabled";
   const char *VAR_15 = "";

   if (VAR_7 & FUNC_0(VAR_5))
    VAR_12 = "output";

   if (VAR_8 & FUNC_0(VAR_5))
    VAR_13 = "high";

   if (VAR_9 & FUNC_0(VAR_5))
    VAR_14 = "enabled ";

   if (VAR_10 & FUNC_0(VAR_5))
    VAR_15 = "pending";

   FUNC_9(VAR_0, "%2u: %s %s IRQ %s %s\n", VAR_11,
       VAR_12, VAR_13, VAR_14, VAR_15);
  }
 }

 return;

unlock:
 FUNC_8(&VAR_2->i2c_lock);
}
