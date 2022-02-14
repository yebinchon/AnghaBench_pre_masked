
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct packed_git {int hash; } ;


 struct strbuf VAR_0 ;
 struct packed_git** VAR_1 ;
 int FUNC_0 (struct strbuf*,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct strbuf VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct packed_git *VAR_5 = VAR_1[VAR_4];
  FUNC_0(&VAR_3, VAR_5->hash, "keep");
  FUNC_2(VAR_3.buf);
 }
 FUNC_1(&VAR_3);
}
