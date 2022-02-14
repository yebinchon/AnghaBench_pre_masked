
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {char* data; int is_stdin; int * driver; scalar_t__ should_munmap; int size; } ;


 struct diff_filespec* FUNC_0 (char const*) ;
 int FUNC_1 (struct diff_filespec*,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct diff_filespec *FUNC_3(const char *VAR_2, const char *VAR_3)
{
 struct diff_filespec *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4, &VAR_0, 0, 0100644);
 VAR_4->data = (char *)VAR_3;
 VAR_4->size = FUNC_2(VAR_3);
 VAR_4->should_munmap = 0;
 VAR_4->is_stdin = 1;
 VAR_4->driver = &VAR_1;

 return VAR_4;
}
