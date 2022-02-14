
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_message {TYPE_1__* operation; } ;
struct gb_connection {int hd_cport_id; TYPE_3__* hd; } ;
typedef int gfp_t ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int (* message_send ) (TYPE_3__*,int ,struct gb_message*,int ) ;} ;
struct TYPE_4__ {struct gb_connection* connection; } ;


 int FUNC_0 (TYPE_3__*,int ,struct gb_message*,int ) ;
 int FUNC_1 (struct gb_message*) ;

__attribute__((used)) static int FUNC_2(struct gb_message *VAR_0, gfp_t VAR_1)
{
 struct gb_connection *VAR_2 = VAR_0->operation->connection;

 FUNC_1(VAR_0);
 return VAR_2->hd->driver->message_send(VAR_2->hd,
     VAR_2->hd_cport_id,
     VAR_0,
     VAR_1);
}
