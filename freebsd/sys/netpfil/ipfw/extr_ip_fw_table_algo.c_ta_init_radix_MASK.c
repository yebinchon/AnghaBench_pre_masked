
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct table_info {int lookup; int state; int xstate; } ;
struct radix_cfg {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct radix_cfg* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_7, void **VAR_8, struct table_info *VAR_9,
    char *VAR_10, uint8_t VAR_11)
{
 struct radix_cfg *VAR_12;

 if (!FUNC_2(&VAR_9->state, VAR_4))
  return (VAR_0);
 if (!FUNC_2(&VAR_9->xstate, VAR_5)) {
  FUNC_1(&VAR_9->state);
  return (VAR_0);
 }

 VAR_12 = FUNC_0(sizeof(struct radix_cfg), VAR_1, VAR_2 | VAR_3);

 *VAR_8 = VAR_12;
 VAR_9->lookup = VAR_6;

 return (0);
}
