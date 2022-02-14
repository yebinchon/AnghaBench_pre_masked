
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct option {int dummy; } ;
struct notes_tree {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,unsigned int*,int ,int ) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct strbuf VAR_3 ;
 int FUNC_4 (int ,struct notes_tree*,char*) ;
 int FUNC_5 (struct notes_tree*) ;
 int VAR_4 ;
 struct notes_tree* FUNC_6 (char*,int ) ;
 int FUNC_7 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_8 (struct notes_tree*,char const*,unsigned int) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (struct strbuf*,int ,char) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 unsigned VAR_10 = 0;
 int VAR_11 = 0;
 struct option VAR_12[] = {
  FUNC_1(0, "ignore-missing", &VAR_10,
   FUNC_0("attempt to remove non-existent note is not an error"),
   VAR_1),
  FUNC_2(0, "stdin", &VAR_11,
       FUNC_0("read object names from the standard input")),
  FUNC_3()
 };
 struct notes_tree *VAR_13;
 int VAR_14 = 0;

 VAR_7 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_12,
        VAR_4, 0);

 VAR_13 = FUNC_6("remove", VAR_2);

 if (!VAR_7 && !VAR_11) {
  VAR_14 = FUNC_8(VAR_13, "HEAD", VAR_10);
 } else {
  while (*VAR_8) {
   VAR_14 |= FUNC_8(VAR_13, *VAR_8, VAR_10);
   VAR_8++;
  }
 }
 if (VAR_11) {
  struct strbuf VAR_15 = VAR_3;
  while (FUNC_9(&VAR_15, VAR_5, '\n') != VAR_0) {
   FUNC_11(&VAR_15);
   VAR_14 |= FUNC_8(VAR_13, VAR_15.buf, VAR_10);
  }
  FUNC_10(&VAR_15);
 }
 if (!VAR_14)
  FUNC_4(VAR_6, VAR_13,
        "Notes removed by 'git notes remove'");
 FUNC_5(VAR_13);
 return VAR_14;
}
