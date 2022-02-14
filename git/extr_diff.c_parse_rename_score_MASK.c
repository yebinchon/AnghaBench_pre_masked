
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

int FUNC_0(const char **VAR_1)
{
 unsigned long VAR_2, VAR_3;
 int VAR_4, VAR_5;
 const char *VAR_6 = *VAR_1;

 VAR_2 = 0;
 VAR_3 = 1;
 VAR_5 = 0;
 for (;;) {
  VAR_4 = *VAR_6;
  if ( !VAR_5 && VAR_4 == '.' ) {
   VAR_3 = 1;
   VAR_5 = 1;
  } else if ( VAR_4 == '%' ) {
   VAR_3 = VAR_5 ? VAR_3*100 : 100;
   VAR_6++;
   break;
  } else if ( VAR_4 >= '0' && VAR_4 <= '9' ) {
   if ( VAR_3 < 100000 ) {
    VAR_3 *= 10;
    VAR_2 = (VAR_2*10) + (VAR_4-'0');
   }
  } else {
   break;
  }
  VAR_6++;
 }
 *VAR_1 = VAR_6;




 return (int)((VAR_2 >= VAR_3) ? VAR_0 : (VAR_0 * VAR_2 / VAR_3));
}
