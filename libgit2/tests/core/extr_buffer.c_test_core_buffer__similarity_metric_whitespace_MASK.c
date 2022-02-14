
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ git_hashsig_option_t ;
typedef int git_hashsig ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,int ,int ,scalar_t__) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_hashsig *VAR_3, *VAR_4;
 git_buf VAR_5 = VAR_0;
 int VAR_6, VAR_7, VAR_8;
 git_hashsig_option_t VAR_9;
 const char *VAR_10 =
  "	for (s = 0; s < sizeof(sep) / sizeof(char); ++s) {\n"
  "		separator = sep[s];\n"
  "		expect = expect_values[s];\n"
  "\n"
  "		for (j = 0; j < sizeof(b) / sizeof(char*); ++j) {\n"
  "			for (i = 0; i < sizeof(a) / sizeof(char*); ++i) {\n"
  "				git_buf_join(&buf, separator, a[i], b[j]);\n"
  "				cl_assert_equal_s(*expect, buf.ptr);\n"
  "				expect++;\n"
  "			}\n"
  "		}\n"
  "	}\n";
 const char *VAR_11 =
  "   for (s = 0; s < sizeof(sep) / sizeof(char); ++s) {\n"
  "       separator = sep[s];\n"
  "       expect = expect_values[s];\n"
  "\n"
  "       for (j = 0; j < sizeof(b) / sizeof(char*); ++j) {\n"
  "           for (i = 0; i < sizeof(a) / sizeof(char*); ++i) {\n"
  "               git_buf_join(&buf, separator, a[i], b[j]);\n"
  "               cl_assert_equal_s(*expect, buf.ptr);\n"
  "               expect++;\n"
  "           }\n"
  "       }\n"
  "   }\n";
 const char *VAR_12 =
  "  for (s = 0; s < sizeof(sep) / sizeof(char); ++s) {\r\n"
  "    separator = sep[s];\r\n"
  "    expect = expect_values[s];\r\n"
  "\r\n"
  "    for (j = 0; j < sizeof(b) / sizeof(char*); ++j) {\r\n"
  "      for (i = 0; i < sizeof(a) / sizeof(char*); ++i) {\r\n"
  "        git_buf_join(&buf, separator, a[i], b[j]);\r\n"
  "        cl_assert_equal_s(*expect, buf.ptr);\r\n"
  "        expect++;\r\n"
  "      }\r\n"
  "    }\r\n"
  "  }\r\n";
 const char *VAR_13[3] = { VAR_10, VAR_11, VAR_12 };



 for (VAR_9 = VAR_1; VAR_9 <= VAR_2; ++VAR_9) {
  for (VAR_7 = 0; VAR_7 < 3; ++VAR_7) {
   for (VAR_8 = 0; VAR_8 < 3; ++VAR_8) {
    FUNC_2(FUNC_4(&VAR_5, VAR_13[VAR_7]));
    FUNC_2(FUNC_6(&VAR_3, VAR_5.ptr, VAR_5.size, VAR_9));

    FUNC_2(FUNC_4(&VAR_5, VAR_13[VAR_8]));
    FUNC_2(FUNC_6(&VAR_4, VAR_5.ptr, VAR_5.size, VAR_9));

    VAR_6 = FUNC_5(VAR_3, VAR_4);

    if (VAR_9 == VAR_1) {
     if (VAR_7 == VAR_8)
      FUNC_0(100, VAR_6);
     else
      FUNC_1(0, VAR_6, 30);
    } else {
     FUNC_0(100, VAR_6);
    }

    FUNC_7(VAR_3);
    FUNC_7(VAR_4);
   }
  }
 }

 FUNC_3(&VAR_5);
}
