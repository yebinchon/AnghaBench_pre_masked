
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct diff_filespec {TYPE_1__* driver; } ;
struct TYPE_2__ {char const* word_regex; } ;


 int FUNC_0 (struct diff_filespec*,struct index_state*) ;

__attribute__((used)) static const char *FUNC_1(struct diff_filespec *VAR_0,
           struct index_state *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 return VAR_0->driver->word_regex;
}
