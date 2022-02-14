
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static uintmax_t FUNC_3(const char *VAR_1, char **VAR_2)
{
 uintmax_t VAR_3;

 FUNC_0(*VAR_1 == ':');
 VAR_1++;
 VAR_3 = FUNC_2(VAR_1, VAR_2, 10);
 if (*VAR_2 == VAR_1)
  FUNC_1("No value after ':' in mark: %s", VAR_0.buf);
 return VAR_3;
}
