
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int new_id ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static uint16_t
FUNC_6(void)
{
 uint16_t VAR_7;

 FUNC_4(&VAR_4);




 VAR_7 = 0;
 do {
  if (VAR_7 != 0)
   VAR_5++;
  FUNC_0(&VAR_7, sizeof(VAR_7), 0);
 } while (FUNC_3(VAR_3, VAR_7) || VAR_7 == 0);
 FUNC_1(VAR_3, VAR_2[VAR_0]);
 FUNC_2(VAR_3, VAR_7);
 VAR_2[VAR_0] = VAR_7;
 VAR_0++;
 if (VAR_0 == VAR_1)
  VAR_0 = 0;
 VAR_6++;
 FUNC_5(&VAR_4);
 return (VAR_7);
}
