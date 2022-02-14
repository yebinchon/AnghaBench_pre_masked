
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bufferevent_ctrl_data {int fd; } ;
struct bufferevent {int ev_read; } ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;






 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent *VAR_0, enum bufferevent_ctrl_op VAR_1,
    union bufferevent_ctrl_data *VAR_2)
{
 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_0, VAR_2->fd);
  return 0;
 case 130:
  VAR_2->fd = FUNC_1(&VAR_0->ev_read);
  return 0;
 case 129:
 case 131:
 default:
  return -1;
 }
}
