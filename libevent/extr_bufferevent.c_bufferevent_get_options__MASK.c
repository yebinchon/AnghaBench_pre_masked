
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int options; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_options { ____Placeholder_bufferevent_options } bufferevent_options ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;

enum bufferevent_options
FUNC_3(struct bufferevent *VAR_0)
{
 struct bufferevent_private *VAR_1 = FUNC_2(VAR_0);
 enum bufferevent_options VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_1->options;
 FUNC_1(VAR_0);
 return VAR_2;
}
