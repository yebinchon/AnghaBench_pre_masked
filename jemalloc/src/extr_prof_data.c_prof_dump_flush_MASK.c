
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_4(bool VAR_5) {
 bool VAR_6 = 0;
 ssize_t VAR_7;

 FUNC_1(VAR_0);

 VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (VAR_7 == -1) {
  if (!VAR_5) {
   FUNC_2("<jemalloc>: write() failed during heap "
       "profile flush\n");
   if (VAR_1) {
    FUNC_0();
   }
  }
  VAR_6 = 1;
 }
 VAR_3 = 0;

 return VAR_6;
}
