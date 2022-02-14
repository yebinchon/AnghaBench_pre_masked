
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct irq_desc {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct irq_desc* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned char* VAR_4 ;

__attribute__((used)) static inline int FUNC_6(unsigned int VAR_5, unsigned char VAR_6)
{
 struct irq_desc *VAR_7 = FUNC_3(VAR_5);
 uint16_t VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_5);

 FUNC_4(&VAR_7->lock);

 VAR_8 = FUNC_1(VAR_1);
 VAR_9 = FUNC_1(VAR_2);

 switch (VAR_10) {
 case 0:
  VAR_8 &= ~VAR_3;
  VAR_8 |= (uint16_t)VAR_6;
  break;
 case 1:
  VAR_8 &= ~(VAR_3 << 3);
  VAR_8 |= (uint16_t)VAR_6 << 3;
  break;
 case 3:
  VAR_8 &= ~(VAR_3 << 6);
  VAR_8 |= (uint16_t)VAR_6 << 6;
  break;
 case 4:
  VAR_8 &= ~(VAR_3 << 9);
  VAR_8 |= (uint16_t)VAR_6 << 9;
  break;
 case 5:
  VAR_8 &= ~(VAR_3 << 12);
  VAR_8 |= (uint16_t)VAR_6 << 12;
  break;
 case 6:
  VAR_9 &= ~VAR_3;
  VAR_9 |= (uint16_t)VAR_6;
  break;
 case 7:
  VAR_9 &= ~(VAR_3 << 3);
  VAR_9 |= (uint16_t)VAR_6 << 3;
  break;
 case 8:
  VAR_9 &= ~(VAR_3 << 6);
  VAR_9 |= (uint16_t)VAR_6 << 6;
  break;
 case 9:
  VAR_9 &= ~(VAR_3 << 9);
  VAR_9 |= (uint16_t)VAR_6 << 9;
  break;
 case 10:
  VAR_9 &= ~(VAR_3 << 12);
  VAR_9 |= (uint16_t)VAR_6 << 12;
  break;
 default:
  FUNC_5(&VAR_7->lock);
  return -VAR_0;
 }

 VAR_4[VAR_10] = VAR_6;
 FUNC_2(VAR_1, VAR_8);
 FUNC_2(VAR_2, VAR_9);

 FUNC_5(&VAR_7->lock);

 return 0;
}
