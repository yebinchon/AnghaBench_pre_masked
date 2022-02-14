
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_context {int * pointer; void* buffer; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ar_context*,char*) ;
 unsigned int FUNC_1 (struct ar_context*) ;
 int FUNC_2 (struct ar_context*,unsigned int) ;
 unsigned int FUNC_3 (struct ar_context*,unsigned int*) ;
 int FUNC_4 (struct ar_context*,unsigned int,unsigned int) ;
 void* FUNC_5 (struct ar_context*,void*,void*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct ar_context *VAR_3 = (struct ar_context *)VAR_2;
 unsigned int VAR_4, VAR_5;
 void *VAR_6, *VAR_7;

 VAR_6 = VAR_3->pointer;
 if (!VAR_6)
  return;

 VAR_4 = FUNC_3(VAR_3,
       &VAR_5);
 FUNC_4(VAR_3, VAR_4, VAR_5);
 VAR_7 = VAR_3->buffer + VAR_4 * VAR_1 + VAR_5;

 if (VAR_4 < FUNC_1(VAR_3)) {






  void *VAR_8 = VAR_3->buffer + VAR_0 * VAR_1;
  VAR_6 = FUNC_5(VAR_3, VAR_6, VAR_8);
  if (VAR_6 < VAR_8)
   goto error;

  VAR_6 -= VAR_0 * VAR_1;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_6, VAR_7);
 if (VAR_6 != VAR_7) {
  if (VAR_6 > VAR_7)
   FUNC_0(VAR_3, "inconsistent descriptor");
  goto error;
 }

 VAR_3->pointer = VAR_6;
 FUNC_2(VAR_3, VAR_4);

 return;

error:
 VAR_3->pointer = ((void*)0);
}
