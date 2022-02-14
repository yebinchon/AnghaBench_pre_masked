
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unidirectional_transfer {int dest_name; int dest; scalar_t__ dest_is_sock; int state; int bufuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct unidirectional_transfer *VAR_2)
{
 if (FUNC_0(VAR_2->state) && !VAR_2->bufuse) {
  VAR_2->state = VAR_1;
  if (VAR_2->dest_is_sock)
   FUNC_2(VAR_2->dest, VAR_0);
  else
   FUNC_1(VAR_2->dest);
  FUNC_3("Closed %s.", VAR_2->dest_name);
 }
}
