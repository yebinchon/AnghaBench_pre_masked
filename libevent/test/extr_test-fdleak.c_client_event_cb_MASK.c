
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*,unsigned char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct bufferevent *VAR_3, short VAR_4, void *VAR_5)
{
 if (VAR_4 & VAR_0) {
  unsigned char VAR_6 = 'A';
  FUNC_1(VAR_3, &VAR_6, 1);
 } else if (VAR_4 & VAR_1) {
  FUNC_3("Client socket got error!");
  FUNC_2(2);
 }

 FUNC_0(VAR_3, VAR_2);
}
