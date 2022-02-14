
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_io_desc {char* piod_addr; size_t piod_len; void* piod_offs; int piod_op; } ;
typedef int pid_t ;
typedef int caddr_t ;


 size_t VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int * FUNC_2 (char*,char,size_t) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 char* FUNC_4 (char*,size_t) ;

__attribute__((used)) static char *
FUNC_5(pid_t VAR_4, uintptr_t VAR_5, int VAR_6)
{
 struct ptrace_io_desc VAR_7;
 char *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11, VAR_12;

 VAR_10 = 0;
 if (VAR_6)
  VAR_11 = VAR_6 + 1;
 else {

  VAR_11 = VAR_1 - ((uintptr_t)VAR_5 % VAR_1);
  if (VAR_11 > VAR_0)
   VAR_11 = VAR_0;
 }
 VAR_12 = VAR_11;
 VAR_8 = FUNC_1(VAR_12);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 for (;;) {
  VAR_7.piod_op = VAR_2;
  VAR_7.piod_offs = (void *)(VAR_5 + VAR_10);
  VAR_7.piod_addr = VAR_8 + VAR_10;
  VAR_7.piod_len = VAR_11;
  if (FUNC_3(VAR_3, VAR_4, (caddr_t)&VAR_7, 0) < 0) {
   FUNC_0(VAR_8);
   return (((void*)0));
  }
  if (FUNC_2(VAR_8 + VAR_10, '\0', VAR_11) != ((void*)0))
   return (VAR_8);
  VAR_10 += VAR_11;
  if (VAR_12 < VAR_0 && VAR_6 == 0) {
   VAR_11 = VAR_0 - VAR_12;
   if (VAR_11 > VAR_1)
    VAR_11 = VAR_1;
   VAR_9 = FUNC_4(VAR_8, VAR_12 + VAR_11);
   if (VAR_9 == ((void*)0)) {
    VAR_8[VAR_12 - 1] = '\0';
    return (VAR_8);
   }
   VAR_8 = VAR_9;
   VAR_12 += VAR_11;
  } else {
   VAR_8[VAR_12 - 1] = '\0';
   return (VAR_8);
  }
 }
}
