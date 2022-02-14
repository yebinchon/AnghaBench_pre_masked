
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun0 ;
struct sockaddr_un {char* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mode_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,int ,char*,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,int,char*,char*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static mrb_value
FUNC_19(mrb_state *VAR_4, mrb_value VAR_5)
{
  char VAR_6[] = "tmp.mruby-io-test-r.XXXXXXXX";
  char VAR_7[] = "tmp.mruby-io-test-w.XXXXXXXX";
  char VAR_8[] = "tmp.mruby-io-test-l.XXXXXXXX";
  char VAR_9[] = "tmp.mruby-io-test-s.XXXXXXXX";
  char VAR_10[] = "mruby io test\n";
  mode_t VAR_11;
  int VAR_12, VAR_13;
  FILE *VAR_14;


  int VAR_15, VAR_16;
  struct sockaddr_un VAR_17;


  VAR_11 = FUNC_17(077);
  VAR_12 = FUNC_5(VAR_6);
  VAR_13 = FUNC_5(VAR_7);
  if (VAR_12 == -1 || VAR_13 == -1) {
    FUNC_10(VAR_4, VAR_1, "can't create temporary file");
    return FUNC_9();
  }
  FUNC_1(VAR_12);
  FUNC_1(VAR_13);


  VAR_15 = FUNC_5(VAR_8);
  VAR_16 = FUNC_5(VAR_9);
  if (VAR_15 == -1 || VAR_16 == -1) {
    FUNC_10(VAR_4, VAR_1, "can't create temporary file");
    return FUNC_9();
  }

  FUNC_17(VAR_11);

  FUNC_7(VAR_4, FUNC_8(VAR_4, "$mrbtest_io_rfname"), FUNC_12(VAR_4, VAR_6));
  FUNC_7(VAR_4, FUNC_8(VAR_4, "$mrbtest_io_wfname"), FUNC_12(VAR_4, VAR_7));
  FUNC_7(VAR_4, FUNC_8(VAR_4, "$mrbtest_io_symlinkname"), FUNC_12(VAR_4, VAR_8));
  FUNC_7(VAR_4, FUNC_8(VAR_4, "$mrbtest_io_socketname"), FUNC_12(VAR_4, VAR_9));
  FUNC_7(VAR_4, FUNC_8(VAR_4, "$mrbtest_io_msg"), FUNC_12(VAR_4, VAR_10));

  VAR_14 = FUNC_3(VAR_6, "wb");
  if (VAR_14 == ((void*)0)) {
    FUNC_10(VAR_4, VAR_1, "can't open temporary file");
    return FUNC_9();
  }
  FUNC_4(VAR_10, VAR_14);
  FUNC_2(VAR_14);

  VAR_14 = FUNC_3(VAR_7, "wb");
  if (VAR_14 == ((void*)0)) {
    FUNC_10(VAR_4, VAR_1, "can't open temporary file");
    return FUNC_9();
  }
  FUNC_2(VAR_14);


  FUNC_18(VAR_8);
  FUNC_1(VAR_15);
  if (FUNC_16(VAR_6, VAR_8) == -1) {
    FUNC_10(VAR_4, VAR_1, "can't make a symbolic link");
  }

  FUNC_18(VAR_9);
  FUNC_1(VAR_16);
  VAR_16 = FUNC_15(VAR_0, VAR_2, 0);
  if (VAR_16 == -1) {
    FUNC_10(VAR_4, VAR_1, "can't make a socket");
  }
  VAR_17 = VAR_0;
  FUNC_14(VAR_17, sizeof(VAR_17), "%s", VAR_9);
  if (FUNC_0(VAR_16, (struct sockaddr *)&VAR_17, sizeof(VAR_17)) == -1) {
    FUNC_11(VAR_4, VAR_1, "can't bind AF_UNIX socket to %S: %S",
               FUNC_12(VAR_4, VAR_17),
               FUNC_6(VAR_3));
  }
  FUNC_1(VAR_16);


  return FUNC_13();
}
