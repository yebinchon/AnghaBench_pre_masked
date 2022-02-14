
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int pending; } ;
struct repository {int dummy; } ;
struct lock_file {int dummy; } ;


 int VAR_0 ;
 struct lock_file VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct lock_file*) ;
 scalar_t__ FUNC_2 (int,struct rev_info*,int,char const**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (struct lock_file*,char const*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct repository*,struct rev_info*,int *) ;
 int FUNC_9 (struct lock_file*) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int,char const**,struct rev_info*,int *) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,struct rev_info*) ;
 int FUNC_14 (int,int ,int ) ;
 scalar_t__ FUNC_15 (int,struct rev_info*) ;

int FUNC_16(struct repository *VAR_4, const char *VAR_5,
    int VAR_6, const char **VAR_7)
{
 struct lock_file VAR_8 = VAR_1;
 int VAR_9 = -1;
 int VAR_10;
 int VAR_11 = 0;
 struct rev_info VAR_12;

 VAR_10 = !FUNC_11(VAR_5, "-");
 if (VAR_10)
  VAR_9 = 1;
 else
  VAR_9 = FUNC_6(&VAR_8, VAR_5,
            VAR_0);


 FUNC_14(VAR_9, VAR_2, FUNC_12(VAR_2));


 VAR_3 = 0;
 FUNC_8(VAR_4, &VAR_12, ((void*)0));


 if (FUNC_2(VAR_9, &VAR_12, VAR_6, VAR_7))
  goto err;

 VAR_6 = FUNC_10(VAR_6, VAR_7, &VAR_12, ((void*)0));

 if (VAR_6 > 1) {
  FUNC_5(FUNC_0("unrecognized argument: %s"), VAR_7[1]);
  goto err;
 }

 FUNC_7(&VAR_12.pending);

 VAR_11 = FUNC_13(VAR_9, &VAR_12);
 if (!VAR_11)
  FUNC_3(FUNC_0("Refusing to create empty bundle."));
 else if (VAR_11 < 0)
  goto err;


 if (FUNC_15(VAR_9, &VAR_12))
  goto err;

 if (!VAR_10) {
  if (FUNC_1(&VAR_8))
   FUNC_4(FUNC_0("cannot create '%s'"), VAR_5);
 }
 return 0;
err:
 FUNC_9(&VAR_8);
 return -1;
}
