
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p9_sbe_occ {int sbe; } ;
struct occ_response {int return_status; } ;
struct occ {struct occ_response resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int,struct occ_response*,size_t*) ;
 struct p9_sbe_occ* FUNC_1 (struct occ*) ;

__attribute__((used)) static int FUNC_2(struct occ *VAR_4, u8 *VAR_5)
{
 struct occ_response *VAR_6 = &VAR_4->resp;
 struct p9_sbe_occ *VAR_7 = FUNC_1(VAR_4);
 size_t VAR_8 = sizeof(*VAR_6);
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7->sbe, VAR_5, 8, VAR_6, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 switch (VAR_6->return_status) {
 case 137:
  VAR_9 = -VAR_3;
  break;
 case 128:
  VAR_9 = 0;
  break;
 case 138:
 case 136:
 case 130:
 case 139:
  VAR_9 = -VAR_0;
  break;
 case 129:
 case 140:
 case 135:
 case 133:
 case 131:
 case 132:
 case 134:
  VAR_9 = -VAR_2;
  break;
 default:
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
