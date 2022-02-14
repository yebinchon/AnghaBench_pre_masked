
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct secspacq {scalar_t__ created; } ;


 struct secspacq* FUNC_0 (int *) ;
 struct secspacq* FUNC_1 (struct secspacq*,int ) ;
 int FUNC_2 (struct secspacq*,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct secspacq*) ;
 int VAR_3 ;
 int FUNC_6 (struct secspacq*,int ) ;

__attribute__((used)) static void
FUNC_7(time_t VAR_4)
{
 struct secspacq *VAR_5, *VAR_6;


 FUNC_3();
 for (VAR_5 = FUNC_0(&VAR_2); VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  VAR_6 = FUNC_1(VAR_5, VAR_3);
  if (VAR_4 - VAR_5->created > VAR_1
   && FUNC_5(VAR_5)) {
   FUNC_2(VAR_5, VAR_3);
   FUNC_6(VAR_5, VAR_0);
  }
 }
 FUNC_4();
}
