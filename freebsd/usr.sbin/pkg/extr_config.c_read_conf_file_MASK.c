
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_parser {int dummy; } ;
typedef int pkg_conf_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct ucl_parser*,char const*) ;
 int FUNC_5 (struct ucl_parser*) ;
 int FUNC_6 (struct ucl_parser*) ;
 TYPE_1__* FUNC_7 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_6, pkg_conf_file_t VAR_7)
{
 struct ucl_parser *VAR_8;
 ucl_object_t *VAR_9 = ((void*)0);

 VAR_8 = FUNC_8(0);

 if (!FUNC_4(VAR_8, VAR_6)) {
  if (VAR_5 != VAR_2)
   FUNC_1(VAR_3, "Unable to parse configuration "
       "file %s: %s", VAR_6, FUNC_6(VAR_8));
  FUNC_5(VAR_8);

  return (1);
 }

 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9->type != VAR_4)
  FUNC_9("Invalid configuration format, ignoring the "
      "configuration file %s", VAR_6);
 else {
  if (VAR_7 == VAR_0)
   FUNC_0(VAR_9, VAR_7);
  else if (VAR_7 == VAR_1)
   FUNC_2(VAR_9);
 }

 FUNC_3(VAR_9);
 FUNC_5(VAR_8);

 return (0);
}
