
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,size_t,size_t,int,int *,int,int ) ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int ,int *,int ) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (int *,int *,void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int *) ;

tcache_t *
FUNC_9(tsd_t *VAR_2) {
 size_t VAR_3 = sizeof(tcache_t);

 VAR_3 = FUNC_0(VAR_3);
 size_t VAR_4 = VAR_3;
 VAR_3 += VAR_1;
 size_t VAR_5 = FUNC_6(VAR_3);
 VAR_3 = FUNC_4(VAR_3, VAR_5);

 tcache_t *VAR_6 = FUNC_3(FUNC_8(VAR_2), VAR_3, VAR_5, 1,
     ((void*)0), 1, FUNC_1(VAR_0, 0, 1));
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }

 void *VAR_7 = (void *)((uintptr_t)VAR_6 +
     (uintptr_t)VAR_4);
 FUNC_7(VAR_2, VAR_6, VAR_7);
 FUNC_5(FUNC_8(VAR_2), VAR_6, FUNC_2(VAR_2, ((void*)0)));

 return VAR_6;
}
