
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct filter_params {char const* src; size_t size; int fd; char const* cmd; char const* path; } ;
struct async {int out; struct filter_params* data; int proc; } ;
typedef int async ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct async*) ;
 int FUNC_5 (struct async*,int ,int) ;
 scalar_t__ FUNC_6 (struct async*) ;
 scalar_t__ FUNC_7 (struct strbuf*,int,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*,struct strbuf*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5,
        struct strbuf *VAR_6, const char *VAR_7)
{






 int VAR_8 = 0;
 struct strbuf VAR_9 = VAR_0;
 struct async VAR_10;
 struct filter_params VAR_11;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.proc = VAR_1;
 VAR_10.data = &VAR_11;
 VAR_10.out = -1;
 VAR_11.src = VAR_3;
 VAR_11.size = VAR_4;
 VAR_11.fd = VAR_5;
 VAR_11.cmd = VAR_7;
 VAR_11.path = VAR_2;

 FUNC_3(((void*)0));
 if (FUNC_6(&VAR_10))
  return 0;

 if (FUNC_7(&VAR_9, VAR_10.out, 0) < 0) {
  VAR_8 = FUNC_2(FUNC_0("read from external filter '%s' failed"), VAR_7);
 }
 if (FUNC_1(VAR_10.out)) {
  VAR_8 = FUNC_2(FUNC_0("read from external filter '%s' failed"), VAR_7);
 }
 if (FUNC_4(&VAR_10)) {
  VAR_8 = FUNC_2(FUNC_0("external filter '%s' failed"), VAR_7);
 }

 if (!VAR_8) {
  FUNC_9(VAR_6, &VAR_9);
 }
 FUNC_8(&VAR_9);
 return !VAR_8;
}
