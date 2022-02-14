
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_rename_dst {int dummy; } ;
struct diff_filespec {int dummy; } ;


 int FUNC_0 (struct diff_filespec*) ;
 struct diff_rename_dst* VAR_0 ;

__attribute__((used)) static struct diff_rename_dst *FUNC_1(struct diff_filespec *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 return VAR_2 < 0 ? ((void*)0) : &VAR_0[VAR_2];
}
