
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias_link {int expire_time; int flags; } ;


 int FUNC_0 (struct alias_link*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

void
FUNC_2(struct alias_link *VAR_2, int VAR_3)
{
 if (VAR_3 == 0) {
  VAR_2->flags &= ~VAR_0;
  FUNC_0(VAR_2);
 } else if (VAR_3 == -1) {
  VAR_2->flags |= VAR_0;
 } else if (VAR_3 > 0) {
  VAR_2->expire_time = VAR_3;
 } else {




 }
}
