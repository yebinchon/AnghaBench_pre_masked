
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(tsd_t *VAR_1, const size_t *VAR_2,
    size_t VAR_3, void *VAR_4, size_t *VAR_5, void *VAR_6,
    size_t VAR_7) {
 int VAR_8;

 if (!FUNC_2(VAR_1)) {
  VAR_8 = VAR_0;
  goto label_return;
 }

 FUNC_0();
 FUNC_1();

 FUNC_3(VAR_1);

 VAR_8 = 0;
label_return:
 return VAR_8;
}
