
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {size_t max_single_read; } ;
struct bufferevent {int input; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (int ,size_t) ;

int
FUNC_4(struct bufferevent *VAR_2, size_t VAR_3)
{
 struct bufferevent_private *VAR_4;
 int VAR_5 = 0;
 FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_3 == 0 || VAR_3 > VAR_0)
  VAR_4->max_single_read = VAR_1;
 else
  VAR_4->max_single_read = VAR_3;
 VAR_5 = FUNC_3(VAR_2->input, VAR_4->max_single_read);
 FUNC_1(VAR_2);
 return VAR_5;
}
