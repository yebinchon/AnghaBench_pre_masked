
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct pfioc_ruleset {char* path; scalar_t__ nr; char* name; } ;
typedef int prs ;
typedef int newpath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pfioc_ruleset*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_ruleset*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_7)
{
 struct pfioc_ruleset VAR_8;
 char VAR_9[VAR_3];
 u_int32_t VAR_10, VAR_11;

 if (FUNC_2(VAR_7))
  goto err;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 FUNC_6(VAR_8.path, VAR_7, sizeof(VAR_8.path));
 if (FUNC_1(VAR_5, VAR_1, &VAR_8)) {
  FUNC_7(VAR_2, "pfl_walk_rulesets: ioctl(DIOCGETRULESETS): %s",
      FUNC_4(VAR_6));
  goto err;
 }

 for (VAR_10 = VAR_8.nr, VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_8.nr = VAR_11;
  if (FUNC_1(VAR_5, VAR_0, &VAR_8)) {
   FUNC_7(VAR_2, "pfl_walk_rulesets: ioctl(DIOCGETRULESET):"
       " %s", FUNC_4(VAR_6));
   goto err;
  }

  if (FUNC_3(VAR_8.name, VAR_4) == 0)
   continue;

  FUNC_6(VAR_9, VAR_7, sizeof(VAR_9));
  if (VAR_7[0])
   FUNC_5(VAR_9, "/", sizeof(VAR_9));

  FUNC_5(VAR_9, VAR_8.name, sizeof(VAR_9));
  if (FUNC_8(VAR_9))
   goto err;
 }

 return (0);

err:
 return (-1);
}
