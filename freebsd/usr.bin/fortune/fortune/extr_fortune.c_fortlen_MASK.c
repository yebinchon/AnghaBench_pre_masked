
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int str_flags; } ;
struct TYPE_4__ {TYPE_2__ tbl; int inf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_2__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_7;
 char VAR_8[VAR_0];

 if (!(VAR_2->tbl.str_flags & (VAR_5 | VAR_4)))
  VAR_7 = (int)(VAR_6[1] - VAR_6[0]);
 else {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2->inf, VAR_6[0], VAR_3);
  VAR_7 = 0;
  while (FUNC_1(VAR_8, sizeof VAR_8, VAR_2->inf) != ((void*)0) &&
         !FUNC_0(VAR_8, VAR_2->tbl))
   VAR_7 += FUNC_4(VAR_8);
 }
 VAR_1 = VAR_7;

 return (VAR_7);
}
