
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ioctl_arg {int allocate_iso_resource; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct client*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct client *VAR_1,
           union ioctl_arg *VAR_2)
{
 return FUNC_0(VAR_1,
   &VAR_2->allocate_iso_resource, VAR_0);
}
