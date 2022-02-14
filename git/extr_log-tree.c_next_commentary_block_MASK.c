
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int file; } ;
struct rev_info {int shown_dashes; TYPE_1__ diffopt; } ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (struct strbuf*,char const*) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_0, struct strbuf *VAR_1)
{
 const char *VAR_2 = VAR_0->shown_dashes ? "\n" : "---\n";
 if (VAR_1)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_2, VAR_0->diffopt.file);
 VAR_0->shown_dashes = 1;
}
