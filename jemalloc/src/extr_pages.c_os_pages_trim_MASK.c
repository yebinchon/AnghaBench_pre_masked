
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*,size_t,int ,int*) ;
 int FUNC_2 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3, size_t VAR_4,
    bool *VAR_5) {
 void *VAR_6 = (void *)((uintptr_t)VAR_1 + VAR_3);

 FUNC_0(VAR_2 >= VAR_3 + VAR_4);
 size_t VAR_7 = VAR_2 - VAR_3 - VAR_4;

 if (VAR_3 != 0) {
  FUNC_2(VAR_1, VAR_3);
 }
 if (VAR_7 != 0) {
  FUNC_2((void *)((uintptr_t)VAR_6 + VAR_4), VAR_7);
 }
 return VAR_6;

}
