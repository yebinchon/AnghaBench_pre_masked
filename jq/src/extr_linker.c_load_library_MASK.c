
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int dummy; } ;
struct lib_loading_state {int ct; void** defs; void** names; } ;
typedef int jv ;
typedef int jq_state ;
typedef void* block ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int ,char const*) ;
 void* FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct locfile*,void**) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 void* FUNC_14 (void**,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct locfile*) ;
 struct locfile* FUNC_20 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_21 (int *,int ,int ,void**,struct lib_loading_state*) ;
 void* FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(jq_state *VAR_1, jv VAR_2, int VAR_3, int VAR_4, int VAR_5, const char *VAR_6, block *VAR_7, struct lib_loading_state *VAR_8) {
  int VAR_9 = 0;
  struct locfile* VAR_10 = ((void*)0);
  block VAR_11;
  jv VAR_12;
  if (VAR_3 && !VAR_4)
    VAR_12 = FUNC_13(FUNC_18(VAR_2), 0);
  else
    VAR_12 = FUNC_13(FUNC_18(VAR_2), 1);
  int VAR_13;
  if (!FUNC_12(VAR_12)) {
    VAR_11 = FUNC_4();
    if (!VAR_5) {
      if (FUNC_11(FUNC_8(VAR_12)))
        VAR_12 = FUNC_10(VAR_12);
      else
        VAR_12 = FUNC_15("unknown error");
      FUNC_7(VAR_1, FUNC_16("jq: error loading data file %s: %s\n", FUNC_18(VAR_2), FUNC_18(VAR_12)));
      VAR_9++;
    }
    goto out;
  } else if (VAR_3) {

    VAR_11 = FUNC_3(FUNC_8(VAR_12), VAR_6);
  } else {

    VAR_10 = FUNC_20(VAR_1, FUNC_18(VAR_2), FUNC_18(VAR_12), FUNC_17(FUNC_8(VAR_12)));
    VAR_9 += FUNC_6(VAR_10, &VAR_11);
    FUNC_19(VAR_10);
    if (VAR_9 == 0) {
      char *VAR_14 = FUNC_22(FUNC_18(VAR_2));
      VAR_9 += FUNC_21(VAR_1, FUNC_5(VAR_1),
                                      FUNC_15(FUNC_1(VAR_14)),
                                      &VAR_11, VAR_8);
      FUNC_2(VAR_14);
      VAR_11 = FUNC_0(VAR_11, VAR_0);
    }
  }
  VAR_13 = VAR_8->ct++;
  VAR_8->names = FUNC_14(VAR_8->names, VAR_8->ct * sizeof(const char *));
  VAR_8->defs = FUNC_14(VAR_8->defs, VAR_8->ct * sizeof(block));
  VAR_8->names[VAR_13] = FUNC_22(FUNC_18(VAR_2));
  VAR_8->defs[VAR_13] = VAR_11;
out:
  *VAR_7 = VAR_11;
  FUNC_9(VAR_2);
  FUNC_9(VAR_12);
  return VAR_9;
}
