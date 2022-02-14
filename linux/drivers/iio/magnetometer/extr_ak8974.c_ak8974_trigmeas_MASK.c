
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ak8974 {int map; int drdy_complete; int drdy_active_low; scalar_t__ drdy_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct ak8974 *VAR_7)
{
 unsigned int VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;


 VAR_11 = FUNC_1(VAR_7->map, VAR_6, &VAR_8);
 if (VAR_11)
  return VAR_11;


 if (VAR_7->drdy_irq) {
  VAR_9 = VAR_3 |
   VAR_1 |
   VAR_2;
  VAR_10 = VAR_1;

  if (!VAR_7->drdy_active_low)
   VAR_10 |= VAR_2;

  FUNC_0(&VAR_7->drdy_complete);
  VAR_11 = FUNC_2(VAR_7->map, VAR_0,
      VAR_9, VAR_10);
  if (VAR_11)
   return VAR_11;
 }


 return FUNC_2(VAR_7->map,
      VAR_4,
      VAR_5,
      VAR_5);
}
