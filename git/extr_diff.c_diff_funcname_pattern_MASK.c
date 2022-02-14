
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct userdiff_funcname {scalar_t__ pattern; } ;
struct diff_options {TYPE_1__* repo; } ;
struct diff_filespec {TYPE_2__* driver; } ;
struct TYPE_4__ {struct userdiff_funcname const funcname; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (struct diff_filespec*,int ) ;

__attribute__((used)) static const struct userdiff_funcname *
FUNC_1(struct diff_options *VAR_0, struct diff_filespec *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->repo->index);
 return VAR_1->driver->funcname.pattern ? &VAR_1->driver->funcname : ((void*)0);
}
