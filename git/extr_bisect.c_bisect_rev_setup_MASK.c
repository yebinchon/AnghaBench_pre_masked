
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int commit_format; scalar_t__ abbrev; } ;
struct repository {int dummy; } ;
struct argv_array {int argv; int argc; } ;
struct TYPE_2__ {int nr; scalar_t__ oid; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct argv_array*,char*) ;
 int FUNC_1 (struct argv_array*,char const*,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct argv_array*) ;
 int FUNC_4 (struct repository*,struct rev_info*,char const*) ;
 int FUNC_5 (int ,int ,struct rev_info*,int *) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_4, struct rev_info *VAR_5,
        const char *VAR_6,
        const char *VAR_7, const char *VAR_8,
        int VAR_9)
{
 struct argv_array VAR_10 = VAR_0;
 int VAR_11;

 FUNC_4(VAR_4, VAR_5, VAR_6);
 VAR_5->abbrev = 0;
 VAR_5->commit_format = VAR_1;


 FUNC_0(&VAR_10, "bisect_rev_setup");
 FUNC_1(&VAR_10, VAR_7, FUNC_2(VAR_2));
 for (VAR_11 = 0; VAR_11 < VAR_3.nr; VAR_11++)
  FUNC_1(&VAR_10, VAR_8,
     FUNC_2(VAR_3.oid + VAR_11));
 FUNC_0(&VAR_10, "--");
 if (VAR_9)
  FUNC_3(&VAR_10);

 FUNC_5(VAR_10.argc, VAR_10.argv, VAR_5, ((void*)0));

}
