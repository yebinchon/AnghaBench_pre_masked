
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_operation {TYPE_2__* request; } ;
struct gb_connection {int name; TYPE_1__* hd; } ;
struct TYPE_4__ {int payload; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 struct gb_operation* FUNC_1 (struct gb_connection*,int,int,int ,int ,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*,unsigned int) ;
 int FUNC_4 (int ,void*,int) ;

int FUNC_5(struct gb_connection *VAR_4,
     int VAR_5, void *VAR_6,
     int VAR_7,
     unsigned int VAR_8)
{
 struct gb_operation *VAR_9;
 int VAR_10;

 if (VAR_7 && !VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4, VAR_5,
           VAR_7, 0,
           VAR_2,
           VAR_3);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_7)
  FUNC_4(VAR_9->request->payload, VAR_6, VAR_7);

 VAR_10 = FUNC_3(VAR_9, VAR_8);
 if (VAR_10) {
  FUNC_0(&VAR_4->hd->dev,
   "%s: unidirectional operation of type 0x%02x failed: %d\n",
   VAR_4->name, VAR_5, VAR_10);
 }

 FUNC_2(VAR_9);

 return VAR_10;
}
