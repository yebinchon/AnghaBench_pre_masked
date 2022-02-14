
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_message {TYPE_2__* operation; } ;
struct gb_host_device {TYPE_3__* driver; } ;
struct TYPE_6__ {int (* message_cancel ) (struct gb_message*) ;} ;
struct TYPE_5__ {TYPE_1__* connection; } ;
struct TYPE_4__ {struct gb_host_device* hd; } ;


 int FUNC_0 (struct gb_message*) ;

__attribute__((used)) static void FUNC_1(struct gb_message *VAR_0)
{
 struct gb_host_device *VAR_1 = VAR_0->operation->connection->hd;

 VAR_1->driver->message_cancel(VAR_0);
}
