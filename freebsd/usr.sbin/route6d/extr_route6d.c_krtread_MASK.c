
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct rt_msghdr {int rtm_msglen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*,int,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct rt_msghdr*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int*,int ,char*,size_t*,int *,int ) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_6)
{
 int VAR_7[6];
 size_t VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 struct rt_msghdr *VAR_12;
 int VAR_13;
 const char *VAR_14;

 VAR_13 = 0;
 VAR_9 = ((void*)0);
 VAR_7[0] = VAR_1;
 VAR_7[1] = VAR_4;
 VAR_7[2] = 0;
 VAR_7[3] = VAR_0;
 VAR_7[4] = VAR_3;
 VAR_7[5] = 0;
 do {
  if (VAR_13)
   FUNC_5(1);
  VAR_13++;
  VAR_14 = ((void*)0);
  if (VAR_9) {
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
  }
  if (FUNC_6(VAR_7, FUNC_3(VAR_7), ((void*)0), &VAR_8, ((void*)0), 0) < 0) {
   VAR_14 = "sysctl estimate";
   continue;
  }
  if ((VAR_9 = FUNC_2(VAR_8)) == ((void*)0)) {
   VAR_14 = "malloc";
   continue;
  }
  if (FUNC_6(VAR_7, FUNC_3(VAR_7), VAR_9, &VAR_8, ((void*)0), 0) < 0) {
   VAR_14 = "sysctl NET_RT_DUMP";
   continue;
  }
 } while (VAR_13 < VAR_5 && VAR_14 != ((void*)0));
 if (VAR_14) {
  FUNC_0("%s (with %d retries, msize=%lu)", VAR_14, VAR_13,
      (u_long)VAR_8);

 } else if (1 < VAR_13)
  FUNC_7(VAR_2, "NET_RT_DUMP %d retires", VAR_13);

 VAR_11 = VAR_9 + VAR_8;
 for (VAR_10 = VAR_9; VAR_10 < VAR_11; VAR_10 += VAR_12->rtm_msglen) {
  VAR_12 = (struct rt_msghdr *)(void *)VAR_10;
  FUNC_4(VAR_12, VAR_6);
 }
 FUNC_1(VAR_9);
}
