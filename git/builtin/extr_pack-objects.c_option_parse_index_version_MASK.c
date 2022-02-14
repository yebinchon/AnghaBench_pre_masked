
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct TYPE_2__ {int version; int off32_limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_1,
          const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 const char *VAR_5 = VAR_2;

 FUNC_0(VAR_3);

 VAR_0.version = FUNC_3(VAR_5, &VAR_4, 10);
 if (VAR_0.version > 2)
  FUNC_2(FUNC_1("unsupported index version %s"), VAR_5);
 if (*VAR_4 == ',' && VAR_4[1])
  VAR_0.off32_limit = FUNC_3(VAR_4+1, &VAR_4, 0);
 if (*VAR_4 || VAR_0.off32_limit & 0x80000000)
  FUNC_2(FUNC_1("bad index version '%s'"), VAR_5);
 return 0;
}
