
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sockaddr_context {int * orig_dir; } ;
struct strbuf {int dummy; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 int VAR_3 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int * FUNC_4 (struct strbuf*,int *) ;
 scalar_t__ FUNC_5 (struct strbuf*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct sockaddr_un *VAR_4, const char *VAR_5,
         struct unix_sockaddr_context *VAR_6)
{
 int VAR_7 = FUNC_6(VAR_5) + 1;

 VAR_6->orig_dir = ((void*)0);
 if (VAR_7 > sizeof(VAR_4->sun_path)) {
  const char *VAR_8 = FUNC_1(VAR_5);
  const char *VAR_9;
  struct strbuf VAR_10 = VAR_2;

  if (!VAR_8) {
   VAR_3 = VAR_1;
   return -1;
  }

  VAR_9 = VAR_5;
  VAR_5 = VAR_8 + 1;
  VAR_7 = FUNC_6(VAR_5) + 1;
  if (VAR_7 > sizeof(VAR_4->sun_path)) {
   VAR_3 = VAR_1;
   return -1;
  }
  if (FUNC_5(&VAR_10))
   return -1;
  VAR_6->orig_dir = FUNC_4(&VAR_10, ((void*)0));
  if (FUNC_0(VAR_9, VAR_8 - VAR_9) < 0)
   return -1;
 }

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->sun_family = VAR_0;
 FUNC_2(VAR_4->sun_path, VAR_5, VAR_7);
 return 0;
}
