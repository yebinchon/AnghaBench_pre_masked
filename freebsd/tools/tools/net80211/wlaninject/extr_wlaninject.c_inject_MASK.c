
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; struct ieee80211_bpf_params* iov_base; } ;
struct ieee80211_bpf_params {int ibp_len; } ;
typedef int iov ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,struct iovec*,int) ;

void FUNC_4(int VAR_0, void *VAR_1, int VAR_2, struct ieee80211_bpf_params *VAR_3)
{
 struct iovec VAR_4[2];
 int VAR_5;
 int VAR_6;

 VAR_4[0].iov_base = VAR_3;
 VAR_4[0].iov_len = VAR_3->ibp_len;

 VAR_4[1].iov_base = VAR_1;
 VAR_4[1].iov_len = VAR_2;
 VAR_5 = VAR_4[0].iov_len + VAR_4[1].iov_len;

 VAR_6 = FUNC_3(VAR_0, VAR_4, sizeof(VAR_4)/sizeof(struct iovec));
 if (VAR_6 == -1)
  FUNC_0(1, "writev()");
 if (VAR_6 != VAR_5) {
  FUNC_2("Wrote only %d/%d\n", VAR_6, VAR_5);
  FUNC_1(1);
 }
}
