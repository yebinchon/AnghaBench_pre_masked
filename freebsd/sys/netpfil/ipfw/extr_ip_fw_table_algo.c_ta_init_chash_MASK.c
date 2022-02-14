
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct table_info {int data; int lookup; int * xstate; int * state; } ;
struct ip_fw_chain {int dummy; } ;
struct chashbhead {int dummy; } ;
struct chash_cfg {int mask4; int mask6; int size4; int size6; int * head6; int * head4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct chash_cfg*,char*) ;
 int FUNC_2 (struct chash_cfg*,int ) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_6, void **VAR_7, struct table_info *VAR_8,
    char *VAR_9, uint8_t VAR_10)
{
 int VAR_11, VAR_12;
 uint32_t VAR_13;
 struct chash_cfg *VAR_14;

 VAR_14 = FUNC_3(sizeof(struct chash_cfg), VAR_0, VAR_1 | VAR_2);

 VAR_14->mask4 = 32;
 VAR_14->mask6 = 128;

 if ((VAR_11 = FUNC_1(VAR_14, VAR_9)) != 0) {
  FUNC_2(VAR_14, VAR_0);
  return (VAR_11);
 }

 VAR_14->size4 = 128;
 VAR_14->size6 = 128;

 VAR_14->head4 = FUNC_3(sizeof(struct chashbhead) * VAR_14->size4, VAR_0,
     VAR_1 | VAR_2);
 VAR_14->head6 = FUNC_3(sizeof(struct chashbhead) * VAR_14->size6, VAR_0,
     VAR_1 | VAR_2);
 for (VAR_12 = 0; VAR_12 < VAR_14->size4; VAR_12++)
  FUNC_0(&VAR_14->head4[VAR_12]);
 for (VAR_12 = 0; VAR_12 < VAR_14->size6; VAR_12++)
  FUNC_0(&VAR_14->head6[VAR_12]);


 *VAR_7 = VAR_14;
 VAR_8->state = VAR_14->head4;
 VAR_8->xstate = VAR_14->head6;


 VAR_13 = FUNC_4(VAR_14->size4) << 8 | FUNC_4(VAR_14->size6);
 if (VAR_14->mask6 == 64) {
  VAR_8->data = (32 - VAR_14->mask4) << 24 | (128 - VAR_14->mask6) << 16|
      VAR_13;
  VAR_8->lookup = VAR_3;
 } else if ((VAR_14->mask6 % 8) == 0) {
  VAR_8->data = (32 - VAR_14->mask4) << 24 |
      VAR_14->mask6 << 13 | VAR_13;
  VAR_8->lookup = VAR_4;
 } else {

  VAR_8->data = (32 - VAR_14->mask4) << 24 |
      VAR_14->mask6 << 16 | VAR_13;
  VAR_8->lookup = VAR_5;
 }

 return (0);
}
