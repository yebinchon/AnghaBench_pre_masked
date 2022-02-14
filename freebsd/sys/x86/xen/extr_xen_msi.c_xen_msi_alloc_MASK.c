
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int,int) ;

int
FUNC_4(device_t VAR_5, int VAR_6, int VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10 = 0;

 FUNC_0(&VAR_3);


 if (VAR_2 + VAR_6 > VAR_4) {
  FUNC_1(&VAR_3);
  return (VAR_0);
 }


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_8[VAR_9] = VAR_1 + VAR_2++;

 FUNC_1(&VAR_3);

 VAR_10 = FUNC_3(VAR_5, VAR_8[0], VAR_6);
 if (VAR_10 != 0)
  return (VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_2(VAR_8[VAR_9]);

 return (0);
}
