
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_buf_region {int hopnum; int count; } ;


 int FUNC_0 (int,int,int) ;

int FUNC_1(const struct hns_roce_buf_region *VAR_0,
       int VAR_1, int VAR_2)
{
 struct hns_roce_buf_region *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_3 = (struct hns_roce_buf_region *)&VAR_0[VAR_6];
  if (VAR_3->hopnum > 1) {
   VAR_5 = FUNC_0(VAR_3->hopnum, 1, VAR_2);
   if (VAR_5 > 0)
    VAR_4 += (VAR_3->count + VAR_5 - 1) / VAR_5;
  } else {
   VAR_4 += VAR_3->count;
  }
 }

 return VAR_4;
}
