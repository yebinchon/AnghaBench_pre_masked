
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct BufferedFile {scalar_t__ Length; scalar_t__ BytesLeft; int * Buffer; int * Ptr; } ;
typedef int byte ;
struct TYPE_2__ {scalar_t__ (* FS_ReadFile ) (char*,void**) ;int (* Free ) (struct BufferedFile*) ;struct BufferedFile* (* Malloc ) (int) ;} ;


 TYPE_1__ VAR_0 ;
 struct BufferedFile* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,void**) ;
 int FUNC_2 (struct BufferedFile*) ;

__attribute__((used)) static struct BufferedFile *FUNC_3(const char *VAR_1)
{
 struct BufferedFile *VAR_2;
 union {
  byte *b;
  void *v;
 } VAR_3;





 if(!VAR_1)
 {
  return(((void*)0));
 }





 VAR_2 = VAR_0.Malloc(sizeof(struct BufferedFile));
 if(!VAR_2)
 {
  return(((void*)0));
 }





 VAR_2->Length = 0;
 VAR_2->Buffer = ((void*)0);
 VAR_2->Ptr = ((void*)0);
 VAR_2->BytesLeft = 0;





 VAR_2->Length = VAR_0.FS_ReadFile((char *) VAR_1, &VAR_3.v);
 VAR_2->Buffer = VAR_3.b;





 if(!(VAR_2->Buffer && (VAR_2->Length > 0)))
 {
  VAR_0.Free(VAR_2);

  return(((void*)0));
 }





 VAR_2->Ptr = VAR_2->Buffer;
 VAR_2->BytesLeft = VAR_2->Length;

 return(VAR_2);
}
