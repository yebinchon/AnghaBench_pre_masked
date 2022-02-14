
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {scalar_t__ type; struct expression* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct expression**,struct expression*,struct expression*) ;

__attribute__((used)) static void
FUNC_1(struct expression **VAR_6, struct expression *VAR_7, struct expression **VAR_8)
{
 struct expression *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;




 VAR_11 = ((void*)0);
 VAR_10 = VAR_9 = VAR_7;
 VAR_12 = VAR_13 = 0;
 while(VAR_9) {
  if (VAR_9->type == VAR_4) {

   if (VAR_8) {
    *VAR_8 = VAR_9;
   }
   if (VAR_12 && VAR_13) {

    FUNC_0(VAR_6, VAR_10, VAR_11);
   }
   return;
  }
  if (VAR_9->type == VAR_5) {
   FUNC_1(VAR_6, VAR_9->next, &VAR_11);
   VAR_9 = VAR_11;
   continue;
  } else if ((VAR_9->type == VAR_3) ||
      (VAR_9->type == VAR_1)) {
   VAR_12++;
  } else if ((VAR_9->type == VAR_0) ||
      (VAR_9->type == VAR_2)) {
   VAR_13++;
  }
  VAR_9 = VAR_9->next;
 }
 if (VAR_12 && VAR_13) {
  FUNC_0(VAR_6, VAR_10, ((void*)0));
 }
}
