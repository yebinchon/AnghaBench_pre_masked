
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_parser {int dummy; } ;
struct hid_item {int tag; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_parser *VAR_0, struct hid_item *VAR_1)
{
 FUNC_0("reserved item type, tag 0x%x\n", VAR_1->tag);
 return 0;
}
