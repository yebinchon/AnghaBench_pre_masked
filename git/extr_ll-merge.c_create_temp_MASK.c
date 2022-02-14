
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ptr; } ;
typedef TYPE_1__ mmfile_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t,char*) ;

__attribute__((used)) static void FUNC_5(mmfile_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_1, VAR_2, ".merge_file_XXXXXX");
 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_2(VAR_3, VAR_0->ptr, VAR_0->size) < 0)
  FUNC_1("unable to write temp-file");
 FUNC_0(VAR_3);
}
