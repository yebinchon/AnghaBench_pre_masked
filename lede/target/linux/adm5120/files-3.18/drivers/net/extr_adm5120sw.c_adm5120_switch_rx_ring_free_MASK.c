
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_5;

 if (VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   if (VAR_4[VAR_5])
    FUNC_2(VAR_4[VAR_5]);
  FUNC_1(VAR_4);
 }

 if (VAR_2)
  FUNC_0(((void*)0), VAR_0, VAR_2,
   VAR_3);
}
