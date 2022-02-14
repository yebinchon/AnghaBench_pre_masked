
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {scalar_t__ type; struct expression* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct expression**,struct expression*) ;
 int FUNC_1 (struct expression*,struct expression**) ;

__attribute__((used)) static void
FUNC_2(struct expression **VAR_4, struct expression *VAR_5, struct expression *VAR_6)
{






 struct expression *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = VAR_5;
 VAR_9 = 0;
 while(VAR_7 != VAR_6) {
  if (VAR_7->type == VAR_3) {
   VAR_9++;
  }
  if (VAR_7->type == VAR_2) {
   VAR_9--;
  }
  if (VAR_9 == 0) {
   if ((VAR_7->type == VAR_1) ||
       (VAR_7->type == VAR_0)) {
    FUNC_0(VAR_4, VAR_7);
    FUNC_1(VAR_7, &VAR_8);
    VAR_7 = VAR_8->next;
    continue;
   }
  }
  VAR_7 = VAR_7->next;
 }

}
