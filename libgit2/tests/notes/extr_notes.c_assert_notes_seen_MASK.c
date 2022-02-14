
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_create_payload {scalar_t__ seen; int * note_oid; } ;


 int FUNC_0 (size_t,size_t) ;

void FUNC_1(struct note_create_payload VAR_0[], size_t VAR_1)
{
 size_t VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].note_oid != ((void*)0); VAR_3++) {
  if (VAR_0[VAR_3].seen)
   VAR_2++;
 }

 FUNC_0(VAR_2, VAR_1);
}
