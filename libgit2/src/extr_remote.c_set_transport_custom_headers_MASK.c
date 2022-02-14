
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* set_custom_headers ) (TYPE_1__*,int const*) ;} ;
typedef TYPE_1__ git_transport ;
typedef int git_strarray ;


 int FUNC_0 (TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_1(git_transport *VAR_0, const git_strarray *VAR_1)
{
 if (!VAR_0->set_custom_headers)
  return 0;

 return VAR_0->set_custom_headers(VAR_0, VAR_1);
}
