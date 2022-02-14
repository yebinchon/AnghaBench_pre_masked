
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct test_mb_ahash_data {int wait; int req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static inline int FUNC_3(struct test_mb_ahash_data *VAR_0, u32 VAR_1,
       int *VAR_2)
{
 int VAR_3, VAR_4 = 0;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2[VAR_3] = FUNC_0(VAR_0[VAR_3].req);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2[VAR_3] = FUNC_1(VAR_2[VAR_3], &VAR_0[VAR_3].wait);

  if (VAR_2[VAR_3]) {
   FUNC_2("concurrent request %d error %d\n", VAR_3, VAR_2[VAR_3]);
   VAR_4 = VAR_2[VAR_3];
  }
 }

 return VAR_4;
}
