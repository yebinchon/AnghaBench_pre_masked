
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static sector_t FUNC_2(sector_t VAR_1,
       sector_t VAR_2)
{
 sector_t VAR_3;

 FUNC_0(VAR_2 == 0);




 VAR_3 = FUNC_1(VAR_1 + 1, VAR_0) -
       VAR_1;

 if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;

 return VAR_3;
}
