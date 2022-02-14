
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {int anchors_nr; int * anchors; int xdl_opts; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct diff_options*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_1,
        const char *VAR_2, int VAR_3)
{
 struct diff_options *VAR_4 = VAR_1->value;
 int VAR_5;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2);
 VAR_4->xdl_opts = FUNC_2(VAR_4, VAR_0);





 for (VAR_5 = 0; VAR_5 < VAR_4->anchors_nr; VAR_5++)
  FUNC_3(VAR_4->anchors[VAR_5]);
 VAR_4->anchors_nr = 0;
 return 0;
}
