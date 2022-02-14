
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {scalar_t__ domain; char* name; } ;
struct TYPE_3__ {scalar_t__ type; char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int,int,size_t,size_t) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 char* FUNC_5 (int ) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(u_int VAR_8, u_int VAR_9)
{
 int VAR_10, VAR_11;


 if (VAR_5[VAR_8].domain == VAR_1 && VAR_6[VAR_9].type != VAR_2)
  return;
 if (VAR_5[VAR_8].domain == VAR_0 && VAR_6[VAR_9].type == VAR_2)
  return;


 VAR_11 = FUNC_4(VAR_5[VAR_8].domain, VAR_6[VAR_9].type, 0);
 if (VAR_11 == -1) {
  FUNC_1("not ok %d %s_%s # socket(): %s\n", VAR_7,
      VAR_5[VAR_8].name, VAR_6[VAR_9].name, FUNC_5(VAR_3));
  VAR_7++;
  return;
 }


 for (VAR_10 = -2; VAR_10 <= (VAR_4 + 2); VAR_10++)
  FUNC_3(VAR_11, VAR_10, VAR_8, VAR_9);


 for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  FUNC_3(VAR_11, (int)FUNC_2(), VAR_8, VAR_9);


 FUNC_0(VAR_11);
}
