
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {long xdl_opts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct diff_options*,int ) ;
 int VAR_0 ;
 long VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 long FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const struct option *VAR_2,
       const char *VAR_3, int VAR_4)
{
 struct diff_options *VAR_5 = VAR_2->value;
 long VAR_6 = FUNC_4(VAR_3);

 FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return FUNC_3(FUNC_2("option diff-algorithm accepts \"myers\", "
          "\"minimal\", \"patience\" and \"histogram\""));


 FUNC_1(VAR_5, VAR_0);
 VAR_5->xdl_opts &= ~VAR_1;
 VAR_5->xdl_opts |= VAR_6;
 return 0;
}
