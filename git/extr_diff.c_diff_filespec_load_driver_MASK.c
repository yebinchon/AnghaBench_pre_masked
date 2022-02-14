
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct diff_filespec {scalar_t__ driver; int path; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct index_state*,int ) ;

__attribute__((used)) static void FUNC_3(struct diff_filespec *VAR_0,
          struct index_state *VAR_1)
{

 if (VAR_0->driver)
  return;

 if (FUNC_0(VAR_0->mode))
  VAR_0->driver = FUNC_2(VAR_1, VAR_0->path);


 if (!VAR_0->driver)
  VAR_0->driver = FUNC_1("default");
}
