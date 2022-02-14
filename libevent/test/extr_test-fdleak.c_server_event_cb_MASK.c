
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_4, short VAR_5, void *VAR_6)
{
 if (VAR_5 & VAR_1) {
  FUNC_4("Error from bufferevent");
  FUNC_3(1);
 } else if (VAR_5 & VAR_0) {
  FUNC_0(VAR_4);
  if (VAR_3 == VAR_2) {
   FUNC_2(FUNC_1(VAR_4));
  }
 }
}
