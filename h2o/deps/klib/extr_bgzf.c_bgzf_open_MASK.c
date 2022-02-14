
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * _bgzf_file_t ;
struct TYPE_5__ {int * fp; } ;
typedef int FILE ;
typedef TYPE_1__ BGZF ;


 int * FUNC_0 (char const*,char*) ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char) ;

BGZF *FUNC_6(const char *VAR_0, const char *VAR_1)
{
 BGZF *VAR_2 = 0;
 if (FUNC_5(VAR_1, 'r') || FUNC_5(VAR_1, 'R')) {
  _bgzf_file_t VAR_3;
  if ((VAR_3 = FUNC_0(VAR_0, "r")) == 0) return 0;
  VAR_2 = FUNC_1();
  VAR_2->fp = VAR_3;
 } else if (FUNC_5(VAR_1, 'w') || FUNC_5(VAR_1, 'W')) {
  FILE *VAR_4;
  if ((VAR_4 = FUNC_3(VAR_0, "w")) == 0) return 0;
  VAR_2 = FUNC_2(FUNC_4(VAR_1));
  VAR_2->fp = VAR_4;
 }
 return VAR_2;
}
