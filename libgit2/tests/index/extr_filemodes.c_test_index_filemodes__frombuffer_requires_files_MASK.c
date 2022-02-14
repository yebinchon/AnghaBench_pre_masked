
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int new_entry ;
struct TYPE_7__ {char* path; void* mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,TYPE_1__*,char const*,int ) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (char const*) ;

void FUNC_12(void)
{
 git_index *VAR_6;
 git_index_entry VAR_7;
 const git_index_entry *VAR_8;
 const char *VAR_9 = "hey there\n";

 FUNC_10(&VAR_7, 0, sizeof(VAR_7));
 FUNC_5(FUNC_9(&VAR_6, VAR_5));


 VAR_7.path = "dummy-file.txt";
 VAR_7.mode = VAR_0;

 FUNC_5(FUNC_6(VAR_6,
  &VAR_7, VAR_9, FUNC_11(VAR_9)));

 FUNC_0((VAR_8 = FUNC_8(VAR_6, "dummy-file.txt", 0)));
 FUNC_3("dummy-file.txt", VAR_8->path);
 FUNC_1(VAR_0, VAR_8->mode);


 VAR_7.path = "dummy-file.txt";
 VAR_7.mode = VAR_1;

 FUNC_5(FUNC_6(VAR_6,
  &VAR_7, VAR_9, FUNC_11(VAR_9)));

 FUNC_0((VAR_8 = FUNC_8(VAR_6, "dummy-file.txt", 0)));
 FUNC_3("dummy-file.txt", VAR_8->path);
 FUNC_1(VAR_1, VAR_8->mode);


 VAR_7.path = "dummy-link.txt";
 VAR_7.mode = VAR_3;

 FUNC_5(FUNC_6(VAR_6,
  &VAR_7, VAR_9, FUNC_11(VAR_9)));

 FUNC_0((VAR_8 = FUNC_8(VAR_6, "dummy-link.txt", 0)));
 FUNC_3("dummy-link.txt", VAR_8->path);
 FUNC_1(VAR_3, VAR_8->mode);


 VAR_7.path = "invalid_mode.txt";
 VAR_7.mode = VAR_4;

 FUNC_4(FUNC_6(VAR_6,
  &VAR_7, VAR_9, FUNC_11(VAR_9)));
 FUNC_2(((void*)0), FUNC_8(VAR_6, "invalid_mode.txt", 0));


 VAR_7.path = "invalid_mode.txt";
 VAR_7.mode = VAR_2;

 FUNC_4(FUNC_6(VAR_6,
  &VAR_7, VAR_9, FUNC_11(VAR_9)));
 FUNC_2(((void*)0), FUNC_8(VAR_6, "invalid_mode.txt", 0));

 FUNC_7(VAR_6);
}
