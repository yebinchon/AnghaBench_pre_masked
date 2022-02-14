
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_8__ {int flags; int id_abbrev; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_9__ {int size; int * ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int *,char*,int) ;
 int FUNC_11 (char*,int *,TYPE_1__*,char const*) ;

void FUNC_12(void)
{
 git_index *VAR_6;
 git_buf VAR_7 = VAR_0;
 size_t VAR_8;
 git_diff_options VAR_9 = VAR_2;
 const char *VAR_10 =
  "diff --git a/songof7cities.txt b/songof7cities.txt\n" "index 4210ffd5c390b21dd5483375e75288dea9ede512..cc84ec183351c9944ed90a619ca08911924055b5 100644\n" "GIT binary patch\n" "delta 198\n" "zc$}LmI8{(0BqLQJI6p64AwNwaIJGP_Pa)Ye#M3o+qJ$<Jl;sX*mF<MGCYv&*L7AHu\n" "zGA1*^gt?gYVN82wTbPO_W)+x<&1+cP;HrPHR>PQ;Y(X&QMK*C5^Br3bjG4d=XI^5@\n" "JfH567LIG)KJdFSV\n" "\n" "delta 198\n" "zc$}LmI8{(0BqLQJI6p64AwNwaIJGP_Pr*5}Br~;mqJ$<Jl;sX*mF<MGCYv&*L7AHu\n" "zGA1*^gt?gYVN82wTbPO_W)+x<&1+cP;HrPHR>PQ;Y(X&QMK*C5^Br3bjG4d=XI^5@\n" "JfH567LIF3FM2!Fd\n" "\n";
 VAR_9.flags = VAR_3 | VAR_1;
 VAR_9.id_abbrev = VAR_4;

 VAR_5 = FUNC_2("renames");
 FUNC_0(FUNC_8(&VAR_6, VAR_5));

 FUNC_0(FUNC_4(&VAR_7, "renames/songof7cities.txt"));

 for (VAR_8 = 0; VAR_8 < VAR_7.size - 6; VAR_8++) {
  if (FUNC_10(&VAR_7.ptr[VAR_8], "Cities", 6) == 0)
   FUNC_9(&VAR_7.ptr[VAR_8], "cITIES", 6);
 }

 FUNC_1("renames/songof7cities.txt", VAR_7.ptr);
 FUNC_0(FUNC_5(VAR_6, "songof7cities.txt"));
 FUNC_0(FUNC_7(VAR_6));

 FUNC_11(
  "19dd32dfb1520a64e5bbaae8dce6ef423dfa2f13",
  ((void*)0),
  &VAR_9,
  VAR_10);

 FUNC_6(VAR_6);
 FUNC_3(&VAR_7);
}
