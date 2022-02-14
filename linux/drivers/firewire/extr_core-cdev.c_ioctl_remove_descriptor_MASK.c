
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle; } ;
union ioctl_arg {TYPE_1__ remove_descriptor; } ;
struct client {int dummy; } ;


 int FUNC_0 (struct client*,int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct client *VAR_1, union ioctl_arg *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2->remove_descriptor.handle,
           VAR_0, ((void*)0));
}
