
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_db_pgdir {int page; int db_dma; int order1; int * bits; int order0; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (struct hns_roce_db_pgdir*) ;
 struct hns_roce_db_pgdir* FUNC_3 (int,int ) ;

__attribute__((used)) static struct hns_roce_db_pgdir *FUNC_4(
     struct device *VAR_4)
{
 struct hns_roce_db_pgdir *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_5->order1,
      VAR_1 / VAR_2);
 VAR_5->bits[0] = VAR_5->order0;
 VAR_5->bits[1] = VAR_5->order1;
 VAR_5->page = FUNC_1(VAR_4, VAR_3,
      &VAR_5->db_dma, VAR_0);
 if (!VAR_5->page) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
