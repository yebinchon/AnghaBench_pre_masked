
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct nbd_device {int disk; } ;
struct TYPE_2__ {scalar_t__ shutdown; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 struct socket* FUNC_2 (unsigned long,int*) ;

__attribute__((used)) static struct socket *FUNC_3(struct nbd_device *VAR_2, unsigned long VAR_3,
         int *VAR_4)
{
 struct socket *VAR_5;

 *VAR_4 = 0;
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_5->ops->shutdown == VAR_1) {
  FUNC_0(FUNC_1(VAR_2->disk), "Unsupported socket: shutdown callout must be supported.\n");
  *VAR_4 = -VAR_0;
  return ((void*)0);
 }

 return VAR_5;
}
