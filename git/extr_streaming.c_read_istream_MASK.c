
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_istream {TYPE_1__* vtbl; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* read ) (struct git_istream*,void*,size_t) ;} ;


 int FUNC_0 (struct git_istream*,void*,size_t) ;

ssize_t FUNC_1(struct git_istream *VAR_0, void *VAR_1, size_t VAR_2)
{
 return VAR_0->vtbl->read(VAR_0, VAR_1, VAR_2);
}
