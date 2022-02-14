
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct secacq {scalar_t__ created; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct secacq* FUNC_2 (int *) ;
 struct secacq* FUNC_3 (struct secacq*,int ) ;
 int FUNC_4 (struct secacq*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct secacq*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(time_t VAR_6)
{
 struct secacq *VAR_7, *VAR_8;


 FUNC_0();
 VAR_7 = FUNC_2(&VAR_1);
 while (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_3(VAR_7, VAR_4);
  if (VAR_6 - VAR_7->created > VAR_2) {
   FUNC_4(VAR_7, VAR_4);
   FUNC_4(VAR_7, VAR_3);
   FUNC_4(VAR_7, VAR_5);
   FUNC_5(VAR_7, VAR_0);
  }
  VAR_7 = VAR_8;
 }
 FUNC_1();
}
