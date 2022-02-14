
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nl_msg nl_msg ;
struct nl_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nl_msg*,int ,int ,int ,int ,int,int,int ) ;
 int VAR_8 ;
 struct nl_cb* FUNC_4 (int ) ;
 int FUNC_5 (struct nl_cb*) ;
 int FUNC_6 (struct nl_cb*,int ,int ,int (*) (struct nl_msg*,void*),int*) ;
 int FUNC_7 (int ,struct nl_cb*) ;
 int FUNC_8 (int ,struct nl_msg*) ;
 int FUNC_9 (int ) ;
 struct nl_msg* FUNC_10 () ;
 int FUNC_11 (struct nl_msg*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_12(int VAR_11, int (*VAR_12)(struct nl_msg *, void *),
  int (*VAR_13)(struct nl_msg *, void *), void *VAR_14)
{
 struct nl_msg *VAR_15;
 struct nl_cb *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;

 VAR_15 = FUNC_10();
 if (!VAR_15) {
  FUNC_1(VAR_9, "Out of memory!\n");
  FUNC_0(1);
 }

 if (!VAR_13)
  VAR_18 |= VAR_0;

 FUNC_3(VAR_15, VAR_1, VAR_2, FUNC_2(VAR_7), 0, VAR_18, VAR_11, 0);
 if (VAR_13) {
  VAR_19 = VAR_13(VAR_15, VAR_14);
  if (VAR_19 < 0)
   goto nla_put_failure;
 }

 VAR_16 = FUNC_4(VAR_4);
 if (!VAR_16) {
  FUNC_1(VAR_9, "nl_cb_alloc failed.\n");
  FUNC_0(1);
 }

 VAR_19 = FUNC_8(VAR_8, VAR_15);
 if (VAR_19 < 0) {
  FUNC_1(VAR_9, "nl_send_auto_complete failed: %d\n", VAR_19);
  goto out;
 }

 VAR_17 = 0;

 if (VAR_12)
  FUNC_6(VAR_16, VAR_6, VAR_4, VAR_12, VAR_14);

 if (VAR_13)
  FUNC_6(VAR_16, VAR_3, VAR_4, VAR_10, &VAR_17);
 else
  FUNC_6(VAR_16, VAR_5, VAR_4, VAR_10, &VAR_17);

 VAR_19 = FUNC_7(VAR_8, VAR_16);
 if (VAR_19 < 0) {
  goto out;
 }

 if (!VAR_17)
  VAR_19 = FUNC_9(VAR_8);

out:
 if (VAR_16)
  FUNC_5(VAR_16);
nla_put_failure:
 FUNC_11(VAR_15);
 return VAR_19;
}
