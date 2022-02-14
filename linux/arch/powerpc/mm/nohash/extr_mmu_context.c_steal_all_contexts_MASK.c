
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ active; int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 struct mm_struct** VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (char*,unsigned int,struct mm_struct*) ;
 int FUNC_3 () ;
 int * VAR_6 ;

__attribute__((used)) static unsigned int FUNC_4(void)
{
 struct mm_struct *VAR_7;



 unsigned int VAR_8;

 for (VAR_8 = VAR_0; VAR_8 <= VAR_1; VAR_8++) {

  VAR_7 = VAR_4[VAR_8];

  FUNC_2(" | steal %d from 0x%p", VAR_8, VAR_7);


  VAR_7->context.id = VAR_2;
  if (VAR_8 != VAR_0) {
   VAR_4[VAR_8] = ((void*)0);
   FUNC_0(VAR_8, VAR_3);



  }



 }


 FUNC_1();

 VAR_5 = VAR_1 - VAR_0;

 return VAR_0;
}
