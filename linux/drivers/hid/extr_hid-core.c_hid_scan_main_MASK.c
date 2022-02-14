
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage_index; int * usage; } ;
struct hid_parser {TYPE_1__ local; } ;
struct hid_item {int tag; } ;
typedef int __u32 ;


 int VAR_0 ;





 int FUNC_0 (struct hid_parser*) ;
 int FUNC_1 (struct hid_parser*,int) ;
 int FUNC_2 (struct hid_parser*,int ) ;
 int FUNC_3 (struct hid_parser*,int ) ;
 int FUNC_4 (struct hid_item*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hid_parser *VAR_1, struct hid_item *VAR_2)
{
 __u32 VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);

 VAR_3 = FUNC_4(VAR_2);

 switch (VAR_2->tag) {
 case 132:
  FUNC_1(VAR_1, VAR_3 & 0xff);
  break;
 case 131:
  break;
 case 129:

  if (VAR_3 & VAR_0)
   break;
  for (VAR_4 = 0; VAR_4 < VAR_1->local.usage_index; VAR_4++)
   FUNC_3(VAR_1, VAR_1->local.usage[VAR_4]);
  break;
 case 128:
  break;
 case 130:
  for (VAR_4 = 0; VAR_4 < VAR_1->local.usage_index; VAR_4++)
   FUNC_2(VAR_1, VAR_1->local.usage[VAR_4]);
  break;
 }


 FUNC_5(&VAR_1->local, 0, sizeof(VAR_1->local));

 return 0;
}
