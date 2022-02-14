
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int opcode; unsigned long delta; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,void*) ;

__attribute__((used)) static unsigned FUNC_3(void *VAR_0, const void *VAR_1,
        unsigned long VAR_2, unsigned VAR_3)
{
 const int VAR_4 = 5;
 struct branch *VAR_5 = VAR_0;
 unsigned long VAR_6 = (unsigned long)VAR_1 - (VAR_2+VAR_4);

 if (VAR_3 < VAR_4) {
  FUNC_2("paravirt: Failed to patch indirect CALL at %ps\n", (void *)VAR_2);

  FUNC_0(1);
 }

 VAR_5->opcode = 0xe8;
 VAR_5->delta = VAR_6;
 FUNC_1(sizeof(*VAR_5) != VAR_4);

 return VAR_4;
}
