
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* _trailer_block; int count; int trailers; } ;
typedef TYPE_1__ git_message_trailer_array ;
struct TYPE_9__ {char* key; char* value; } ;
typedef TYPE_2__ git_message_trailer ;
struct TYPE_10__ {int size; int ptr; } ;
typedef TYPE_3__ git_array_trailer_t ;
typedef enum trailer_state { ____Placeholder_trailer_state } trailer_state ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int VAR_1 ;
 char* FUNC_2 (char const*,size_t*) ;
 TYPE_2__* FUNC_3 (TYPE_3__) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ,char) ;

int FUNC_6(git_message_trailer_array *VAR_2, const char *VAR_3)
{
 enum trailer_state VAR_4 = 131;
 int VAR_5 = 0;
 char *VAR_6;
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 git_array_trailer_t VAR_9 = VAR_0;

 size_t VAR_10;
 char *VAR_11 = FUNC_2(VAR_3, &VAR_10);
 if (VAR_11 == ((void*)0))
  return -1;

 for (VAR_6 = VAR_11;;) {
  switch (VAR_4) {
   case 131: {
    if (*VAR_6 == 0) {
     goto ret;
    }

    VAR_7 = VAR_6;
    FUNC_0(134);
   }
   case 134: {
    if (*VAR_6 == 0) {
     goto ret;
    }

    if (FUNC_4(*VAR_6) || *VAR_6 == '-') {

     FUNC_1(134);
    }

    if (*VAR_6 == ' ' || *VAR_6 == '\t') {

     *VAR_6 = 0;
     FUNC_1(133);
    }

    if (FUNC_5(VAR_1, *VAR_6)) {
     *VAR_6 = 0;
     FUNC_1(132);
    }


    FUNC_0(135);
   }
   case 133: {
    if (*VAR_6 == 0) {
     goto ret;
    }

    if (*VAR_6 == ' ' || *VAR_6 == '\t') {
     FUNC_1(133);
    }

    if (FUNC_5(VAR_1, *VAR_6)) {
     FUNC_1(132);
    }


    FUNC_0(135);
   }
   case 132: {
    if (*VAR_6 == 0) {
     goto ret;
    }

    if (*VAR_6 == ' ' || *VAR_6 == '\t') {
     FUNC_1(132);
    }

    VAR_8 = VAR_6;
    FUNC_1(130);
   }
   case 130: {
    if (*VAR_6 == 0) {
     FUNC_0(129);
    }

    if (*VAR_6 == '\n') {
     FUNC_1(128);
    }

    FUNC_1(130);
   }
   case 128: {
    if (*VAR_6 == ' ') {

     FUNC_1(130);
    }

    VAR_6[-1] = 0;
    FUNC_0(129);
   }
   case 129: {
    git_message_trailer *VAR_12 = FUNC_3(VAR_9);

    VAR_12->key = VAR_7;
    VAR_12->value = VAR_8;

    VAR_7 = ((void*)0);
    VAR_8 = ((void*)0);

    FUNC_0(131);
   }
   case 135: {
    if (*VAR_6 == 0) {
     goto ret;
    }

    if (*VAR_6 == '\n') {
     FUNC_1(131);
    }

    FUNC_1(135);
   }
  }
 }

ret:
 VAR_2->_trailer_block = VAR_11;
 VAR_2->trailers = VAR_9.ptr;
 VAR_2->count = VAR_9.size;

 return VAR_5;
}
