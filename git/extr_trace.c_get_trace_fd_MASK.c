
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_key {int initialized; int fd; int need_close; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const*,int,int) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct trace_key*) ;
 int FUNC_10 (char*,char const*,char const*,...) ;

__attribute__((used)) static int FUNC_11(struct trace_key *VAR_5)
{
 const char *VAR_6;


 if (VAR_5->initialized)
  return VAR_5->fd;

 VAR_6 = FUNC_1(VAR_5->key);

 if (!VAR_6 || !FUNC_6(VAR_6, "") ||
     !FUNC_6(VAR_6, "0") || !FUNC_5(VAR_6, "false"))
  VAR_5->fd = 0;
 else if (!FUNC_6(VAR_6, "1") || !FUNC_5(VAR_6, "true"))
  VAR_5->fd = VAR_3;
 else if (FUNC_8(VAR_6) == 1 && FUNC_3(*VAR_6))
  VAR_5->fd = FUNC_0(VAR_6);
 else if (FUNC_2(VAR_6)) {
  int VAR_7 = FUNC_4(VAR_6, VAR_2 | VAR_0 | VAR_1, 0666);
  if (VAR_7 == -1) {
   FUNC_10("could not open '%s' for tracing: %s",
    VAR_6, FUNC_7(VAR_4));
   FUNC_9(VAR_5);
  } else {
   VAR_5->fd = VAR_7;
   VAR_5->need_close = 1;
  }
 } else {
  FUNC_10("unknown trace value for '%s': %s\n"
   "         If you want to trace into a file, then please set %s\n"
   "         to an absolute pathname (starting with /)",
   VAR_5->key, VAR_6, VAR_5->key);
  FUNC_9(VAR_5);
 }

 VAR_5->initialized = 1;
 return VAR_5->fd;
}
