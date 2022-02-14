
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BufferedFile {unsigned int BytesLeft; int Ptr; } ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_0(struct BufferedFile *VAR_2, unsigned VAR_3)
{




 if(!VAR_2)
 {
  return(VAR_0);
 }





 if(VAR_3 > VAR_2->BytesLeft)
 {
  return(VAR_0);
 }





 VAR_2->Ptr += VAR_3;
 VAR_2->BytesLeft -= VAR_3;

 return(VAR_1);
}
