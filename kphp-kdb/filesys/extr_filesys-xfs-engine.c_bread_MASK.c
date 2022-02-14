
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (void*,size_t,int ) ;
 int VAR_2 ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;

__attribute__((used)) static void FUNC_5 (void *VAR_3, size_t VAR_4) {
  unsigned VAR_5 = VAR_0 >> 1;
  while (VAR_4 > 0) {
    size_t VAR_6 = VAR_4;
    if (VAR_6 > VAR_5) { VAR_6 = VAR_5; }
    void *VAR_7 = FUNC_4 (VAR_6);
    FUNC_0 (VAR_7 != ((void*)0));
    FUNC_2 (VAR_3, VAR_7, VAR_6);
    VAR_2 = FUNC_1 (VAR_3, VAR_6, VAR_2);
    VAR_3 += VAR_6;
    FUNC_3 (VAR_6);
    VAR_1 += VAR_6;
    VAR_4 -= VAR_6;
  }
}
