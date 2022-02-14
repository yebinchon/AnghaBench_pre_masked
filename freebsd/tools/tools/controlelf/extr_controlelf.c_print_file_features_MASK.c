
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {char* alias; char* desc; int value; } ;
typedef int Elf ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int,int,int*,int *) ;
 unsigned long FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool
FUNC_3(Elf *VAR_1, int VAR_2, int VAR_3, char *VAR_4)
{
 u_int32_t VAR_5;
 unsigned long VAR_6;

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5, ((void*)0))) {
  return (0);
 }

 FUNC_2("File '%s' features:\n", VAR_4);
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_0); ++VAR_6) {
  FUNC_2("%s\t\t'%s' is ", VAR_0[VAR_6].alias,
      VAR_0[VAR_6].desc);

  if ((VAR_0[VAR_6].value & VAR_5) == 0)
   FUNC_2("un");

  FUNC_2("set.\n");
 }
 return (1);
}
