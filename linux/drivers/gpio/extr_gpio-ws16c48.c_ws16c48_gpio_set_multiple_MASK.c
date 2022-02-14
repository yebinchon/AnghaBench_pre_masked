
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws16c48_gpio {unsigned long* io_state; unsigned int* out_state; int lock; scalar_t__ base; } ;
struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 struct ws16c48_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_1,
 unsigned long *VAR_2, unsigned long *VAR_3)
{
 struct ws16c48_gpio *const VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5;
 const unsigned int VAR_6 = 8;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned long VAR_10;


 for (VAR_5 = 0; VAR_5 < VAR_1->ngpio; VAR_5 += VAR_6) {

  if (!VAR_2[FUNC_0(VAR_5)]) {
   VAR_5 = (FUNC_0(VAR_5) + 1) * VAR_0 - VAR_6;
   continue;
  }

  VAR_7 = VAR_5 / VAR_6;


  VAR_8 = VAR_2[FUNC_0(VAR_5)] & ~VAR_4->io_state[VAR_7];
  VAR_9 = VAR_8 & VAR_3[FUNC_0(VAR_5)];

  FUNC_3(&VAR_4->lock, VAR_10);


  VAR_4->out_state[VAR_7] &= ~VAR_8;
  VAR_4->out_state[VAR_7] |= VAR_9;
  FUNC_2(VAR_4->out_state[VAR_7], VAR_4->base + VAR_7);

  FUNC_4(&VAR_4->lock, VAR_10);


  VAR_2[FUNC_0(VAR_5)] >>= VAR_6;
  VAR_3[FUNC_0(VAR_5)] >>= VAR_6;
 }
}
