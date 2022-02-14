
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int bus_datum ;
struct TYPE_5__ {int bus_type; } ;
struct TYPE_4__ {int mpfb2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int ** VAR_6 ;
 TYPE_2__* FUNC_2 (int,int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int
FUNC_8(void)
{
 int VAR_9;
 u_char VAR_10;


 FUNC_3();
 VAR_5 = FUNC_2((VAR_8 + 1) * sizeof(bus_datum), VAR_2,
     VAR_3);
 for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++)
  VAR_5[VAR_9].bus_type = VAR_4;


 FUNC_4();


 FUNC_5();


 for (VAR_9 = 0; VAR_9 <= VAR_0; VAR_9++)
  if (VAR_6[VAR_9] != ((void*)0))
   FUNC_1(VAR_6[VAR_9]);


 FUNC_6();


 if (VAR_7->mpfb2 & VAR_1) {
  FUNC_7(0x22, 0x70);
  VAR_10 = FUNC_0(0x23);
  VAR_10 |= 0x01;
  FUNC_7(0x23, VAR_10);
 }

 return (0);
}
