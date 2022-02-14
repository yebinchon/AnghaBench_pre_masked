
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ crawlers_only; scalar_t__ ignore_crawlers; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_1)
{
  int VAR_2 = 0;

  if (!VAR_0.ignore_crawlers && !VAR_0.crawlers_only)
    return 1;

  VAR_2 = FUNC_0 (VAR_1);
  return (VAR_0.ignore_crawlers && VAR_2) || (VAR_0.crawlers_only && !VAR_2) ? 0 : 1;
}
