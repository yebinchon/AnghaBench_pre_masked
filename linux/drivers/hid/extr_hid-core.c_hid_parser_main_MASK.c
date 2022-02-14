
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_parser {int local; int device; } ;
struct hid_item {int tag; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct hid_parser*) ;
 int FUNC_1 (struct hid_parser*,int ,int) ;
 int FUNC_2 (struct hid_parser*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct hid_item*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct hid_parser*,int) ;

__attribute__((used)) static int FUNC_7(struct hid_parser *VAR_3, struct hid_item *VAR_4)
{
 __u32 VAR_5;
 int VAR_6;

 FUNC_2(VAR_3);

 VAR_5 = FUNC_4(VAR_4);

 switch (VAR_4->tag) {
 case 132:
  VAR_6 = FUNC_6(VAR_3, VAR_5 & 0xff);
  break;
 case 131:
  VAR_6 = FUNC_0(VAR_3);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_5);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_3, VAR_0, VAR_5);
  break;
 default:
  FUNC_3(VAR_3->device, "unknown main item tag 0x%x\n", VAR_4->tag);
  VAR_6 = 0;
 }

 FUNC_5(&VAR_3->local, 0, sizeof(VAR_3->local));

 return VAR_6;
}
