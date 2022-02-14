
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct argv_array {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct argv_array*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_2,
         struct argv_array *VAR_3)
{
 while (FUNC_1(VAR_2, VAR_1) != VAR_0)
  FUNC_0(VAR_3, VAR_2->buf);
}
