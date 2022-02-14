
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {scalar_t__ mode; int oid; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(const struct diff_filespec *VAR_0)
{
 return VAR_0->mode != 0 && !FUNC_0(&VAR_0->oid);
}
