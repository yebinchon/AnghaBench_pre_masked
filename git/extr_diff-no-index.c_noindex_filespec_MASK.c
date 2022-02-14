
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {int dummy; } ;


 struct diff_filespec* FUNC_0 (char const*) ;
 char const* VAR_0 ;
 int FUNC_1 (struct diff_filespec*,int *,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct diff_filespec*) ;

__attribute__((used)) static struct diff_filespec *FUNC_3(const char *VAR_2, int VAR_3)
{
 struct diff_filespec *VAR_4;

 if (!VAR_2)
  VAR_2 = "/dev/null";
 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_4, &VAR_1, 0, VAR_3);
 if (VAR_2 == VAR_0)
  FUNC_2(VAR_4);
 return VAR_4;
}
