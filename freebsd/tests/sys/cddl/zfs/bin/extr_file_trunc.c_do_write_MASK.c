
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(int VAR_7)
{
 off_t VAR_8 = 0;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);

 VAR_9 = (char *)FUNC_0(1, VAR_1);
 VAR_10 = (char *)FUNC_0(1, VAR_1);
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0)) {
  FUNC_6("malloc");
  FUNC_1(4);
 }

 VAR_8 = FUNC_7() % VAR_2;
 if (FUNC_4(VAR_7, (VAR_3 + VAR_8), VAR_0) < 0) {
  FUNC_6("lseek");
  FUNC_1(5);
 }

 FUNC_9(VAR_9, "ZFS Test Suite Truncation Test");
 if (FUNC_10(VAR_7, VAR_9, VAR_1) < VAR_1) {
  FUNC_6("write");
  FUNC_1(6);
 }

 if (VAR_4) {
  if (FUNC_4(VAR_7, (VAR_3 + VAR_8), VAR_0) < 0) {
   FUNC_6("lseek");
   FUNC_1(7);
  }

  if (FUNC_8(VAR_7, VAR_10, VAR_1) < VAR_1) {
   FUNC_6("read");
   FUNC_1(8);
  }

  if (FUNC_5(VAR_9, VAR_10, VAR_1) != 0) {
   FUNC_6("memcmp");
   FUNC_1(9);
  }
 }
 if (VAR_6) {
  (void) FUNC_2(VAR_5,
      "Wrote to offset %ld\n", (VAR_3 + VAR_8));
  if (VAR_4) {
   (void) FUNC_2(VAR_5,
       "Read back from offset %ld\n", (VAR_3 + VAR_8));
  }
 }

 (void) FUNC_3(VAR_9);
 (void) FUNC_3(VAR_10);
}
