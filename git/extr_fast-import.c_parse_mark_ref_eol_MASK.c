
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_2__ {int buf; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*,char**) ;

__attribute__((used)) static uintmax_t FUNC_2(const char *VAR_1)
{
 char *VAR_2;
 uintmax_t VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (*VAR_2 != '\0')
  FUNC_0("Garbage after mark: %s", VAR_0.buf);
 return VAR_3;
}
