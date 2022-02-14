
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
struct sendfile_test {int offset; int length; int file_size; int hdr_length; } ;


 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,struct sendfile_test) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int*,int ) ;
 scalar_t__ FUNC_12 (size_t) ;

__attribute__((used)) static void
FUNC_13(void)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 size_t VAR_7 = 0;

 const int VAR_8 = FUNC_4();

 struct sendfile_test VAR_9[] = {
   { .hdr_length = 0, .offset = 0, .length = 1 },
  { .hdr_length = 0, .offset = 0, .length = VAR_8 },
  { .hdr_length = 0, .offset = 1, .length = 1 },
  { .hdr_length = 0, .offset = 1, .length = VAR_8 },
  { .hdr_length = 0, .offset = VAR_8, .length = VAR_8 },
  { .hdr_length = 0, .offset = 0, .length = 2*VAR_8 },
  { .hdr_length = 0, .offset = 0, .length = 0 },
  { .hdr_length = 0, .offset = VAR_8, .length = 0 },
  { .hdr_length = 0, .offset = 2*VAR_8, .length = 0 },
  { .hdr_length = 0, .offset = VAR_1*VAR_8, .length = 0 },
  { .hdr_length = 0, .offset = 0, .length = VAR_8,
      .file_size = 1 }
 };

 VAR_5 = sizeof(VAR_9) / sizeof(VAR_9[0]);
 FUNC_7("1..%d\n", VAR_5);

 for (VAR_4 = 1; VAR_4 <= VAR_5; VAR_4++) {

  VAR_7 = VAR_9[VAR_4 - 1].file_size;
  if (VAR_7 == 0)
   VAR_7 = VAR_1 * VAR_8;
  if (FUNC_12(VAR_7) != 0) {
   FUNC_7("not ok %d\n", VAR_4);
   continue;
  }

  VAR_6 = FUNC_3();
  if (VAR_6 == -1) {
   FUNC_7("not ok %d\n", VAR_4);
   continue;
  }

  if (VAR_6 == 0)
   FUNC_8();

  FUNC_10(250000);

  if (FUNC_6(&VAR_2) != 0) {
   FUNC_7("not ok %d\n", VAR_4);
   FUNC_5(VAR_6, VAR_0);
   FUNC_2(VAR_2);
   continue;
  }

  if (FUNC_9(VAR_2, VAR_9[VAR_4-1]) != 0) {
   FUNC_7("not ok %d\n", VAR_4);
   FUNC_5(VAR_6, VAR_0);
   FUNC_2(VAR_2);
   continue;
  }

  FUNC_2(VAR_2);
  if (FUNC_11(VAR_6, &VAR_3, 0) == VAR_6) {
   if (FUNC_1(VAR_3) && FUNC_0(VAR_3) == 0)
    FUNC_7("%s %d\n", "ok", VAR_4);
   else
    FUNC_7("%s %d\n", "not ok", VAR_4);
  }
  else {
   FUNC_7("not ok %d\n", VAR_4);
  }
 }
}
