
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct repository {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct repository*,int,struct commit**,char const*) ;
 int FUNC_3 (int,struct commit**,int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 struct commit** FUNC_7 (struct repository*,int*) ;
 char* FUNC_8 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,struct stat*) ;
 int VAR_5 ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void FUNC_12(struct repository *VAR_6,
         const char *VAR_7,
         int VAR_8)
{
 char *VAR_9 = FUNC_8("BISECT_ANCESTORS_OK");
 struct stat VAR_10;
 int VAR_11, VAR_12;
 struct commit **VAR_13;

 if (!VAR_3)
  FUNC_5(FUNC_1("a %s revision is needed"), VAR_5);


 if (!FUNC_10(VAR_9, &VAR_10) && FUNC_0(VAR_10.st_mode))
  goto done;


 if (VAR_4.nr == 0)
  goto done;


 VAR_13 = FUNC_7(VAR_6, &VAR_12);
 if (FUNC_2(VAR_6, VAR_12, VAR_13, VAR_7))
  FUNC_3(VAR_12, VAR_13, VAR_8);
 FUNC_6(VAR_13);


 VAR_11 = FUNC_9(VAR_9, VAR_0 | VAR_1 | VAR_2, 0600);
 if (VAR_11 < 0)
  FUNC_11(FUNC_1("could not create file '%s'"),
         VAR_9);
 else
  FUNC_4(VAR_11);
 done:
 FUNC_6(VAR_9);
}
