
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int connecting; } ;
struct bufferevent {int ev_write; int ev_read; } ;


 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent *VAR_2, short VAR_3)
{
 struct bufferevent_private *VAR_4 = FUNC_0(VAR_2);
 if (VAR_3 & VAR_0) {
  if (FUNC_1(&VAR_2->ev_read) == -1)
   return -1;
 }

 if ((VAR_3 & VAR_1) && ! VAR_4->connecting) {
  if (FUNC_1(&VAR_2->ev_write) == -1)
   return -1;
 }
 return 0;
}
