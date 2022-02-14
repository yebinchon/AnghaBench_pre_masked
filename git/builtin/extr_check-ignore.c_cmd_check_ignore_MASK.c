
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_struct {int dummy; } ;
typedef int dir ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dir_struct*,char const*,int,char const**) ;
 int VAR_0 ;
 int FUNC_2 (struct dir_struct*,char const*) ;
 int VAR_1 ;
 int FUNC_3 (struct dir_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct dir_struct*,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int,char const**,char const*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct dir_struct*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_11(int VAR_10, const char **VAR_11, const char *VAR_12)
{
 int VAR_13;
 struct dir_struct VAR_14;

 FUNC_5(VAR_2, ((void*)0));

 VAR_10 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_0,
        VAR_1, 0);

 if (VAR_7) {
  if (VAR_10 > 0)
   FUNC_4(FUNC_0("cannot specify pathnames with --stdin"));
 } else {
  if (VAR_4)
   FUNC_4(FUNC_0("-z only makes sense with --stdin"));
  if (VAR_10 == 0)
   FUNC_4(FUNC_0("no path specified"));
 }
 if (VAR_5) {
  if (VAR_10 > 1)
   FUNC_4(FUNC_0("--quiet is only valid with a single pathname"));
  if (VAR_9)
   FUNC_4(FUNC_0("cannot have both --quiet and --verbose"));
 }
 if (VAR_6 && !VAR_9)
  FUNC_4(FUNC_0("--non-matching is only valid with --verbose"));


 if (!VAR_3 && FUNC_9() < 0)
  FUNC_4(FUNC_0("index file corrupt"));

 FUNC_7(&VAR_14, 0, sizeof(VAR_14));
 FUNC_10(&VAR_14);

 if (VAR_7) {
  VAR_13 = FUNC_2(&VAR_14, VAR_12);
 } else {
  VAR_13 = FUNC_1(&VAR_14, VAR_12, VAR_10, VAR_11);
  FUNC_6(VAR_8, "ignore to stdout");
 }

 FUNC_3(&VAR_14);

 return !VAR_13;
}
