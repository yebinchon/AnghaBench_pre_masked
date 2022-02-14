
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; scalar_t__ buf; } ;
struct patch {int inaccurate_eof; int recount; scalar_t__ old_name; scalar_t__ new_name; struct patch* next; } ;
struct apply_state {char const* patch_input_file; scalar_t__ apply_verbosity; scalar_t__ ws_error_action; int update_index; int fn_table; scalar_t__ summary; scalar_t__ numstat; scalar_t__ diffstat; scalar_t__ fake_ancestor; scalar_t__ apply_with_reject; scalar_t__ apply; scalar_t__ check; scalar_t__ check_index; int lock_file; int repo; scalar_t__ index_file; scalar_t__ ita_only; scalar_t__ whitespace_error; scalar_t__ apply_in_reverse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct apply_state*,struct patch*) ;
 int FUNC_2 (struct apply_state*,struct patch*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct patch*) ;
 int FUNC_6 (struct patch*) ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct apply_state*,struct patch*) ;
 int FUNC_10 (struct apply_state*,scalar_t__,size_t,struct patch*) ;
 int FUNC_11 (struct apply_state*,struct patch*) ;
 scalar_t__ FUNC_12 (struct apply_state*) ;
 scalar_t__ FUNC_13 (struct strbuf*,int) ;
 int FUNC_14 (int ,int *,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct patch*) ;
 int FUNC_17 (int ,int ,struct patch*) ;
 int FUNC_18 (struct apply_state*,struct patch*) ;
 int VAR_6 ;
 int FUNC_19 (struct strbuf*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (struct patch*) ;
 scalar_t__ FUNC_22 (struct apply_state*,struct patch*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_23 (struct apply_state*,struct patch*) ;
 struct patch* FUNC_24 (int,int) ;

__attribute__((used)) static int FUNC_25(struct apply_state *VAR_9,
         int VAR_10,
         const char *VAR_11,
         int VAR_12)
{
 size_t VAR_13;
 struct strbuf VAR_14 = VAR_4;
 struct patch *VAR_15 = ((void*)0), **VAR_16 = &VAR_15;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;

 VAR_9->patch_input_file = VAR_11;
 if (FUNC_13(&VAR_14, VAR_10) < 0)
  return -128;
 VAR_13 = 0;
 while (VAR_13 < VAR_14.len) {
  struct patch *VAR_20;
  int VAR_21;

  VAR_20 = FUNC_24(1, sizeof(*VAR_20));
  VAR_20->inaccurate_eof = !!(VAR_12 & VAR_0);
  VAR_20->recount = !!(VAR_12 & VAR_1);
  VAR_21 = FUNC_10(VAR_9, VAR_14.buf + VAR_13, VAR_14.len - VAR_13, VAR_20);
  if (VAR_21 < 0) {
   FUNC_5(VAR_20);
   if (VAR_21 == -128) {
    VAR_18 = -128;
    goto end;
   }
   break;
  }
  if (VAR_9->apply_in_reverse)
   FUNC_16(VAR_20);
  if (FUNC_22(VAR_9, VAR_20)) {
   FUNC_11(VAR_9, VAR_20);
   *VAR_16 = VAR_20;
   VAR_16 = &VAR_20->next;

   if ((VAR_20->new_name &&
        FUNC_3(VAR_20->new_name,
             VAR_2)) ||
       (VAR_20->old_name &&
        FUNC_3(VAR_20->old_name,
             VAR_2)))
    VAR_19 = 1;
  }
  else {
   if (VAR_9->apply_verbosity > VAR_7)
    FUNC_17(VAR_6, FUNC_0("Skipped patch '%s'."), VAR_20);
   FUNC_5(VAR_20);
   VAR_17++;
  }
  VAR_13 += VAR_21;
 }

 if (!VAR_15 && !VAR_17) {
  FUNC_4(FUNC_0("unrecognized input"));
  VAR_18 = -128;
  goto end;
 }

 if (VAR_9->whitespace_error && (VAR_9->ws_error_action == VAR_5))
  VAR_9->apply = 0;

 VAR_9->update_index = (VAR_9->check_index || VAR_9->ita_only) && VAR_9->apply;
 if (VAR_9->update_index && !FUNC_8(&VAR_9->lock_file)) {
  if (VAR_9->index_file)
   FUNC_7(&VAR_9->lock_file,
        VAR_9->index_file,
        VAR_3);
  else
   FUNC_14(VAR_9->repo, &VAR_9->lock_file,
            VAR_3);
 }

 if (VAR_9->check_index && FUNC_12(VAR_9) < 0) {
  FUNC_4(FUNC_0("unable to read index file"));
  VAR_18 = -128;
  goto end;
 }

 if (VAR_9->check || VAR_9->apply) {
  int VAR_22 = FUNC_2(VAR_9, VAR_15);
  if (VAR_22 == -128) {
   VAR_18 = -128;
   goto end;
  }
  if (VAR_22 < 0 && !VAR_9->apply_with_reject) {
   VAR_18 = -1;
   goto end;
  }
 }

 if (VAR_9->apply) {
  int VAR_23 = FUNC_23(VAR_9, VAR_15);
  if (VAR_23 < 0) {
   VAR_18 = -128;
   goto end;
  }
  if (VAR_23 > 0) {

   VAR_18 = VAR_9->apply_with_reject ? -1 : 1;
   goto end;
  }
 }

 if (VAR_9->fake_ancestor &&
     FUNC_1(VAR_9, VAR_15)) {
  VAR_18 = -128;
  goto end;
 }

 if (VAR_9->diffstat && VAR_9->apply_verbosity > VAR_8)
  FUNC_18(VAR_9, VAR_15);

 if (VAR_9->numstat && VAR_9->apply_verbosity > VAR_8)
  FUNC_9(VAR_9, VAR_15);

 if (VAR_9->summary && VAR_9->apply_verbosity > VAR_8)
  FUNC_21(VAR_15);

 if (VAR_19)
  FUNC_15();
end:
 FUNC_6(VAR_15);
 FUNC_19(&VAR_14);
 FUNC_20(&VAR_9->fn_table, 0);
 return VAR_18;
}
