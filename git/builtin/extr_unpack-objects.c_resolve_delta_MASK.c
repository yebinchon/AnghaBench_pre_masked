
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,unsigned long,void*,unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned int,int,void*,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned VAR_0, enum object_type VAR_1,
     void *VAR_2, unsigned long VAR_3,
     void *VAR_4, unsigned long VAR_5)
{
 void *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3,
        VAR_4, VAR_5,
        &VAR_7);
 if (!VAR_6)
  FUNC_0("failed to apply delta");
 FUNC_1(VAR_4);
 FUNC_3(VAR_0, VAR_1, VAR_6, VAR_7);
}
