
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int int_time_vbus; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int *,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ina2xx_chip_info *VAR_3,
        unsigned int VAR_4, unsigned int *VAR_5)
{
 int VAR_6;

 if (VAR_4 > 8244 || VAR_4 < 140)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_2,
       FUNC_0(VAR_2));

 VAR_3->int_time_vbus = VAR_2[VAR_6];

 *VAR_5 &= ~VAR_1;
 *VAR_5 |= FUNC_1(VAR_6) & VAR_1;

 return 0;
}
