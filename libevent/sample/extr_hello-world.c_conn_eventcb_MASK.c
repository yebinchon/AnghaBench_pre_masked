
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bufferevent *VAR_3, short VAR_4, void *VAR_5)
{
 if (VAR_4 & VAR_0) {
  FUNC_1("Connection closed.\n");
 } else if (VAR_4 & VAR_1) {
  FUNC_1("Got an error on the connection: %s\n",
      FUNC_2(VAR_2));
 }


 FUNC_0(VAR_3);
}
