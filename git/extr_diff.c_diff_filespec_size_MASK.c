
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_filespec {unsigned long size; } ;


 int VAR_0 ;
 int FUNC_0 (struct diff_filespec*) ;
 int FUNC_1 (struct repository*,struct diff_filespec*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct repository *VAR_1,
     struct diff_filespec *VAR_2)
{
 if (!FUNC_0(VAR_2))
  return 0;
 FUNC_1(VAR_1, VAR_2, VAR_0);
 return VAR_2->size;
}
