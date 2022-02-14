
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct BufferedFile {scalar_t__ Buffer; } ;
struct TYPE_2__ {int (* Free ) (struct BufferedFile*) ;int (* FS_FreeFile ) (scalar_t__) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct BufferedFile*) ;

__attribute__((used)) static void FUNC_2(struct BufferedFile *VAR_1)
{
 if(VAR_1)
 {
  if(VAR_1->Buffer)
  {
   VAR_0.FS_FreeFile(VAR_1->Buffer);
  }

  VAR_0.Free(VAR_1);
 }
}
