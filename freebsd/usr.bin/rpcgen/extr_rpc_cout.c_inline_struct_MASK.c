
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* decls; } ;
struct TYPE_11__ {TYPE_1__ st; } ;
struct TYPE_12__ {TYPE_2__ def; } ;
typedef TYPE_3__ definition ;
struct TYPE_15__ {scalar_t__ rel; int array_max; int type; int * prefix; } ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_6__ decl; } ;
typedef TYPE_4__ decl_list ;
struct TYPE_14__ {int length; } ;
typedef TYPE_5__ bas_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,TYPE_6__*,int) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_5__* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int,TYPE_6__*) ;
 int FUNC_5 (char*,char*,char const*,int ,...) ;
 char* FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,int) ;
 char* FUNC_9 (char*,scalar_t__) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(definition *VAR_5, int VAR_6)
{
 decl_list *VAR_7;
 int VAR_8, VAR_9;
 decl_list *VAR_10, *VAR_11;
 bas_type *VAR_12;
 char *VAR_13;
 const char *VAR_14;
 char VAR_15[256];
 int VAR_16 = 1;

 VAR_10 = ((void*)0);
 if (VAR_6 == VAR_0)
  FUNC_1(VAR_3, "\n\tif (xdrs->x_op == XDR_ENCODE) {\n");
 else
  FUNC_1(VAR_3, "\t\treturn (TRUE);\n\t} else if (xdrs->x_op == XDR_DECODE) {\n");

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_13 = ((void*)0);
 for (VAR_7 = VAR_5->def.st.decls; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {

  if ((VAR_7->decl.prefix == ((void*)0)) &&
      ((VAR_12 = FUNC_2(VAR_7->decl.type)) != ((void*)0)) &&
      ((VAR_7->decl.rel == VAR_1) ||
       (VAR_7->decl.rel == VAR_2))){
   if (VAR_8 == 0)
    VAR_10 = VAR_7;
   VAR_8++;

   if (VAR_7->decl.rel == VAR_1)
    VAR_9 += VAR_12->length;
   else {

    if (VAR_13 == ((void*)0))
     VAR_14 = "";
    else
     VAR_14 = " + ";

    if (VAR_12->length != 1)
     FUNC_5(VAR_15, "%s%s * %d",
      VAR_14, VAR_7->decl.array_max,
      VAR_12->length);
    else
     FUNC_5(VAR_15, "%s%s", VAR_14,
      VAR_7->decl.array_max);


    if (VAR_13 == ((void*)0)) {
     VAR_13 = FUNC_10(VAR_15);
    }
    else{
     VAR_13 = FUNC_9(VAR_13,
         FUNC_7(VAR_13)
         +FUNC_7(VAR_15)+1);
     VAR_13 = FUNC_6(VAR_13, VAR_15);

    }
   }
  } else {
   if (VAR_8 > 0) {
    if (VAR_13 == ((void*)0) && VAR_9 < VAR_4){




     while (VAR_10 != VAR_7){
      FUNC_4(VAR_16 + 1, &VAR_10->decl);
      VAR_10 = VAR_10->next;
     }
    } else {

     FUNC_8(VAR_3, VAR_16 + 1);
     if (VAR_13 == ((void*)0))
      FUNC_1(VAR_3, "buf = XDR_INLINE(xdrs, %d * BYTES_PER_XDR_UNIT);",
       VAR_9);
     else {
      if (VAR_9 == 0)
       FUNC_1(VAR_3,
        "buf = XDR_INLINE(xdrs, (%s) * BYTES_PER_XDR_UNIT);",
        VAR_13);
      else
       FUNC_1(VAR_3,
        "buf = XDR_INLINE(xdrs, (%d + (%s)) * BYTES_PER_XDR_UNIT);",
        VAR_9, VAR_13);

     }
     FUNC_1(VAR_3, "\n");
     FUNC_8(VAR_3, VAR_16 + 1);
     FUNC_1(VAR_3,
      "if (buf == NULL) {\n");

     VAR_11 = VAR_10;
     while (VAR_10 != VAR_7){
      FUNC_4(VAR_16 + 2, &VAR_10->decl);
      VAR_10 = VAR_10->next;
     }

     FUNC_1(VAR_3, "\n\t\t} else {\n");

     VAR_10 = VAR_11;
     while (VAR_10 != VAR_7){
      FUNC_0(VAR_16 + 2, &VAR_10->decl, VAR_6);
      VAR_10 = VAR_10->next;
     }

     FUNC_8(VAR_3, VAR_16 + 1);
     FUNC_1(VAR_3, "}\n");
    }
   }
   VAR_9 = 0;
   VAR_8 = 0;
   FUNC_3(VAR_13);
   VAR_13 = ((void*)0);
   FUNC_4(VAR_16 + 1, &VAR_7->decl);
  }
 }

 if (VAR_8 > 0) {
  if (VAR_13 == ((void*)0) && VAR_9 < VAR_4){

   while (VAR_10 != VAR_7){
    FUNC_4(VAR_16 + 1, &VAR_10->decl);
    VAR_10 = VAR_10->next;
   }
  } else {

   if (VAR_13 == ((void*)0))
    FUNC_1(VAR_3, "\t\tbuf = XDR_INLINE(xdrs, %d * BYTES_PER_XDR_UNIT);",
     VAR_9);
   else
    if (VAR_9 == 0)
     FUNC_1(VAR_3,
      "\t\tbuf = XDR_INLINE(xdrs, (%s) * BYTES_PER_XDR_UNIT);",
      VAR_13);
    else
     FUNC_1(VAR_3,
      "\t\tbuf = XDR_INLINE(xdrs, (%d + (%s)) * BYTES_PER_XDR_UNIT);",
      VAR_9, VAR_13);

   FUNC_1(VAR_3, "\n\t\tif (buf == NULL) {\n");
   VAR_11 = VAR_10;
   while (VAR_10 != ((void*)0)){
    FUNC_4(VAR_16 + 2, &VAR_10->decl);
    VAR_10 = VAR_10->next;
   }
   FUNC_1(VAR_3, "\t\t} else {\n");

   VAR_10 = VAR_11;
   while (VAR_10 != VAR_7){
    FUNC_0(VAR_16 + 2, &VAR_10->decl, VAR_6);
    VAR_10 = VAR_10->next;
   }
   FUNC_1(VAR_3, "\t\t}\n");
  }
 }
}
