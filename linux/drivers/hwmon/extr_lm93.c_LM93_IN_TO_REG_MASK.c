
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 void* FUNC_0 (unsigned int,long const,long const) ;
 long const* VAR_0 ;
 long const* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static u8 FUNC_1(int VAR_4, unsigned VAR_5)
{

 const long VAR_6 = FUNC_0(VAR_5,
      VAR_3[VAR_4], VAR_2[VAR_4]);


 const long VAR_7 = VAR_6 * 1000;
 const long VAR_8 = VAR_2[VAR_4] * 1000;
 const long VAR_9 = VAR_3[VAR_4] * 1000;


 const long VAR_10 = (VAR_8 - VAR_9) /
  (VAR_0[VAR_4] - VAR_1[VAR_4]);
 const long VAR_11 = VAR_9 - VAR_10 * VAR_1[VAR_4];

 u8 VAR_12 = ((VAR_7 - VAR_11 + (VAR_10/2)) / VAR_10);
 VAR_12 = FUNC_0(VAR_12,
      VAR_1[VAR_4], VAR_0[VAR_4]);
 return VAR_12;
}
