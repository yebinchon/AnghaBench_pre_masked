
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {int count; int is_binary; } ;


 int FUNC_0 (struct diff_filespec*,char const*,char const*) ;

struct diff_filespec *FUNC_1(const char *VAR_0)
{
 struct diff_filespec *VAR_1;

 FUNC_0(VAR_1, VAR_0, VAR_0);
 VAR_1->count = 1;
 VAR_1->is_binary = -1;
 return VAR_1;
}
