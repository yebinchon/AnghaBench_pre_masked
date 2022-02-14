
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct repository {int dummy; } ;
struct diff_filespec {char* data; scalar_t__ size; } ;
struct TYPE_3__ {char* ptr; scalar_t__ size; } ;
typedef TYPE_1__ mmfile_t ;


 int FUNC_0 (struct diff_filespec*) ;
 scalar_t__ FUNC_1 (struct repository*,struct diff_filespec*,int ) ;

__attribute__((used)) static int FUNC_2(struct repository *VAR_0, mmfile_t *VAR_1,
         struct diff_filespec *VAR_2)
{
 if (!FUNC_0(VAR_2)) {
  VAR_1->ptr = (char *)"";
  VAR_1->size = 0;
  return 0;
 }
 else if (FUNC_1(VAR_0, VAR_2, 0))
  return -1;

 VAR_1->ptr = VAR_2->data;
 VAR_1->size = VAR_2->size;
 return 0;
}
