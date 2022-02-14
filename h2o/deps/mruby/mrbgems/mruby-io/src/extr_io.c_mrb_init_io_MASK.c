
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_11__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct RClass*,int ) ;
 int VAR_0 ;
 struct RClass* FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,struct RClass*,int ) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,char*) ;

void
FUNC_12(mrb_state *VAR_23)
{
  struct RClass *VAR_24;

  VAR_24 = FUNC_4(VAR_23, "IO", VAR_23->object_class);
  FUNC_3(VAR_24, VAR_0);

  FUNC_8(VAR_23, VAR_24, FUNC_10(VAR_23, "Enumerable"));
  FUNC_5(VAR_23, VAR_24, "_popen", VAR_13, FUNC_0());
  FUNC_5(VAR_23, VAR_24, "_sysclose", VAR_15, FUNC_2(1));
  FUNC_5(VAR_23, VAR_24, "for_fd", VAR_11, FUNC_0());
  FUNC_5(VAR_23, VAR_24, "select", VAR_14, FUNC_0());
  FUNC_5(VAR_23, VAR_24, "sysopen", VAR_16, FUNC_0());

  FUNC_5(VAR_23, VAR_24, "_pipe", VAR_12, FUNC_1());


  FUNC_6(VAR_23, VAR_24, "initialize", VAR_7, FUNC_0());
  FUNC_6(VAR_23, VAR_24, "initialize_copy", VAR_8, FUNC_2(1));
  FUNC_6(VAR_23, VAR_24, "_check_readable", VAR_1, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "isatty", VAR_9, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "sync", VAR_19, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "sync=", VAR_18, FUNC_2(1));
  FUNC_6(VAR_23, VAR_24, "sysread", VAR_20, FUNC_0());
  FUNC_6(VAR_23, VAR_24, "sysseek", VAR_21, FUNC_2(1));
  FUNC_6(VAR_23, VAR_24, "syswrite", VAR_22, FUNC_2(1));
  FUNC_6(VAR_23, VAR_24, "close", VAR_2, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "close_write", VAR_4, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "close_on_exec=", VAR_17, FUNC_2(1));
  FUNC_6(VAR_23, VAR_24, "close_on_exec?", VAR_3, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "closed?", VAR_5, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "pid", VAR_10, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "fileno", VAR_6, FUNC_1());


  FUNC_7(VAR_23, FUNC_9(VAR_23, "$/"), FUNC_11(VAR_23, "\n"));
}
