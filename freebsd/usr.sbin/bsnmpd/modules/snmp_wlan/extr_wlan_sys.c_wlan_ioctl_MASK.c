
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211req {int i_val; size_t i_len; void* i_data; int i_type; int i_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,char*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(char *VAR_6, uint16_t VAR_7, int *VAR_8, void *VAR_9,
     size_t *VAR_10, int VAR_11)
{
 struct ieee80211req VAR_12;

 FUNC_1(&VAR_12, 0, sizeof(struct ieee80211req));
 FUNC_3(VAR_12.i_name, VAR_6, VAR_0);

 VAR_12.i_type = VAR_7;
 VAR_12.i_val = *VAR_8;
 VAR_12.i_len = *VAR_10;
 VAR_12.i_data = VAR_9;

 if (FUNC_0(VAR_5, VAR_11 ? VAR_3 : VAR_2, &VAR_12) < 0) {
  FUNC_4(VAR_1, "iface %s - %s param: ioctl(%d) "
      "failed: %s", VAR_6, VAR_11 ? "set" : "get",
      VAR_7, FUNC_2(VAR_4));
  return (-1);
 }

 *VAR_10 = VAR_12.i_len;
 *VAR_8 = VAR_12.i_val;

 return (0);
}
