
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct gb_operation_msg_hdr {int type; int operation_id; } ;
struct gb_operation {int work; int request; } ;
struct gb_connection {int wq; int name; TYPE_1__* hd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 struct gb_operation* FUNC_1 (struct gb_connection*,int ,int ,void*,size_t) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 scalar_t__ FUNC_4 (struct gb_operation*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct gb_connection *VAR_1,
    const struct gb_operation_msg_hdr *VAR_2,
    void *VAR_3, size_t VAR_4)
{
 struct gb_operation *VAR_5;
 u16 VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_2->operation_id);
 VAR_7 = VAR_2->type;

 VAR_5 = FUNC_1(VAR_1, VAR_6,
       VAR_7, VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_0(&VAR_1->hd->dev,
   "%s: can't create incoming operation\n",
   VAR_1->name);
  return;
 }

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_5);
  return;
 }
 FUNC_7(VAR_5->request);





 if (FUNC_4(VAR_5, -VAR_0))
  FUNC_6(VAR_1->wq, &VAR_5->work);
}
