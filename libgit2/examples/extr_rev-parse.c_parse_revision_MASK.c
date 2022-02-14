
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parse_state {int spec; } ;
typedef int str ;
struct TYPE_3__ {int flags; int from; int to; } ;
typedef TYPE_1__ git_revspec ;
typedef int git_repository ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(git_repository *VAR_4, struct parse_state *VAR_5)
{
 git_revspec VAR_6;
 char VAR_7[VAR_0 + 1];

 FUNC_0(FUNC_6(&VAR_6, VAR_4, VAR_5->spec), "Could not parse", VAR_5->spec);

 if ((VAR_6.flags & VAR_3) != 0) {
  FUNC_5(VAR_7, sizeof(VAR_7), FUNC_4(VAR_6.from));
  FUNC_7("%s\n", VAR_7);
  FUNC_3(VAR_6.from);
 }
 else if ((VAR_6.flags & VAR_2) != 0) {
  FUNC_5(VAR_7, sizeof(VAR_7), FUNC_4(VAR_6.to));
  FUNC_7("%s\n", VAR_7);
  FUNC_3(VAR_6.to);

  if ((VAR_6.flags & VAR_1) != 0) {
   git_oid VAR_8;
   FUNC_0(FUNC_2(&VAR_8, VAR_4,
      FUNC_4(VAR_6.from), FUNC_4(VAR_6.to)),
     "Could not find merge base", VAR_5->spec);

   FUNC_5(VAR_7, sizeof(VAR_7), &VAR_8);
   FUNC_7("%s\n", VAR_7);
  }

  FUNC_5(VAR_7, sizeof(VAR_7), FUNC_4(VAR_6.from));
  FUNC_7("^%s\n", VAR_7);
  FUNC_3(VAR_6.from);
 }
 else {
  FUNC_1("Invalid results from git_revparse", VAR_5->spec);
 }

 return 0;
}
