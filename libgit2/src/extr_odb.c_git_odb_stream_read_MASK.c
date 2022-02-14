
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* read ) (TYPE_1__*,char*,size_t) ;} ;
typedef TYPE_1__ git_odb_stream ;


 int FUNC_0 (TYPE_1__*,char*,size_t) ;

int FUNC_1(git_odb_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 return VAR_0->read(VAR_0, VAR_1, VAR_2);
}
