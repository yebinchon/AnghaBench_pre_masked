
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_10__ {char const* path; int id; void* mode; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int ,char const*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_9(void)
{
 const git_index_entry *VAR_12[3];
 git_oid VAR_13;
 const char *VAR_14 = "DIFFERS-IN-CASE.TXT";
 const char *VAR_15 = "Differs-In-Case.txt";
 const char *VAR_16;
 bool VAR_17 = FUNC_4(VAR_10, "core.ignorecase");

 git_index_entry VAR_18, VAR_19, VAR_20;

 FUNC_8(&VAR_18, 0x0, sizeof(git_index_entry));
 FUNC_8(&VAR_19, 0x0, sizeof(git_index_entry));
 FUNC_8(&VAR_20, 0x0, sizeof(git_index_entry));

 VAR_18.path = VAR_14;
 FUNC_0(&VAR_18, VAR_7);
 FUNC_7(&VAR_18.id, VAR_0);
 VAR_18.mode = VAR_6;

 VAR_19.path = VAR_14;
 FUNC_0(&VAR_19, VAR_8);
 FUNC_7(&VAR_19.id, VAR_1);
 VAR_19.mode = VAR_6;

 VAR_20.path = VAR_14;
 FUNC_0(&VAR_20, VAR_9);
 FUNC_7(&VAR_20.id, VAR_2);
 VAR_20.mode = VAR_6;

 FUNC_3(FUNC_5(VAR_11,
  &VAR_18, &VAR_19, &VAR_20));

 VAR_18.path = VAR_15;
 FUNC_0(&VAR_18, VAR_7);
 FUNC_7(&VAR_18.id, VAR_3);
 VAR_18.mode = VAR_6;

 VAR_19.path = VAR_15;
 FUNC_0(&VAR_18, VAR_7);
 FUNC_7(&VAR_19.id, VAR_4);
 VAR_18.mode = VAR_6;

 VAR_20.path = VAR_15;
 FUNC_0(&VAR_20, VAR_9);
 FUNC_7(&VAR_20.id, VAR_5);
 VAR_20.mode = VAR_6;

 FUNC_3(FUNC_5(VAR_11,
  &VAR_18, &VAR_19, &VAR_20));

 FUNC_3(FUNC_6(&VAR_12[0], &VAR_12[1],
  &VAR_12[2], VAR_11, VAR_14));





 if (VAR_17)
  VAR_16 = VAR_15;
 else
  VAR_16 = VAR_14;

 FUNC_2(VAR_16, VAR_12[0]->path);
 FUNC_7(&VAR_13, VAR_17 ? VAR_3 : VAR_0);
 FUNC_1(&VAR_13, &VAR_12[0]->id);

 FUNC_2(VAR_16, VAR_12[1]->path);
 FUNC_7(&VAR_13, VAR_17 ? VAR_4 : VAR_1);
 FUNC_1(&VAR_13, &VAR_12[1]->id);

 FUNC_2(VAR_16, VAR_12[2]->path);
 FUNC_7(&VAR_13, VAR_17 ? VAR_5 : VAR_2);
 FUNC_1(&VAR_13, &VAR_12[2]->id);

 FUNC_3(FUNC_6(&VAR_12[0], &VAR_12[1],
  &VAR_12[2], VAR_11, VAR_15));

 FUNC_2(VAR_15, VAR_12[0]->path);
 FUNC_7(&VAR_13, VAR_3);
 FUNC_1(&VAR_13, &VAR_12[0]->id);

 FUNC_2(VAR_15, VAR_12[1]->path);
 FUNC_7(&VAR_13, VAR_4);
 FUNC_1(&VAR_13, &VAR_12[1]->id);

 FUNC_2(VAR_15, VAR_12[2]->path);
 FUNC_7(&VAR_13, VAR_5);
 FUNC_1(&VAR_13, &VAR_12[2]->id);
}
