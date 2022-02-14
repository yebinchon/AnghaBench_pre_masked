
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 void* FUNC_3 (void*,int,int ) ;

__attribute__((used)) static void
FUNC_4() {

 FUNC_0(1);
 FUNC_0(1024);
 FUNC_0(64 * 1024);
 FUNC_0(256 * 1024);
 FUNC_0(1024 * 1024);


 void *VAR_0 = FUNC_2(129, 0);
 VAR_0 = FUNC_3(VAR_0, 130, 0);
 FUNC_1(VAR_0);

 VAR_0 = FUNC_2(2 * 1024 * 1024, 0);
 FUNC_1(VAR_0);
 VAR_0 = FUNC_2(1 * 1024 * 1024, 0);
 VAR_0 = FUNC_3(VAR_0, 2 * 1024 * 1024, 0);
 FUNC_1(VAR_0);

 VAR_0 = FUNC_2(1, 0);
 VAR_0 = FUNC_3(VAR_0, 1000, 0);
 FUNC_1(VAR_0);
}
