
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int root_ba; } ;
struct hns_roce_mtr {TYPE_1__ hem_list; } ;
struct hns_roce_dev {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hns_roce_dev*,TYPE_1__*,int,int*,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct hns_roce_dev *VAR_1, struct hns_roce_mtr *VAR_2,
        int VAR_3, u64 *VAR_4, int VAR_5, u64 *VAR_6)
{
 u64 *VAR_7 = VAR_4;
 int VAR_8;
 int VAR_9 = 0;
 u64 *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_7 == ((void*)0) || VAR_5 < 1)
  goto done;

 VAR_12 = VAR_5;
 while (VAR_12 > 0) {
  VAR_8 = 0;
  VAR_10 = FUNC_0(VAR_1, &VAR_2->hem_list,
        VAR_3 + VAR_9,
        &VAR_8, ((void*)0));
  if (!VAR_10 || !VAR_8)
   goto done;

  VAR_11 = FUNC_2(VAR_8, VAR_12);
  FUNC_1(&VAR_7[VAR_9], VAR_10, VAR_0 * VAR_11);
  VAR_12 -= VAR_11;
  VAR_9 += VAR_11;
 }

done:
 if (VAR_6)
  *VAR_6 = VAR_2->hem_list.root_ba;

 return VAR_9;
}
