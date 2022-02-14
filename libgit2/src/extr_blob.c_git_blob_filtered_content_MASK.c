
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_buf ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_blob_filter_options ;
typedef int git_blob ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *,char const*,TYPE_1__*) ;

int FUNC_1(
 git_buf *VAR_2,
 git_blob *VAR_3,
 const char *VAR_4,
 int VAR_5)
{
 git_blob_filter_options VAR_6 = VAR_1;

 if (VAR_5)
  VAR_6.flags |= VAR_0;
 else
  VAR_6.flags &= ~VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);
}
