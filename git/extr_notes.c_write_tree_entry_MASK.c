
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (struct strbuf*,unsigned char const*,int ) ;
 int FUNC_1 (struct strbuf*,char*,unsigned int,unsigned int,char const*,char) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_1, unsigned int VAR_2,
  const char *VAR_3, unsigned int VAR_4, const
  unsigned char *VAR_5)
{
 FUNC_1(VAR_1, "%o %.*s%c", VAR_2, VAR_4, VAR_3, '\0');
 FUNC_0(VAR_1, VAR_5, VAR_0->rawsz);
}
