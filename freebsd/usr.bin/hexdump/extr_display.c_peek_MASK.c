
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;

size_t
FUNC_2(u_char *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 int VAR_7;

 if (VAR_1 != -1 && VAR_4 > (unsigned int)VAR_1)
  VAR_4 = VAR_1;
 VAR_6 = 0;
 while (VAR_6 < VAR_4 && (VAR_7 = FUNC_0()) != VAR_0) {
  *VAR_3++ = VAR_7;
  VAR_6++;
 }
 VAR_5 = VAR_6;
 while (VAR_5-- > 0) {
  VAR_7 = *--VAR_3;
  FUNC_1(VAR_7, VAR_2);
 }
 return (VAR_6);
}
