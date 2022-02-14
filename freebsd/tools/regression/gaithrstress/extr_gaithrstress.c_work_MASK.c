
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suffixes ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct worker {int w_lookup_failure; int w_lookup_success; struct timespec w_max_lookup_time; } ;
struct addrinfo {int dummy; } ;
struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char**,char*,char*,char*,char*,char const*) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char*,int *,int ,struct addrinfo**) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t const FUNC_5 () ;
 size_t VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 char** VAR_7 ;
 scalar_t__ FUNC_8 () ;
 int VAR_8 ;

__attribute__((used)) static void *
FUNC_9(void *VAR_9)
{
 struct worker *VAR_10 = VAR_9;


 if (VAR_3.options & VAR_2 || FUNC_8() == 0)
  VAR_3.options &= ~VAR_1;
 do {
  const char *VAR_11[] = { "net", "com", "org" };
  const size_t VAR_12 = sizeof(VAR_11) / sizeof(VAR_11[0]);
  struct timespec VAR_13, VAR_14;
  struct addrinfo *VAR_15;
  char *VAR_16;
  int VAR_17;

  FUNC_7(VAR_5);
  if (FUNC_0(&VAR_16, "%s%s%s.%s",
      (FUNC_5() % 2) == 0 ? "www." : "",
      VAR_7[FUNC_5() % VAR_6],
      (FUNC_5() % 3) == 0 ?
      VAR_7[FUNC_5() % VAR_6] : "",
      VAR_11[FUNC_5() % VAR_12]) == -1)
   continue;
  (void)FUNC_1(VAR_0, &VAR_13);
  VAR_17 = FUNC_4(VAR_16, ((void*)0), VAR_4, &VAR_15);
  (void)FUNC_1(VAR_0, &VAR_14);
  VAR_14.tv_sec -= VAR_13.tv_sec;
  VAR_14.tv_nsec -= VAR_13.tv_nsec;
  if (VAR_14.tv_nsec < 0) {
   VAR_14.tv_sec--;
   VAR_14.tv_nsec += 1000000000;
  }
  if (VAR_14.tv_sec > VAR_10->w_max_lookup_time.tv_sec ||
      (VAR_14.tv_sec == VAR_10->w_max_lookup_time.tv_sec &&
      VAR_14.tv_nsec > VAR_10->w_max_lookup_time.tv_sec))
   VAR_10->w_max_lookup_time = VAR_14;
  FUNC_2(VAR_16);
  if (VAR_17 == 0) {
   VAR_10->w_lookup_success++;
   FUNC_3(VAR_15);
  } else {
   VAR_10->w_lookup_failure++;
  }
 } while (!VAR_8);

 FUNC_6(((void*)0));
}
