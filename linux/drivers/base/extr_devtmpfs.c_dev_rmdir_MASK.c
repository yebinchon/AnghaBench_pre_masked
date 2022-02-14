
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int * i_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct dentry* FUNC_6 (char const*,struct path*) ;
 int FUNC_7 (struct path*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,struct dentry*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3)
{
 struct path VAR_4;
 struct dentry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_3, &VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (FUNC_3(VAR_5)) {
  if (FUNC_2(VAR_5)->i_private == &VAR_2)
   VAR_6 = FUNC_8(FUNC_2(VAR_4.dentry), VAR_5);
  else
   VAR_6 = -VAR_1;
 } else {
  VAR_6 = -VAR_0;
 }
 FUNC_4(VAR_5);
 FUNC_5(FUNC_2(VAR_4.dentry));
 FUNC_7(&VAR_4);
 return VAR_6;
}
