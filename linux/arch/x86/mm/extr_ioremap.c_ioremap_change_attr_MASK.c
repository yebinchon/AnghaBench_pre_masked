
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 unsigned long VAR_0 ;




 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(unsigned long VAR_1, unsigned long VAR_2,
   enum page_cache_mode VAR_3)
{
 unsigned long VAR_4 = VAR_2 >> VAR_0;
 int VAR_5;

 switch (VAR_3) {
 case 131:
 default:
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_1, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_1, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_1, VAR_4);
  break;
 }

 return VAR_5;
}
