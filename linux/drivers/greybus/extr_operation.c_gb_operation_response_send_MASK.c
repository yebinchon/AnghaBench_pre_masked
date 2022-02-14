
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_operation {TYPE_3__* response; struct gb_connection* connection; } ;
struct gb_connection {TYPE_1__* hd; } ;
struct TYPE_6__ {TYPE_2__* header; } ;
struct TYPE_5__ {int result; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*) ;
 scalar_t__ FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (struct gb_operation*) ;
 int FUNC_7 (struct gb_operation*) ;
 int FUNC_8 (struct gb_operation*,int ,int ) ;
 int FUNC_9 (struct gb_operation*,int) ;

__attribute__((used)) static int FUNC_10(struct gb_operation *VAR_3,
          int VAR_4)
{
 struct gb_connection *VAR_5 = VAR_3->connection;
 int VAR_6;

 if (!VAR_3->response &&
     !FUNC_5(VAR_3)) {
  if (!FUNC_8(VAR_3, 0, VAR_2))
   return -VAR_1;
 }


 if (!FUNC_9(VAR_3, VAR_4)) {
  FUNC_0(&VAR_5->hd->dev, "request result already set\n");
  return -VAR_0;
 }


 if (FUNC_5(VAR_3))
  return 0;


 FUNC_3(VAR_3);
 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6)
  goto err_put;


 VAR_3->response->header->result = FUNC_2(VAR_4);

 VAR_6 = FUNC_1(VAR_3->response, VAR_2);
 if (VAR_6)
  goto err_put_active;

 return 0;

err_put_active:
 FUNC_7(VAR_3);
err_put:
 FUNC_6(VAR_3);

 return VAR_6;
}
