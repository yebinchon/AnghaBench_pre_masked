
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bufferevent*,int) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*) ;
 scalar_t__ FUNC_4 (struct bufferevent*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bufferevent *VAR_2, void *VAR_3)
{
 if (FUNC_5(FUNC_3(VAR_2)) == 0) {
  FUNC_1(VAR_2,VAR_0|VAR_1);
  FUNC_0(("Flushed %d: freeing it.", (int)FUNC_4(VAR_2)));
  FUNC_2(VAR_2);
 }
}
