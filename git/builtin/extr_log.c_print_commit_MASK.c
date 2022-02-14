
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef int FILE ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char,char*,...) ;
 int FUNC_2 (int ,struct commit*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(char VAR_2, struct commit *VAR_3, int VAR_4,
    int VAR_5, FILE *VAR_6)
{
 if (!VAR_4) {
  FUNC_1(VAR_6, "%c %s\n", VAR_2,
         FUNC_0(&VAR_3->object.oid, VAR_5));
 } else {
  struct strbuf VAR_7 = VAR_1;
  FUNC_2(VAR_0, VAR_3, &VAR_7);
  FUNC_1(VAR_6, "%c %s %s\n", VAR_2,
         FUNC_0(&VAR_3->object.oid, VAR_5),
         VAR_7.buf);
  FUNC_3(&VAR_7);
 }
}
