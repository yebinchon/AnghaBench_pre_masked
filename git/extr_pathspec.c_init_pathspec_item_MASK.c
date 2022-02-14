
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pathspec_item {unsigned int magic; char* match; int len; int prefix; int nowildcard_len; int flags; void* original; scalar_t__ attr_match_nr; int * attr_match; int * attr_check; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,...) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (unsigned int*,int*,struct pathspec_item*,char const*) ;
 int FUNC_7 (struct strbuf*,int,unsigned int) ;
 char* FUNC_8 (char const*,int,int*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct strbuf*,char*) ;
 void* FUNC_11 (struct strbuf*,int *) ;
 int FUNC_12 (char*) ;
 void* FUNC_13 (char const*) ;

__attribute__((used)) static void FUNC_14(struct pathspec_item *VAR_7, unsigned VAR_8,
          const char *VAR_9, int VAR_10,
          const char *VAR_11)
{
 unsigned VAR_12 = 0, VAR_13 = 0;
 const char *VAR_14 = VAR_11;
 char *VAR_15;
 int VAR_16 = -1;

 VAR_7->attr_check = ((void*)0);
 VAR_7->attr_match = ((void*)0);
 VAR_7->attr_match_nr = 0;


 if (VAR_8 & VAR_3) {
  VAR_12 = VAR_2;
 } else {
  VAR_14 = FUNC_6(&VAR_13,
            &VAR_16,
            VAR_7,
            VAR_11);
  VAR_12 |= VAR_13;
  VAR_12 |= FUNC_3(VAR_13);
 }

 VAR_7->magic = VAR_12;

 if (VAR_16 >= 0 &&
     (VAR_10 || (VAR_9 && *VAR_9)))
  FUNC_0("'prefix' magic is supposed to be used at worktree's root");

 if ((VAR_12 & VAR_2) && (VAR_12 & VAR_1))
  FUNC_2(FUNC_1("%s: 'literal' and 'glob' are incompatible"), VAR_11);


 if (VAR_16 >= 0) {
  VAR_15 = FUNC_13(VAR_14);
  VAR_10 = VAR_16;
 } else if (VAR_12 & VAR_0) {
  VAR_15 = FUNC_13(VAR_14);
  VAR_10 = 0;
 } else {
  VAR_15 = FUNC_8(VAR_9, VAR_10,
        &VAR_10, VAR_14);
  if (!VAR_15)
   FUNC_2(FUNC_1("%s: '%s' is outside repository"), VAR_11, VAR_14);
 }

 VAR_7->match = VAR_15;
 VAR_7->len = FUNC_12(VAR_7->match);
 VAR_7->prefix = VAR_10;





 if ((VAR_8 & VAR_5) &&
     !FUNC_4()) {
  struct strbuf VAR_17 = VAR_6;


  FUNC_7(&VAR_17, VAR_10, VAR_13);

  FUNC_10(&VAR_17, VAR_15);
  VAR_7->original = FUNC_11(&VAR_17, ((void*)0));
 } else {
  VAR_7->original = FUNC_13(VAR_11);
 }

 if (VAR_12 & VAR_2) {
  VAR_7->nowildcard_len = VAR_7->len;
 } else {
  VAR_7->nowildcard_len = FUNC_9(VAR_7->match);
  if (VAR_7->nowildcard_len < VAR_10)
   VAR_7->nowildcard_len = VAR_10;
 }

 VAR_7->flags = 0;
 if (VAR_12 & VAR_1) {




 } else {
  if (VAR_7->nowildcard_len < VAR_7->len &&
      VAR_7->match[VAR_7->nowildcard_len] == '*' &&
      FUNC_5(VAR_7->match + VAR_7->nowildcard_len + 1))
   VAR_7->flags |= VAR_4;
 }


 if (VAR_7->nowildcard_len > VAR_7->len ||
     VAR_7->prefix > VAR_7->len) {
  FUNC_0("error initializing pathspec_item");
 }
}
