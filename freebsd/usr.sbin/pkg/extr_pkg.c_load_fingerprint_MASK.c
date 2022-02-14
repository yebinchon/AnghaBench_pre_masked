
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_parser {int dummy; } ;
struct fingerprint {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fingerprint* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct ucl_parser*,char*) ;
 int FUNC_5 (struct ucl_parser*) ;
 int FUNC_6 (struct ucl_parser*) ;
 TYPE_1__* FUNC_7 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int ) ;

__attribute__((used)) static struct fingerprint *
FUNC_10(const char *VAR_2, const char *VAR_3)
{
 ucl_object_t *VAR_4 = ((void*)0);
 struct ucl_parser *VAR_5 = ((void*)0);
 struct fingerprint *VAR_6;
 char VAR_7[VAR_0];

 VAR_6 = ((void*)0);

 FUNC_1(VAR_7, VAR_0, "%s/%s", VAR_2, VAR_3);

 VAR_5 = FUNC_8(0);
 if (!FUNC_4(VAR_5, VAR_7)) {
  FUNC_9("%s: %s", VAR_7, FUNC_6(VAR_5));
  FUNC_5(VAR_5);
  return (((void*)0));
 }

 VAR_4 = FUNC_7(VAR_5);

 if (VAR_4->type == VAR_1)
  VAR_6 = FUNC_0(VAR_4);

 if (VAR_6 != ((void*)0))
  VAR_6->name = FUNC_2(VAR_3);

 FUNC_3(VAR_4);
 FUNC_5(VAR_5);

 return (VAR_6);
}
