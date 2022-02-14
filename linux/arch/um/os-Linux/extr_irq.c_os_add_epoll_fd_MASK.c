
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,struct epoll_event*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int,void*) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(int VAR_5, int VAR_6, void *VAR_7)
{
 struct epoll_event VAR_8;
 int VAR_9;

 VAR_8.data.ptr = VAR_7;
 VAR_8.events = VAR_5 | VAR_1;
 VAR_9 = FUNC_0(VAR_3, VAR_2, VAR_6, &VAR_8);
 if ((VAR_9) && (VAR_4 == VAR_0))
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  FUNC_2("epollctl add err fd %d, %s\n", VAR_6, FUNC_3(VAR_4));
 return VAR_9;
}
