
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct compare_data {char const* member_1; char const* member_2; char* dirname; int * member_0; } ;
struct TYPE_13__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
struct TYPE_14__ {char* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,char*) ;
 int FUNC_7 (TYPE_2__*,char*,char const*) ;
 int FUNC_8 (TYPE_2__*,char const) ;
 int FUNC_9 (TYPE_2__*,char const*) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ,struct compare_data*) ;
 char* VAR_6 ;

__attribute__((used)) static void FUNC_12(const char *VAR_7, const char *VAR_8)
{
 git_buf VAR_9 = VAR_0;
 git_buf VAR_10 = VAR_0;
 git_buf VAR_11 = VAR_0;
 git_buf VAR_12 = VAR_0;
 git_buf VAR_13 = VAR_0;
 git_checkout_options VAR_14 = VAR_2;
 struct compare_data VAR_15 = { ((void*)0), VAR_7, VAR_8 };
 const char *VAR_16;

 FUNC_3(FUNC_9(&VAR_13, "crlf"));

 FUNC_3(FUNC_9(&VAR_11, VAR_6));
 FUNC_3(FUNC_9(&VAR_11, "_to_workdir"));

 FUNC_3(FUNC_9(&VAR_12, "autocrlf_"));
 FUNC_3(FUNC_9(&VAR_12, VAR_7));

 if (*VAR_8) {
  FUNC_3(FUNC_9(&VAR_12, ","));

  for (VAR_16 = VAR_8; *VAR_16; VAR_16++) {
   if (*VAR_16 == ' ')
    FUNC_3(FUNC_8(&VAR_12, ','));
   else if (*VAR_16 == '=')
    FUNC_3(FUNC_8(&VAR_12, '_'));
   else
    FUNC_3(FUNC_8(&VAR_12, *VAR_16));
  }

  FUNC_3(FUNC_7(&VAR_9, "* %s\n", VAR_8));
  FUNC_2("crlf/.gitattributes", VAR_9.ptr);
 }

 FUNC_4(VAR_5, "core.autocrlf", VAR_7);

 FUNC_3(FUNC_6(&VAR_10, VAR_11.ptr, VAR_12.ptr));
 FUNC_3(FUNC_6(&VAR_4, "crlf_data", VAR_10.ptr));
 FUNC_1(VAR_4.ptr);

 VAR_14.checkout_strategy = VAR_1;
 FUNC_3(FUNC_10(VAR_5, &VAR_14));

 VAR_15.dirname = VAR_12.ptr;
 FUNC_3(FUNC_11(&VAR_13, 0, VAR_3, &VAR_15));

 FUNC_0(VAR_4.ptr);
 FUNC_5(&VAR_4);

 FUNC_5(&VAR_9);
 FUNC_5(&VAR_4);
 FUNC_5(&VAR_10);
 FUNC_5(&VAR_12);
 FUNC_5(&VAR_11);
 FUNC_5(&VAR_13);
}
