
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,int ) ;
 size_t FUNC_1 (size_t,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (void*,size_t,int,int ) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (void*,size_t,int,int ,int,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_9, size_t VAR_10, size_t VAR_11, bool *VAR_12) {
 FUNC_3(FUNC_0(VAR_9, VAR_8) == VAR_9);
 FUNC_3(FUNC_1(VAR_10, VAR_8) == VAR_10);
 FUNC_3(VAR_10 != 0);

 if (VAR_7) {
  *VAR_12 = 1;
 }

 void *VAR_13;
 {
  int VAR_14 = *VAR_12 ? VAR_3 : VAR_4;

  VAR_13 = FUNC_4(VAR_9, VAR_10, VAR_14, VAR_6, -1, 0);
 }
 FUNC_3(VAR_13 != ((void*)0));

 if (VAR_13 == VAR_0) {
  VAR_13 = ((void*)0);
 } else if (VAR_9 != ((void*)0) && VAR_13 != VAR_9) {



  FUNC_5(VAR_13, VAR_10);
  VAR_13 = ((void*)0);
 }

 FUNC_3(VAR_13 == ((void*)0) || (VAR_9 == ((void*)0) && VAR_13 != VAR_9) || (VAR_9 != ((void*)0) &&
     VAR_13 == VAR_9));
 return VAR_13;
}
