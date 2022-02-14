
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wrerror; void* output; int getline; } ;
struct rerere_io_file {TYPE_1__ io; void* input; } ;
struct rerere_io {int dummy; } ;
struct index_state {int dummy; } ;
typedef int io ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (void*) ;
 void* FUNC_4 (char const*,char*) ;
 int FUNC_5 (unsigned char*,struct rerere_io*,int) ;
 int FUNC_6 (struct index_state*,char const*) ;
 int FUNC_7 (struct rerere_io_file*,int ,int) ;
 int VAR_0 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(struct index_state *VAR_1,
         const char *VAR_2, unsigned char *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 struct rerere_io_file VAR_6;
 int VAR_7 = FUNC_6(VAR_1, VAR_2);

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.io.getline = VAR_0;
 VAR_6.input = FUNC_4(VAR_2, "r");
 VAR_6.io.wrerror = 0;
 if (!VAR_6.input)
  return FUNC_2(FUNC_0("could not open '%s'"), VAR_2);

 if (VAR_4) {
  VAR_6.io.output = FUNC_4(VAR_4, "w");
  if (!VAR_6.io.output) {
   FUNC_2(FUNC_0("could not write '%s'"), VAR_4);
   FUNC_3(VAR_6.input);
   return -1;
  }
 }

 VAR_5 = FUNC_5(VAR_3, (struct rerere_io *)&VAR_6, VAR_7);

 FUNC_3(VAR_6.input);
 if (VAR_6.io.wrerror)
  FUNC_1(FUNC_0("there were errors while writing '%s' (%s)"),
        VAR_2, FUNC_8(VAR_6.io.wrerror));
 if (VAR_6.io.output && FUNC_3(VAR_6.io.output))
  VAR_6.io.wrerror = FUNC_2(FUNC_0("failed to flush '%s'"), VAR_2);

 if (VAR_5 < 0) {
  if (VAR_4)
   FUNC_9(VAR_4);
  return FUNC_1(FUNC_0("could not parse conflict hunks in '%s'"), VAR_2);
 }
 if (VAR_6.io.wrerror)
  return -1;
 return VAR_5;
}
