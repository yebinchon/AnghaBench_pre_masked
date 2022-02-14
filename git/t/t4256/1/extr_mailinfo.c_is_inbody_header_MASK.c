
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct mailinfo {int * s_hdr_data; } ;


 scalar_t__ FUNC_0 (struct strbuf const*,scalar_t__) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct mailinfo *VAR_1,
       const struct strbuf *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
  if (!VAR_1->s_hdr_data[VAR_3] && FUNC_0(VAR_2, VAR_0[VAR_3]))
   return 1;
 return 0;
}
