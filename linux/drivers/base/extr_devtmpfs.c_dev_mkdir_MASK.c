
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct path {struct dentry* dentry; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int * i_private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct path*,struct dentry*) ;
 struct dentry* FUNC_4 (int ,char const*,struct path*,int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*,struct dentry*,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, umode_t VAR_4)
{
 struct dentry *VAR_5;
 struct path VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_0, VAR_3, &VAR_6, VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_5(FUNC_2(VAR_6.dentry), VAR_5, VAR_4);
 if (!VAR_7)

  FUNC_2(VAR_5)->i_private = &VAR_2;
 FUNC_3(&VAR_6, VAR_5);
 return VAR_7;
}
