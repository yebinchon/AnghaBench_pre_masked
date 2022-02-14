
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tuple_list {struct tuple* tuples; struct tuple_list* next; } ;
struct tuple {int code; int length; int* data; struct tuple* next; } ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct tuple*) ;
 int FUNC_2 (struct tuple*) ;
 int FUNC_3 (int*,int,char*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (int*) ;
 char* FUNC_17 (int) ;

void
FUNC_18(struct tuple_list *VAR_0)
{
 struct tuple *VAR_1;
 struct tuple_list *VAR_2;
 int VAR_3 = 0, VAR_4, VAR_5, VAR_6;
 u_char *VAR_7;
 int VAR_8 = 0;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  for (VAR_1 = VAR_2->tuples; VAR_1; VAR_1 = VAR_1->next) {
   FUNC_14("Tuple #%d, code = 0x%x (%s), length = %d\n",
       ++VAR_3, VAR_1->code, FUNC_17(VAR_1->code), VAR_1->length);
   VAR_7 = VAR_1->data;
   VAR_4 = VAR_1->length;
   VAR_5 = 0;
   while (VAR_4 > 0) {
    FUNC_14("    %03x: ", VAR_5);
    for (VAR_6 = 0; VAR_6 < ((VAR_4 < 16) ? VAR_4 : 16); VAR_6++)
     FUNC_14(" %02x", VAR_7[VAR_6]);
    FUNC_14("\n");
    VAR_4 -= 16;
    VAR_7 += 16;
    VAR_5 += 16;
   }
   switch (VAR_1->code) {
   default:
    break;
   case 130:
    FUNC_3(VAR_1->data, VAR_1->length, "Common");
    break;
   case 145:
    FUNC_2(VAR_1);
    break;
   case 147:
    FUNC_1(VAR_1);
    break;
   case 133:
    FUNC_9(VAR_1->data, VAR_1->length);
    break;
   case 150:
    FUNC_0(VAR_1->data, VAR_1->length);
    break;
   case 149:
    FUNC_14("\tChecksum from offset %d, length %d, value is 0x%x\n",
           FUNC_15(VAR_1->data),
           FUNC_15(VAR_1->data + 2),
           VAR_1->data[4]);
    break;
   case 135:
    FUNC_14("\tLong link to attribute memory, address 0x%x\n",
           FUNC_16(VAR_1->data));
    break;
   case 134:
    FUNC_14("\tLong link to common memory, address 0x%x\n",
           FUNC_16(VAR_1->data));
    break;
   case 138:
    FUNC_7(VAR_1->data, VAR_1->length);
    break;
   case 151:
    break;
   case 131:
    FUNC_3(VAR_1->data, VAR_1->length, "Attribute");
    break;
   case 136:
   case 137:
    break;
   case 146:
    FUNC_2(VAR_1);
    break;
   case 148:
    FUNC_1(VAR_1);
    break;
   case 141:
   case 142:
    FUNC_12(VAR_1->data, VAR_1->length);
    break;
   case 144:
   case 143:
    FUNC_4(VAR_1->data, VAR_1->length);
    break;
   case 132:
    FUNC_14("\tPCMCIA ID = 0x%x, OEM ID = 0x%x\n",
           FUNC_15(VAR_1->data),
           FUNC_15(VAR_1->data + 2));
    break;
   case 139:
    VAR_8 = VAR_1->data[0];
    FUNC_6(VAR_1->data);
    break;
   case 140:
    switch (VAR_8) {
    case 2:
     FUNC_13(VAR_1->data, VAR_1->length);
     break;
    case 4:
     FUNC_5(VAR_1->data, VAR_1->length);
     break;
    case 6:
     FUNC_10(VAR_1->data, VAR_1->length);
     break;
    }
    break;
   case 128:
    FUNC_8(VAR_1->data, VAR_1->length);
    break;
   case 129:
    FUNC_11(VAR_1->data, VAR_1->length);
    break;
   }
  }
}
