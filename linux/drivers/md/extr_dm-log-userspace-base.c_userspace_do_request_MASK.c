
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {char* usr_argv_str; int luid; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*,int ,int,char*,int,char*,size_t*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct log_c *VAR_5, const char *VAR_6,
    int VAR_7, char *VAR_8, size_t VAR_9,
    char *VAR_10, size_t *VAR_11)
{
 int VAR_12;






retry:
 VAR_12 = FUNC_3(VAR_6, VAR_5->luid, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11);

 if (VAR_12 != -VAR_2)
  return VAR_12;

 FUNC_0(" Userspace log server not found.");
 while (1) {
  FUNC_5(VAR_4);
  FUNC_4(2*VAR_3);
  FUNC_2("Attempting to contact userspace log server...");
  VAR_12 = FUNC_3(VAR_6, VAR_5->luid, VAR_0,
      VAR_5->usr_argv_str,
      FUNC_6(VAR_5->usr_argv_str) + 1,
      ((void*)0), ((void*)0));
  if (!VAR_12)
   break;
 }
 FUNC_1("Reconnected to userspace log server... DM_ULOG_CTR complete");
 VAR_12 = FUNC_3(VAR_6, VAR_5->luid, VAR_1, ((void*)0),
     0, ((void*)0), ((void*)0));
 if (!VAR_12)
  goto retry;

 FUNC_0("Error trying to resume userspace log: %d", VAR_12);

 return -VAR_2;
}
