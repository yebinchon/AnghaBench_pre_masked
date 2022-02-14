
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_cmdline_info {unsigned int nr; TYPE_1__* rev; int alloc; } ;
struct rev_info {struct rev_cmdline_info cmdline; } ;
struct object {int dummy; } ;
struct TYPE_2__ {int whence; unsigned int flags; int name; struct object* item; } ;


 int FUNC_0 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_0,
       struct object *VAR_1,
       const char *VAR_2,
       int VAR_3,
       unsigned VAR_4)
{
 struct rev_cmdline_info *VAR_5 = &VAR_0->cmdline;
 unsigned int VAR_6 = VAR_5->nr;

 FUNC_0(VAR_5->rev, VAR_6 + 1, VAR_5->alloc);
 VAR_5->rev[VAR_6].item = VAR_1;
 VAR_5->rev[VAR_6].name = FUNC_1(VAR_2);
 VAR_5->rev[VAR_6].whence = VAR_3;
 VAR_5->rev[VAR_6].flags = VAR_4;
 VAR_5->nr++;
}
