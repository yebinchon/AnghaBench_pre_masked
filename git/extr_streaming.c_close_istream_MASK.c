
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_istream {TYPE_1__* vtbl; } ;
struct TYPE_2__ {int (* close ) (struct git_istream*) ;} ;


 int FUNC_0 (struct git_istream*) ;
 int FUNC_1 (struct git_istream*) ;

int FUNC_2(struct git_istream *VAR_0)
{
 int VAR_1 = VAR_0->vtbl->close(VAR_0);
 FUNC_0(VAR_0);
 return VAR_1;
}
