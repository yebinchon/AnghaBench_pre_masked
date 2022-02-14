
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct apply_state {scalar_t__ cached; } ;
typedef int newpath ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int,char*,char*,unsigned int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (struct apply_state*,char*,unsigned int,char const*,unsigned long) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct apply_state *VAR_5,
      char *VAR_6,
      unsigned VAR_7,
      const char *VAR_8,
      unsigned long VAR_9)
{
 int VAR_10;

 if (VAR_5->cached)
  return 0;

 VAR_10 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10 < 0)
  return -1;
 if (!VAR_10)
  return 0;

 if (VAR_4 == VAR_2) {
  if (FUNC_8(VAR_6))
   return 0;
  VAR_10 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_10 < 0)
   return -1;
  if (!VAR_10)
   return 0;
 }

 if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {



  struct stat VAR_11;
  if (!FUNC_4(VAR_6, &VAR_11) && (!FUNC_0(VAR_11.st_mode) || !FUNC_7(VAR_6)))
   VAR_4 = VAR_1;
 }

 if (VAR_4 == VAR_1) {
  unsigned int VAR_12 = FUNC_3();

  for (;;) {
   char VAR_13[VAR_3];
   FUNC_5(VAR_13, sizeof(VAR_13), "%s~%u", VAR_6, VAR_12);
   VAR_10 = FUNC_9(VAR_5, VAR_13, VAR_7, VAR_8, VAR_9);
   if (VAR_10 < 0)
    return -1;
   if (!VAR_10) {
    if (!FUNC_6(VAR_13, VAR_6))
     return 0;
    FUNC_10(VAR_13);
    break;
   }
   if (VAR_4 != VAR_1)
    break;
   ++VAR_12;
  }
 }
 return FUNC_2(FUNC_1("unable to write file '%s' mode %o"),
      VAR_6, VAR_7);
}
