
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static unsigned int FUNC_2(u8 *VAR_2, u8 *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;


 FUNC_1(VAR_2, VAR_3, VAR_0);
 VAR_6 = (VAR_4 > VAR_1) ? VAR_1 : VAR_4 & ~(VAR_0 - 1);
 for (VAR_5 = (VAR_6 / VAR_0) - 1; VAR_5 > 0; VAR_5--) {
  FUNC_1(VAR_2 + VAR_0, VAR_2, VAR_0);
  FUNC_0(VAR_2 + VAR_0, VAR_0);
  VAR_2 += VAR_0;
 }
 return VAR_6;
}
