
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int source_file ;
typedef int mrb_state ;
typedef int mrb_debug_context ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;

int32_t
FUNC_6(mrb_state *VAR_2, mrb_debug_context *VAR_3, char *VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
  char *VAR_7;
  source_file *VAR_8;

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
    return VAR_0;
  }

  VAR_7 = FUNC_5(VAR_4, '.');

  if (VAR_7 == ((void*)0) || FUNC_4(VAR_7, ".rb")) {
    FUNC_0("List command only supports .rb file.\n");
    return VAR_0;
  }

  if (VAR_5 > VAR_6) {
    return VAR_0;
  }

  if ((VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4)) != ((void*)0)) {
    FUNC_1(VAR_8, VAR_5, VAR_6);
    FUNC_2(VAR_2, VAR_8);
    return VAR_1;
  }
  else {
    FUNC_0("Invalid source file named %s.\n", VAR_4);
    return VAR_0;
  }
}
