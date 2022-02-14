
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {size_t len; size_t start; char* data; } ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int* FUNC_7 (int*,char,size_t) ;
 int FUNC_8 (int*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char) ;
 int FUNC_12 (int) ;
 int VAR_2 ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(int VAR_3)
{
 uint8_t *VAR_4, *VAR_5, *VAR_6, VAR_7;
 size_t VAR_8, VAR_9;

 for (;;) {
  VAR_8 = VAR_0.len;
  if (VAR_8 == 0)
   return;
  VAR_4 = FUNC_5(&VAR_0);
  switch (*VAR_4) {
  case 0x03:
   FUNC_0("<- Ctrl-C\n");
   FUNC_4(&VAR_0, 1);

   FUNC_1();
   break;
  case '+':

   FUNC_0("<- +\n");
   if (FUNC_10())
    FUNC_6(&VAR_1);
   FUNC_4(&VAR_0, 1);
   if (VAR_2) {
    VAR_2 = 0;
    FUNC_9();
    FUNC_12(VAR_3);
   }
   break;
  case '-':

   FUNC_0("<- -\n");
   if (FUNC_10()) {
    VAR_1.len += VAR_1.start;
    VAR_1.start = 0;
    if (VAR_1.data[0] == '+')
     FUNC_3(&VAR_1, 1);
    FUNC_0("-> %.*s\n", (int)VAR_1.len,
        FUNC_5(&VAR_1));
   }
   FUNC_4(&VAR_0, 1);
   FUNC_12(VAR_3);
   break;
  case '$':


   if (FUNC_10()) {
    FUNC_13("New GDB command while response in "
        "progress");
    FUNC_6(&VAR_1);
   }


   VAR_5 = FUNC_7(VAR_4, '#', VAR_8);
   if (VAR_5 == ((void*)0))
    return;
   VAR_9 = (VAR_5 - VAR_4 + 1) + 2;
   if (VAR_8 < VAR_9)
    return;
   FUNC_0("<- %.*s\n", (int)VAR_9, VAR_4);


   for (VAR_7 = 0, VAR_6 = VAR_4 + 1; VAR_6 < VAR_5; VAR_6++)
    VAR_7 += *VAR_6;
   if (VAR_7 != FUNC_8(VAR_5 + 1)) {
    FUNC_4(&VAR_0, VAR_9);
    FUNC_0("-> -\n");
    FUNC_11('-');
    FUNC_12(VAR_3);
    break;
   }
   FUNC_11('+');

   FUNC_2(VAR_4 + 1, VAR_5 - (VAR_4 + 1));
   FUNC_4(&VAR_0, VAR_9);
   if (!FUNC_10())
    FUNC_0("-> +\n");
   FUNC_12(VAR_3);
   break;
  default:

   FUNC_0("-> %02x\n", *VAR_4);
   FUNC_4(&VAR_0, 1);
   break;
  }
 }
}
