
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_operation {TYPE_1__* request; } ;
struct gb_cport_shutdown_request {int phase; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_cport_shutdown_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gb_operation* FUNC_0 (struct gb_connection*,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct gb_operation*) ;
 int FUNC_2 (struct gb_operation*) ;

__attribute__((used)) static int FUNC_3(struct gb_connection *VAR_3,
         u8 VAR_4)
{
 struct gb_cport_shutdown_request *VAR_5;
 struct gb_operation *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3,
          VAR_1,
          sizeof(*VAR_5), 0, 0,
          VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = VAR_6->request->payload;
 VAR_5->phase = VAR_4;

 VAR_7 = FUNC_2(VAR_6);

 FUNC_1(VAR_6);

 return VAR_7;
}
