
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct packed_git {scalar_t__ pack_name; scalar_t__ pack_local; struct packed_git* next; } ;


 struct strbuf VAR_0 ;
 struct packed_git* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char*,struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char*,scalar_t__) ;
 int FUNC_7 (struct strbuf*,size_t) ;
 int FUNC_8 (struct strbuf*) ;
 size_t FUNC_9 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_10(struct strbuf *VAR_2, char *VAR_3)
{
 size_t VAR_4 = FUNC_9(FUNC_1());
 struct strbuf VAR_5 = VAR_0;
 struct packed_git *VAR_6;
 size_t VAR_7 = 0;

 FUNC_3(VAR_2);
 for (VAR_6 = FUNC_0(VAR_1); VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->pack_local)
   VAR_7++;
 }

 FUNC_7(&VAR_5, VAR_7 * 53 + 2);
 for (VAR_6 = FUNC_0(VAR_1); VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->pack_local)
   FUNC_6(&VAR_5, "P %s\n", VAR_6->pack_name + VAR_4 + 6);
 }
 FUNC_5(&VAR_5, '\n');

 FUNC_2(VAR_2);
 FUNC_4(VAR_2, "text/plain; charset=utf-8", &VAR_5);
 FUNC_8(&VAR_5);
}
