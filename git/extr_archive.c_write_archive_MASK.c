
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct archiver_args {struct repository* repo; } ;
struct archiver {int (* write_archive ) (struct archiver const*,struct archiver_args*) ;} ;
struct TYPE_2__ {int have_repository; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,char const**,struct archiver const**,struct archiver_args*,char const*,int) ;
 int FUNC_3 (char const**,struct archiver_args*) ;
 int FUNC_4 (char const**,struct archiver_args*,char const*,int) ;
 int VAR_1 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (struct archiver const*,struct archiver_args*) ;

int FUNC_7(int VAR_3, const char **VAR_4, const char *VAR_5,
    struct repository *VAR_6,
    const char *VAR_7, int VAR_8)
{
 const struct archiver *VAR_9 = ((void*)0);
 struct archiver_args VAR_10;

 FUNC_1("uploadarchive.allowunreachable", &VAR_1);
 FUNC_0(VAR_0, ((void*)0));

 VAR_10.repo = VAR_6;
 VAR_3 = FUNC_2(VAR_3, VAR_4, &VAR_9, &VAR_10, VAR_7, VAR_8);
 if (!VAR_2->have_repository) {





  FUNC_5();
 }

 FUNC_4(VAR_4, &VAR_10, VAR_5, VAR_8);
 FUNC_3(VAR_4 + 1, &VAR_10);

 return VAR_9->write_archive(VAR_9, &VAR_10);
}
