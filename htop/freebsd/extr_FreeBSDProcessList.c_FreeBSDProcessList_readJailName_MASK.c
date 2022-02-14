
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {char ki_jid; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int jnamebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (struct iovec*,int,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int,char*,int ) ;
 char* FUNC_5 (char*) ;

char* FUNC_6(struct kinfo_proc* VAR_4) {
   int VAR_5;
   struct iovec VAR_6[6];
   char* VAR_7;
   char VAR_8[VAR_1];

   if (VAR_4->ki_jid != 0 ){
      FUNC_1(VAR_8, 0, sizeof(VAR_8));
      *(const void **)&VAR_6[0].iov_base = "jid";
      VAR_6[0].iov_len = sizeof("jid");
      VAR_6[1].iov_base = &VAR_4->ki_jid;
      VAR_6[1].iov_len = sizeof(VAR_4->ki_jid);
      *(const void **)&VAR_6[2].iov_base = "name";
      VAR_6[2].iov_len = sizeof("name");
      VAR_6[3].iov_base = VAR_8;
      VAR_6[3].iov_len = sizeof(VAR_8);
      *(const void **)&VAR_6[4].iov_base = "errmsg";
      VAR_6[4].iov_len = sizeof("errmsg");
      VAR_6[5].iov_base = VAR_3;
      VAR_6[5].iov_len = VAR_0;
      VAR_3[0] = 0;
      VAR_5 = FUNC_0(VAR_6, 6, 0);
      if (VAR_5 < 0) {
         if (!VAR_3[0])
            FUNC_4(VAR_3, VAR_0, "jail_get: %s", FUNC_2(VAR_2));
            return ((void*)0);
      } else if (VAR_5 == VAR_4->ki_jid) {
         VAR_7 = FUNC_5(VAR_8);
         if (VAR_7 == ((void*)0))
            FUNC_3(VAR_2, VAR_3, VAR_0);
         return VAR_7;
      } else {
         return ((void*)0);
      }
   } else {
      VAR_8[0]='-';
      VAR_8[1]='\0';
      VAR_7 = FUNC_5(VAR_8);
   }
   return VAR_7;
}
