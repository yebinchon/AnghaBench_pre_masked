
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbg_string {int dummy; } ;
struct drbg_state {int pr; int seeded; int drbg_mutex; int * jent; int reseed_threshold; int * core; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drbg_state*) ;
 int * VAR_1 ;
 int FUNC_3 (struct drbg_state*) ;
 int FUNC_4 (struct drbg_state*) ;
 int FUNC_5 (struct drbg_state*,struct drbg_string*,int) ;
 int FUNC_6 (struct drbg_state*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct drbg_state *VAR_3, struct drbg_string *VAR_4,
       int VAR_5, bool VAR_6)
{
 int VAR_7;
 bool VAR_8 = 1;

 FUNC_9("DRBG: Initializing DRBG core %d with prediction resistance "
   "%s\n", VAR_5, VAR_6 ? "enabled" : "disabled");
 FUNC_7(&VAR_3->drbg_mutex);
 if (!VAR_3->core) {
  VAR_3->core = &VAR_1[VAR_5];
  VAR_3->pr = VAR_6;
  VAR_3->seeded = 0;
  VAR_3->reseed_threshold = FUNC_3(VAR_3);

  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7)
   goto unlock;

  VAR_7 = FUNC_4(VAR_3);
  if (VAR_7)
   goto free_everything;

  if (FUNC_0(VAR_3->jent)) {
   VAR_7 = FUNC_1(VAR_3->jent);
   VAR_3->jent = ((void*)0);
   if (VAR_2 || VAR_7 != -VAR_0)
    goto free_everything;
   FUNC_10("DRBG: Continuing without Jitter RNG\n");
  }

  VAR_8 = 0;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_8);

 if (VAR_7 && !VAR_8)
  goto free_everything;

 FUNC_8(&VAR_3->drbg_mutex);
 return VAR_7;

unlock:
 FUNC_8(&VAR_3->drbg_mutex);
 return VAR_7;

free_everything:
 FUNC_8(&VAR_3->drbg_mutex);
 FUNC_6(VAR_3);
 return VAR_7;
}
