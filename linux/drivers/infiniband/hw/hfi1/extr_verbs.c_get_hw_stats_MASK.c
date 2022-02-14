
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rdma_hw_stats {int value; } ;
struct ib_device {int dummy; } ;
struct hfi1_ibport {int dummy; } ;


 int FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int ,int *,int **) ;
 int FUNC_2 (int ,int *,int **) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct hfi1_ibport*) ;
 struct hfi1_ibport* FUNC_6 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct ib_device *VAR_4, struct rdma_hw_stats *VAR_5,
   u8 VAR_6, int VAR_7)
{
 u64 *VAR_8;
 int VAR_9;

 if (!VAR_6) {
  u64 *VAR_10 = (u64 *)&VAR_0;
  int VAR_11;

  FUNC_1(FUNC_0(VAR_4), ((void*)0), &VAR_8);
  VAR_8[VAR_1] = FUNC_3();
  for (VAR_11 = 1; VAR_11 < VAR_2; VAR_11++)
   VAR_8[VAR_1 + VAR_11] = VAR_10[VAR_11];
  VAR_9 = VAR_1 + VAR_2;
 } else {
  struct hfi1_ibport *VAR_12 = FUNC_6(VAR_4, VAR_6);

  FUNC_2(FUNC_5(VAR_12), ((void*)0), &VAR_8);
  VAR_9 = VAR_3;
 }

 FUNC_4(VAR_5->value, VAR_8, VAR_9 * sizeof(u64));
 return VAR_9;
}
