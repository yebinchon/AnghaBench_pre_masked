
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BufferedFile {unsigned int BytesLeft; void* Ptr; } ;



__attribute__((used)) static void *FUNC_0(struct BufferedFile *VAR_0, unsigned VAR_1)
{
 void *VAR_2;





 if(!(VAR_0 && VAR_1))
 {
  return(((void*)0));
 }





 if(VAR_1 > VAR_0->BytesLeft)
 {
  return(((void*)0));
 }





 VAR_2 = VAR_0->Ptr;





 VAR_0->Ptr += VAR_1;
 VAR_0->BytesLeft -= VAR_1;

 return(VAR_2);
}
