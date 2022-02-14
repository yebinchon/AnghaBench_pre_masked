
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int const FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static const char *FUNC_3(git_buf *VAR_2)
{
 const unsigned int VAR_3 = (unsigned int)FUNC_2(VAR_1);
 const char *VAR_4;

 VAR_4 = (const char *)VAR_2->ptr;

 if (FUNC_0(VAR_2) < VAR_3 + 1) {
  FUNC_1(VAR_0, "corrupted loose reference file");
  return ((void*)0);
 }





 VAR_4 += VAR_3;

 return VAR_4;
}
