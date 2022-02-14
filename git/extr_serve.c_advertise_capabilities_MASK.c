
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int buf; } ;
struct protocol_capability {int name; scalar_t__ (* advertise ) (int ,struct strbuf*) ;} ;


 int FUNC_0 (struct protocol_capability*) ;
 struct strbuf VAR_0 ;
 struct protocol_capability* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,scalar_t__) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (int ,struct strbuf*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(void)
{
 struct strbuf VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  struct protocol_capability *VAR_6 = &VAR_1[VAR_5];

  if (VAR_6->advertise(VAR_2, &VAR_4)) {
   FUNC_5(&VAR_3, VAR_6->name);

   if (VAR_4.len) {
    FUNC_4(&VAR_3, '=');
    FUNC_3(&VAR_3, &VAR_4);
   }

   FUNC_4(&VAR_3, '\n');
   FUNC_2(1, VAR_3.buf, VAR_3.len);
  }

  FUNC_7(&VAR_3);
  FUNC_7(&VAR_4);
 }

 FUNC_1(1);
 FUNC_6(&VAR_3);
 FUNC_6(&VAR_4);
}
