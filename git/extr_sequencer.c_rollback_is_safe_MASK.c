
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (char*,struct object_id*) ;
 scalar_t__ FUNC_4 (int ,struct object_id*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct object_id*) ;
 int FUNC_7 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_8 (struct strbuf*,int ,int ) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct strbuf VAR_3 = VAR_1;
 struct object_id VAR_4, VAR_5;

 if (FUNC_8(&VAR_3, FUNC_5(), 0) >= 0) {
  FUNC_10(&VAR_3);
  if (FUNC_4(VAR_3.buf, &VAR_4)) {
   FUNC_9(&VAR_3);
   FUNC_1(FUNC_0("could not parse %s"), FUNC_5());
  }
  FUNC_9(&VAR_3);
 }
 else if (VAR_2 == VAR_0)
  FUNC_6(&VAR_4);
 else
  FUNC_2(FUNC_0("could not read '%s'"), FUNC_5());

 if (FUNC_3("HEAD", &VAR_5))
  FUNC_6(&VAR_5);

 return FUNC_7(&VAR_5, &VAR_4);
}
