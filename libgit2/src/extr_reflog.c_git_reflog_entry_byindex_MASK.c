
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_reflog_entry ;
struct TYPE_6__ {size_t length; } ;
struct TYPE_5__ {TYPE_2__ entries; } ;
typedef TYPE_1__ git_reflog ;


 int FUNC_0 (TYPE_1__ const*) ;
 int const* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (size_t,size_t) ;

const git_reflog_entry * FUNC_3(const git_reflog *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0);

 if (VAR_1 >= VAR_0->entries.length)
  return ((void*)0);

 return FUNC_1(
  &VAR_0->entries, FUNC_2(VAR_1, VAR_0->entries.length));
}
