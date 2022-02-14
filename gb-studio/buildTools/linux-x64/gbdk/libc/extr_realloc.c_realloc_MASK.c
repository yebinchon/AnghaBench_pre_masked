
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmmalloc_hunk ;
typedef int mmalloc_hunk ;
typedef int UINT16 ;
struct TYPE_3__ {scalar_t__ magic; int size; scalar_t__ status; struct TYPE_3__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (void*,void*,int) ;

void *FUNC_5( void *VAR_3, int VAR_4 )
{

 UINT16 VAR_5;
 pmmalloc_hunk VAR_6, VAR_7, VAR_8;
 void *VAR_9;

 VAR_6 = VAR_2;

 VAR_8 = (void *)((UINT16)VAR_3 - sizeof(mmalloc_hunk));

 if (VAR_4==0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 if (VAR_3==((void*)0)) {
  return FUNC_2(VAR_4);
 }

 while (VAR_6 && (VAR_6->magic==VAR_1)) {
  if (VAR_6 == VAR_8) {
   FUNC_0("realloc", "Found hunk");
   if (VAR_6->size == VAR_4 )
    return VAR_3;

   if (VAR_6->size > VAR_4 ) {
    if (VAR_6->size > VAR_4 + sizeof( mmalloc_hunk )) {

     VAR_7 = (pmmalloc_hunk)(VAR_4 + sizeof( mmalloc_hunk )+(UINT16)VAR_6);
     VAR_7->status = VAR_0;
     VAR_7->size = VAR_6->size - VAR_4 -sizeof( mmalloc_hunk );
     VAR_7->magic = VAR_1;
     VAR_7->next = VAR_6->next;

     VAR_6->next = VAR_7;
     VAR_6->size = VAR_4;
     return VAR_3;
    }
    else {

     return VAR_3;
    }
   }
   if (VAR_6->next != ((void*)0)) {
    if (VAR_6->next->status == VAR_0) {

     FUNC_3();
     VAR_5 = VAR_6->next->size;

     if ((VAR_5 + VAR_6->size + sizeof( mmalloc_hunk )) >= VAR_4 ) {


      VAR_7 = (pmmalloc_hunk)(VAR_4 + sizeof( mmalloc_hunk )+(UINT16)VAR_6);
      VAR_7->next = VAR_6->next->next;
      VAR_7->status = VAR_0;
      VAR_7->size = VAR_6->size + VAR_5 - VAR_4 -sizeof( mmalloc_hunk );
      VAR_7->magic = VAR_1;

      VAR_6->next = VAR_7;
      VAR_6->size = VAR_4;
      return VAR_3;
     }
    }

    VAR_9 = FUNC_2 (VAR_4);
    if (VAR_9) {
     FUNC_4( VAR_9, VAR_3, VAR_6->size );
     FUNC_1( VAR_3 );
     return VAR_9;
    }
    return ((void*)0);
   }
  }
  VAR_6 = VAR_6->next;
 };

 FUNC_0("realloc", "No hunk found");
 return ((void*)0);
}
