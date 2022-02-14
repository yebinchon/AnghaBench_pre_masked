
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dmatest_data {int cnt; scalar_t__* raw; scalar_t__* aligned; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct dmatest_data*,unsigned int) ;
 void* FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dmatest_data *VAR_2,
  unsigned int VAR_3, u8 VAR_4)
{
 unsigned int VAR_5 = 0;

 VAR_2->raw = FUNC_2(VAR_2->cnt + 1, sizeof(u8 *), VAR_1);
 if (!VAR_2->raw)
  return -VAR_0;

 VAR_2->aligned = FUNC_2(VAR_2->cnt + 1, sizeof(u8 *), VAR_1);
 if (!VAR_2->aligned)
  goto err;

 for (VAR_5 = 0; VAR_5 < VAR_2->cnt; VAR_5++) {
  VAR_2->raw[VAR_5] = FUNC_3(VAR_3 + VAR_4, VAR_1);
  if (!VAR_2->raw[VAR_5])
   goto err;


  if (VAR_4)
   VAR_2->aligned[VAR_5] = FUNC_0(VAR_2->raw[VAR_5], VAR_4);
  else
   VAR_2->aligned[VAR_5] = VAR_2->raw[VAR_5];
 }

 return 0;
err:
 FUNC_1(VAR_2, VAR_5);
 return -VAR_0;
}
