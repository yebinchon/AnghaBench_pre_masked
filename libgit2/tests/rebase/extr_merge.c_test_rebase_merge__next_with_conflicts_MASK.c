
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_status_list ;
struct TYPE_10__ {TYPE_2__* head_to_index; } ;
typedef TYPE_3__ git_status_entry ;
typedef int git_reference ;
struct TYPE_11__ {int id; int type; } ;
typedef TYPE_4__ git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;
struct TYPE_8__ {int path; } ;
struct TYPE_9__ {TYPE_1__ new_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (char const*,int,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_13 (TYPE_4__**,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 TYPE_3__* FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_20 (char const*) ;

void FUNC_21(void)
{
 git_rebase *VAR_4;
 git_reference *VAR_5, *VAR_6;
 git_annotated_commit *VAR_7, *VAR_8;
 git_rebase_operation *VAR_9;
 git_status_list *VAR_10;
 const git_status_entry *VAR_11;
 git_oid VAR_12, VAR_13;

 const char *VAR_14 =
"ASPARAGUS SOUP.\n"
"\n"
"<<<<<<< master\n"
"TAKE FOUR LARGE BUNCHES of asparagus, scrape it nicely, cut off one inch\n"
"OF THE TOPS, and lay them in water, chop the stalks and put them on the\n"
"FIRE WITH A PIECE OF BACON, a large onion cut up, and pepper and salt;\n"
"ADD TWO QUARTS OF WATER, boil them till the stalks are quite soft, then\n"
"PULP THEM THROUGH A SIEVE, and strain the water to it, which must be put\n"
"=======\n"
"Take four large bunches of asparagus, scrape it nicely, CUT OFF ONE INCH\n"
"of the tops, and lay them in water, chop the stalks and PUT THEM ON THE\n"
"fire with a piece of bacon, a large onion cut up, and pepper and salt;\n"
"add two quarts of water, boil them till the stalks are quite soft, then\n"
"pulp them through a sieve, and strain the water to it, which must be put\n"
">>>>>>> Conflicting modification 1 to asparagus\n"
"back in the pot; put into it a chicken cut up, with the tops of\n"
"asparagus which had been laid by, boil it until these last articles are\n"
"sufficiently done, thicken with flour, butter and milk, and serve it up.\n";

 FUNC_6(FUNC_15(&VAR_5, VAR_2, "refs/heads/asparagus"));
 FUNC_6(FUNC_15(&VAR_6, VAR_2, "refs/heads/master"));

 FUNC_6(FUNC_8(&VAR_7, VAR_2, VAR_5));
 FUNC_6(FUNC_8(&VAR_8, VAR_2, VAR_6));

 FUNC_6(FUNC_12(&VAR_4, VAR_2, VAR_7, VAR_8, ((void*)0), ((void*)0)));

 FUNC_6(FUNC_13(&VAR_9, VAR_4));

 FUNC_9(&VAR_12, "33f915f9e4dbd9f4b24430e48731a59b45b15500");

 FUNC_2(VAR_1, VAR_9->type);
 FUNC_3(&VAR_12, &VAR_9->id);
 FUNC_1("33f915f9e4dbd9f4b24430e48731a59b45b15500\n", 41, "rebase/.git/rebase-merge/current");
 FUNC_1("1\n", 2, "rebase/.git/rebase-merge/msgnum");

 FUNC_6(FUNC_19(&VAR_10, VAR_2, ((void*)0)));
 FUNC_2(1, FUNC_17(VAR_10));
 FUNC_0(VAR_11 = FUNC_16(VAR_10, 0));

 FUNC_4("asparagus.txt", VAR_11->head_to_index->new_file.path);

 FUNC_1(VAR_14, FUNC_20(VAR_14), "rebase/asparagus.txt");

 FUNC_5(VAR_0, FUNC_10(&VAR_13, VAR_4, ((void*)0), VAR_3, ((void*)0), ((void*)0)));

 FUNC_18(VAR_10);
 FUNC_7(VAR_7);
 FUNC_7(VAR_8);
 FUNC_14(VAR_5);
 FUNC_14(VAR_6);
 FUNC_11(VAR_4);
}
