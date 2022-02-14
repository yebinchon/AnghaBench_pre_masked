
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adt7x10_data {int config; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct adt7x10_data *VAR_2, s16 VAR_3)
{

 if (!(VAR_2->config & VAR_0))
  VAR_3 &= VAR_1;




 return FUNC_0(VAR_3 * 1000, 128);
}
