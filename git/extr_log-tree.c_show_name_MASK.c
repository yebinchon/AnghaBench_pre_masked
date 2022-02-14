
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct name_decoration {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_2, const struct name_decoration *VAR_3)
{
 if (VAR_1 == VAR_0)
  FUNC_1(VAR_2, FUNC_0(VAR_3->name));
 else
  FUNC_1(VAR_2, VAR_3->name);
}
