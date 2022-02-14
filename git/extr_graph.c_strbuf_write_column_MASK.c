
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct column {scalar_t__ color; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_1, const struct column *VAR_2,
    char VAR_3)
{
 if (VAR_2->color < VAR_0)
  FUNC_2(VAR_1, FUNC_0(VAR_2->color));
 FUNC_1(VAR_1, VAR_3);
 if (VAR_2->color < VAR_0)
  FUNC_2(VAR_1, FUNC_0(VAR_0));
}
