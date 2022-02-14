
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int nr; int * oid; } ;
struct object_id {int dummy; } ;
struct diff_options {int output_format; char* orderfile; } ;
struct combine_diff_path {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct diff_options*) ;
 int FUNC_1 (int *,struct object_id const*,char*,struct diff_options*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct diff_options*) ;
 struct combine_diff_path* FUNC_4 (struct combine_diff_path*,int,int,int) ;

__attribute__((used)) static struct combine_diff_path *FUNC_5(const struct object_id *VAR_2,
 const struct oid_array *VAR_3,
 struct diff_options *VAR_4,
 int VAR_5)
{
 struct combine_diff_path *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = VAR_3->nr;

 int VAR_9 = VAR_4->output_format;
 const char *VAR_10 = VAR_4->orderfile;

 VAR_4->output_format = VAR_0;

 VAR_4->orderfile = ((void*)0);


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {




  int VAR_11 = VAR_9 & VAR_1;
  if (VAR_7 == 0 && VAR_11)
   VAR_4->output_format = VAR_11;
  else
   VAR_4->output_format = VAR_0;
  FUNC_1(&VAR_3->oid[VAR_7], VAR_2, "", VAR_4);
  FUNC_3(VAR_4);
  VAR_6 = FUNC_4(VAR_6, VAR_7, VAR_8,
     VAR_5);


  if (VAR_4->output_format != VAR_0 &&
      VAR_10) {
   FUNC_2(VAR_10);
  }

  FUNC_0(VAR_4);
 }

 VAR_4->output_format = VAR_9;
 VAR_4->orderfile = VAR_10;
 return VAR_6;
}
