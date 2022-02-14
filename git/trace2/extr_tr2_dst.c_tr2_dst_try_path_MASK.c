
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_dst {int fd; int need_close; int initialized; int sysenv_var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tr2_dst*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct tr2_dst *VAR_4, const char *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5, VAR_2 | VAR_0 | VAR_1, 0666);
 if (VAR_6 == -1) {
  if (FUNC_3())
   FUNC_5("trace2: could not open '%s' for '%s' tracing: %s",
    VAR_5,
    FUNC_4(VAR_4->sysenv_var),
    FUNC_1(VAR_3));

  FUNC_2(VAR_4);
  return 0;
 }

 VAR_4->fd = VAR_6;
 VAR_4->need_close = 1;
 VAR_4->initialized = 1;

 return VAR_4->fd;
}
