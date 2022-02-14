
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int (* Hunk_FreeTempMemory ) (int *) ;int (* FS_WriteFile ) (char*,int *,size_t) ;int * (* Hunk_AllocateTempMemory ) (size_t) ;} ;


 size_t FUNC_0 (int *,size_t,int,int,int,int *,int) ;
 TYPE_1__ VAR_0 ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (char*,int *,size_t) ;
 int FUNC_3 (int *) ;

void FUNC_4(char * VAR_1, int VAR_2, int VAR_3, int VAR_4, byte *VAR_5, int VAR_6)
{
  byte *VAR_7;
  size_t VAR_8;

  VAR_8 = VAR_3 * VAR_4 * 3;
  VAR_7 = VAR_0.Hunk_AllocateTempMemory(VAR_8);

  VAR_8 = FUNC_0(VAR_7, VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_0.FS_WriteFile(VAR_1, VAR_7, VAR_8);

  VAR_0.Hunk_FreeTempMemory(VAR_7);
}
