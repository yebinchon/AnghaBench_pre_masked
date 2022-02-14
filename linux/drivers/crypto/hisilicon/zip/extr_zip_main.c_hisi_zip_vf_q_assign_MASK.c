
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {int qp_num; int ctrl_qp_num; } ;
struct hisi_zip {struct hisi_qm qm; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_qm*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct hisi_zip *VAR_1, int VAR_2)
{
 struct hisi_qm *VAR_3 = &VAR_1->qm;
 u32 VAR_4 = VAR_3->qp_num;
 u32 VAR_5 = VAR_4;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_2)
  return -VAR_0;

 VAR_7 = VAR_3->ctrl_qp_num - VAR_4;
 if (VAR_7 < VAR_2)
  return -VAR_0;

 VAR_6 = VAR_7 / VAR_2;
 for (VAR_8 = 1; VAR_8 <= VAR_2; VAR_8++) {
  if (VAR_8 == VAR_2)
   VAR_6 += VAR_7 % VAR_2;
  VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_5, VAR_6);
  if (VAR_9)
   return VAR_9;
  VAR_5 += VAR_6;
 }

 return 0;
}
