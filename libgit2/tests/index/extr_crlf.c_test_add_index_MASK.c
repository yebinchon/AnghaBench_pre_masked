
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct compare_data {char* member_0; char const* member_2; char const* member_3; char const* member_4; char* dirname; int * member_1; } ;
struct TYPE_10__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,char const*) ;
 int FUNC_8 (TYPE_1__*,char const) ;
 int FUNC_9 (TYPE_1__*,char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ,struct compare_data*) ;
 char* FUNC_12 () ;

__attribute__((used)) static void FUNC_13(const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
 git_buf VAR_8 = VAR_0;
 git_buf VAR_9 = VAR_0;
 git_buf VAR_10 = VAR_0;
 git_buf VAR_11 = VAR_0;
 struct compare_data VAR_12 = { FUNC_12(), ((void*)0), VAR_5, VAR_6, VAR_7 };
 const char *VAR_13;

 FUNC_9(&VAR_11, "crlf");

 FUNC_9(&VAR_10, "autocrlf_");
 FUNC_9(&VAR_10, VAR_6);

 FUNC_9(&VAR_10, ",safecrlf_");
 FUNC_9(&VAR_10, VAR_5);

 if (*VAR_7) {
  FUNC_9(&VAR_10, ",");

  for (VAR_13 = VAR_7; *VAR_13; VAR_13++) {
   if (*VAR_13 == ' ')
    FUNC_8(&VAR_10, ',');
   else if (*VAR_13 == '=')
    FUNC_8(&VAR_10, '_');
   else
    FUNC_8(&VAR_10, *VAR_13);
  }

  FUNC_7(&VAR_8, "* %s\n", VAR_7);
  FUNC_2("crlf/.gitattributes", VAR_8.ptr);
 }

 FUNC_4(VAR_4, "core.safecrlf", VAR_5);
 FUNC_4(VAR_4, "core.autocrlf", VAR_6);

 FUNC_3(FUNC_10(VAR_3));

 FUNC_6(&VAR_9, "crlf_data", FUNC_12());
 FUNC_9(&VAR_9, "_to_odb");

 FUNC_6(&VAR_2, VAR_9.ptr, VAR_10.ptr);
 FUNC_1(VAR_2.ptr);

 VAR_12.dirname = VAR_10.ptr;
 FUNC_3(FUNC_11(&VAR_11, 0, VAR_1, &VAR_12));

 FUNC_0(VAR_2.ptr);
 FUNC_5(&VAR_2);

 FUNC_5(&VAR_8);
 FUNC_5(&VAR_2);
 FUNC_5(&VAR_9);
 FUNC_5(&VAR_10);
 FUNC_5(&VAR_11);
}
