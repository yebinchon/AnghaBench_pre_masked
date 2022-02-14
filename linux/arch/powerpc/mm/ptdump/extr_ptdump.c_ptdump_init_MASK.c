
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct dentry* FUNC_1 (char*,int,int *,int *,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct dentry *VAR_2;

 FUNC_2();
 FUNC_0();
 VAR_2 = FUNC_1("kernel_page_tables", 0400, ((void*)0),
   ((void*)0), &VAR_1);
 return VAR_2 ? 0 : -VAR_0;
}
