
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct lun {int l_name; int l_options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 struct lun* FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct lun*,int ) ;
 int FUNC_3 (struct lun*,int ) ;
 int FUNC_4 (struct lun*,int ) ;
 int FUNC_5 (struct lun*,int ) ;
 int FUNC_6 (struct lun*,int ) ;
 int FUNC_7 (struct lun*,int ) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (char const*,char*) ;
 TYPE_1__* FUNC_10 (TYPE_1__ const*,int **,int) ;
 char* FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*) ;
 int FUNC_14 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_4, const ucl_object_t *VAR_5)
{
 struct lun *VAR_6;
 ucl_object_iter_t VAR_7 = ((void*)0), VAR_8 = ((void*)0);
 const ucl_object_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const char *VAR_11;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return (1);

 while ((VAR_9 = FUNC_10(VAR_5, &VAR_7, 1))) {
  VAR_11 = FUNC_11(VAR_9);

  if (!FUNC_9(VAR_11, "backend")) {
   if (VAR_9->type != VAR_2) {
    FUNC_0("\"backend\" property of lun "
        "\"%s\" is not a string",
        VAR_6->l_name);
    return (1);
   }

   FUNC_2(VAR_6, FUNC_13(VAR_9));
  }

  if (!FUNC_9(VAR_11, "blocksize")) {
   if (VAR_9->type != VAR_0) {
    FUNC_0("\"blocksize\" property of lun "
        "\"%s\" is not an integer", VAR_6->l_name);
    return (1);
   }

   FUNC_3(VAR_6, FUNC_12(VAR_9));
  }

  if (!FUNC_9(VAR_11, "device-id")) {
   if (VAR_9->type != VAR_2) {
    FUNC_0("\"device-id\" property of lun "
        "\"%s\" is not an integer", VAR_6->l_name);
    return (1);
   }

   FUNC_4(VAR_6, FUNC_13(VAR_9));
  }

  if (!FUNC_9(VAR_11, "options")) {
   if (VAR_9->type != VAR_1) {
    FUNC_0("\"options\" property of lun "
        "\"%s\" is not an object", VAR_6->l_name);
    return (1);
   }

   while ((VAR_10 = FUNC_10(VAR_9, &VAR_8,
       1))) {
    FUNC_8(&VAR_6->l_options,
        FUNC_11(VAR_10),
        FUNC_14(VAR_10));
   }
  }

  if (!FUNC_9(VAR_11, "path")) {
   if (VAR_9->type != VAR_2) {
    FUNC_0("\"path\" property of lun "
        "\"%s\" is not a string", VAR_6->l_name);
    return (1);
   }

   FUNC_5(VAR_6, FUNC_13(VAR_9));
  }

  if (!FUNC_9(VAR_11, "serial")) {
   if (VAR_9->type != VAR_2) {
    FUNC_0("\"serial\" property of lun "
        "\"%s\" is not a string", VAR_6->l_name);
    return (1);
   }

   FUNC_6(VAR_6, FUNC_13(VAR_9));
  }

  if (!FUNC_9(VAR_11, "size")) {
   if (VAR_9->type != VAR_0) {
    FUNC_0("\"size\" property of lun "
        "\"%s\" is not an integer", VAR_6->l_name);
    return (1);
   }

   FUNC_7(VAR_6, FUNC_12(VAR_9));
  }
 }

 return (0);
}
