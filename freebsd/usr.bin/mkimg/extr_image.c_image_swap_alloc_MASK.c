
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static off_t
FUNC_2(size_t VAR_4)
{
 off_t VAR_5;
 size_t VAR_6;

 VAR_6 = (VAR_3 > VAR_1) ? VAR_3 : VAR_1;
 FUNC_0((VAR_6 & (VAR_6 - 1)) == 0);

 VAR_4 = (VAR_4 + VAR_6 - 1) & ~(VAR_6 - 1);

 VAR_5 = VAR_2;
 VAR_2 += VAR_4;
 if (FUNC_1(VAR_0, VAR_2) == -1) {
  VAR_2 = VAR_5;
  VAR_5 = -1LL;
 }
 return (VAR_5);
}
