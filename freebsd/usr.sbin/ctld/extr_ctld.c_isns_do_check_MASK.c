
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct isns_req {int dummy; } ;
struct isns {int i_addr; struct conf* i_conf; } ;
struct conf {int conf_targets; } ;
struct TYPE_2__ {char const* t_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (struct isns_req*,int,int ,int *) ;
 int FUNC_2 (struct isns_req*) ;
 int FUNC_3 (struct isns_req*,int,char const*) ;
 struct isns_req* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct isns_req*) ;
 scalar_t__ FUNC_6 (struct isns_req*) ;
 int FUNC_7 (int,struct isns_req*) ;
 int FUNC_8 (int,struct isns_req*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_11(struct isns *VAR_2, int VAR_3, const char *VAR_4)
{
 struct conf *VAR_5 = VAR_2->i_conf;
 struct isns_req *VAR_6;
 int VAR_7 = 0;
 uint32_t VAR_8;

 VAR_6 = FUNC_4(VAR_1, VAR_0);
 FUNC_3(VAR_6, 32, FUNC_0(&VAR_5->conf_targets)->t_name);
 FUNC_3(VAR_6, 1, VAR_4);
 FUNC_2(VAR_6);
 FUNC_1(VAR_6, 2, 0, ((void*)0));
 VAR_7 = FUNC_8(VAR_3, VAR_6);
 if (VAR_7 < 0) {
  FUNC_9("send(2) failed for %s", VAR_2->i_addr);
  goto quit;
 }
 VAR_7 = FUNC_7(VAR_3, VAR_6);
 if (VAR_7 < 0) {
  FUNC_9("receive(2) failed for %s", VAR_2->i_addr);
  goto quit;
 }
 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 != 0) {
  FUNC_10("iSNS check error %d for %s", VAR_8, VAR_2->i_addr);
  VAR_7 = -1;
 }
quit:
 FUNC_5(VAR_6);
 return (VAR_7);
}
