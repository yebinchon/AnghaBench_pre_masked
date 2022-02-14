
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,unsigned int,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int *,void*,size_t,int ,int*,int*) ;
 int * FUNC_4 () ;

__attribute__((used)) static void *
FUNC_5(extent_hooks_t *VAR_1, void *VAR_2, size_t VAR_3,
    size_t VAR_4, bool *VAR_5, bool *VAR_6, unsigned VAR_7) {
 tsdn_t *VAR_8;
 arena_t *VAR_9;

 VAR_8 = FUNC_4();
 VAR_9 = FUNC_1(VAR_8, VAR_7, 0);




 FUNC_2(VAR_9 != ((void*)0));

 return FUNC_3(VAR_8, VAR_9, VAR_2, VAR_3,
     FUNC_0(VAR_4, VAR_0), VAR_5, VAR_6);
}
