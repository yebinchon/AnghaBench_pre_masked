
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_filtered {int underlying; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct bufferevent_filtered* FUNC_3 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_4(struct bufferevent *VAR_3, short VAR_4)
{
 struct bufferevent_filtered *VAR_5 = FUNC_3(VAR_3);
 if (VAR_4 & VAR_2)
  FUNC_1(VAR_3);

 if (VAR_4 & VAR_1) {
  FUNC_0(VAR_3);
  FUNC_2(VAR_5->underlying,
      VAR_0);
 }
 return 0;
}
