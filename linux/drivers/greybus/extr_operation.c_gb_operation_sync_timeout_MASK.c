
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_operation {TYPE_3__* response; int id; TYPE_1__* request; } ;
struct gb_connection {int name; TYPE_2__* hd; } ;
struct TYPE_6__ {void* payload; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {void* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ,int,int) ;
 struct gb_operation* FUNC_1 (struct gb_connection*,int,int,int,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*,unsigned int) ;
 int FUNC_4 (void*,void*,int) ;

int FUNC_5(struct gb_connection *VAR_3, int VAR_4,
         void *VAR_5, int VAR_6,
         void *VAR_7, int VAR_8,
         unsigned int VAR_9)
{
 struct gb_operation *VAR_10;
 int VAR_11;

 if ((VAR_8 && !VAR_7) ||
     (VAR_6 && !VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_3, VAR_4,
     VAR_6, VAR_8,
     VAR_2);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_6)
  FUNC_4(VAR_10->request->payload, VAR_5, VAR_6);

 VAR_11 = FUNC_3(VAR_10, VAR_9);
 if (VAR_11) {
  FUNC_0(&VAR_3->hd->dev,
   "%s: synchronous operation id 0x%04x of type 0x%02x failed: %d\n",
   VAR_3->name, VAR_10->id, VAR_4, VAR_11);
 } else {
  if (VAR_8) {
   FUNC_4(VAR_7, VAR_10->response->payload,
          VAR_8);
  }
 }

 FUNC_2(VAR_10);

 return VAR_11;
}
