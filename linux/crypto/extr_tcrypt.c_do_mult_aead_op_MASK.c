
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct test_mb_aead_data {int wait; int req; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct test_mb_aead_data *VAR_1, int VAR_2,
    u32 VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = 0;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_2 == VAR_0)
   VAR_4[VAR_5] = FUNC_1(VAR_1[VAR_5].req);
  else
   VAR_4[VAR_5] = FUNC_0(VAR_1[VAR_5].req);
 }


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4[VAR_5] = FUNC_2(VAR_4[VAR_5], &VAR_1[VAR_5].wait);

  if (VAR_4[VAR_5]) {
   FUNC_3("concurrent request %d error %d\n", VAR_5, VAR_4[VAR_5]);
   VAR_6 = VAR_4[VAR_5];
  }
 }

 return VAR_6;
}
