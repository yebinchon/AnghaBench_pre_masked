
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_filtered {int underlying; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;


 int FUNC_0 (struct bufferevent_filtered*) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_1 (struct bufferevent_filtered*,int,int*) ;
 int FUNC_2 (struct bufferevent_filtered*,int,int*) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (int ,short,int) ;
 int FUNC_5 (struct bufferevent*) ;
 struct bufferevent_filtered* FUNC_6 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_7(struct bufferevent *VAR_2,
    short VAR_3, enum bufferevent_flush_mode VAR_4)
{
 struct bufferevent_filtered *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = 0;
 FUNC_0(VAR_5);

 FUNC_5(VAR_2);

 if (VAR_3 & VAR_0) {
  FUNC_1(VAR_5, VAR_4, &VAR_6);
 }
 if (VAR_3 & VAR_1) {
  FUNC_2(VAR_5, VAR_4, &VAR_6);
 }


 FUNC_4(VAR_5->underlying, VAR_3, VAR_4);

 FUNC_3(VAR_2);

 return VAR_6;
}
