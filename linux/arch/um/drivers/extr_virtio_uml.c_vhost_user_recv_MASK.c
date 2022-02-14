
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; } ;
struct vhost_user_msg {int payload; TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *,size_t) ;
 int FUNC_1 (int,struct vhost_user_msg*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct vhost_user_msg *VAR_2,
      size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5 = FUNC_1(VAR_1, VAR_2);

 if (VAR_5)
  return VAR_5;
 VAR_4 = VAR_2->header.size;
 if (VAR_4 > VAR_3)
  return -VAR_0;
 return FUNC_0(VAR_1, &VAR_2->payload, VAR_4);
}
