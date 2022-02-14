
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apply_state {int whitespace_error; int squelch_whitespace_errors; scalar_t__ ws_error_action; int applied_after_fixing_ws; scalar_t__ apply_verbosity; int saved_warn_routine; int saved_error_routine; int lock_file; TYPE_1__* repo; scalar_t__ update_index; scalar_t__ apply; int prefix; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct apply_state*,int,char const*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,int ) ;
 char* FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct apply_state*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*,char*) ;
 char* FUNC_13 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int *,int ) ;

int FUNC_16(struct apply_state *VAR_5,
        int VAR_6,
        const char **VAR_7,
        int VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 1;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  const char *VAR_13 = VAR_7[VAR_9];
  char *VAR_14 = ((void*)0);
  int VAR_15;

  if (!FUNC_12(VAR_13, "-")) {
   VAR_10 = FUNC_2(VAR_5, 0, "<stdin>", VAR_8);
   if (VAR_10 < 0)
    goto end;
   VAR_11 |= VAR_10;
   VAR_12 = 0;
   continue;
  } else
   VAR_13 = VAR_14 = FUNC_7(VAR_5->prefix, VAR_13);

  VAR_15 = FUNC_6(VAR_13, VAR_1);
  if (VAR_15 < 0) {
   FUNC_4(FUNC_1("can't open patch '%s': %s"), VAR_13, FUNC_13(VAR_3));
   VAR_10 = -128;
   FUNC_5(VAR_14);
   goto end;
  }
  VAR_12 = 0;
  FUNC_9(VAR_5);
  VAR_10 = FUNC_2(VAR_5, VAR_15, VAR_13, VAR_8);
  FUNC_3(VAR_15);
  FUNC_5(VAR_14);
  if (VAR_10 < 0)
   goto end;
  VAR_11 |= VAR_10;
 }
 FUNC_9(VAR_5);
 if (VAR_12) {
  VAR_10 = FUNC_2(VAR_5, 0, "<stdin>", VAR_8);
  if (VAR_10 < 0)
   goto end;
  VAR_11 |= VAR_10;
 }

 if (VAR_5->whitespace_error) {
  if (VAR_5->squelch_whitespace_errors &&
      VAR_5->squelch_whitespace_errors < VAR_5->whitespace_error) {
   int VAR_16 =
    VAR_5->whitespace_error - VAR_5->squelch_whitespace_errors;
   FUNC_14(FUNC_0("squelched %d whitespace error",
       "squelched %d whitespace errors",
       VAR_16),
    VAR_16);
  }
  if (VAR_5->ws_error_action == VAR_2) {
   FUNC_4(FUNC_0("%d line adds whitespace errors.",
     "%d lines add whitespace errors.",
     VAR_5->whitespace_error),
         VAR_5->whitespace_error);
   VAR_10 = -128;
   goto end;
  }
  if (VAR_5->applied_after_fixing_ws && VAR_5->apply)
   FUNC_14(FUNC_0("%d line applied after"
       " fixing whitespace errors.",
       "%d lines applied after"
       " fixing whitespace errors.",
       VAR_5->applied_after_fixing_ws),
    VAR_5->applied_after_fixing_ws);
  else if (VAR_5->whitespace_error)
   FUNC_14(FUNC_0("%d line adds whitespace errors.",
       "%d lines add whitespace errors.",
       VAR_5->whitespace_error),
    VAR_5->whitespace_error);
 }

 if (VAR_5->update_index) {
  VAR_10 = FUNC_15(VAR_5->repo->index, &VAR_5->lock_file, VAR_0);
  if (VAR_10) {
   FUNC_4(FUNC_1("Unable to write new index file"));
   VAR_10 = -128;
   goto end;
  }
 }

 VAR_10 = !!VAR_11;

end:
 FUNC_8(&VAR_5->lock_file);

 if (VAR_5->apply_verbosity <= VAR_4) {
  FUNC_10(VAR_5->saved_error_routine);
  FUNC_11(VAR_5->saved_warn_routine);
 }

 if (VAR_10 > -1)
  return VAR_10;
 return (VAR_10 == -1 ? 1 : 128);
}
