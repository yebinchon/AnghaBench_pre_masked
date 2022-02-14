
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct amd64_pvt {int fam; int model; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd64_pvt*,unsigned int) ;
 int FUNC_1 (struct amd64_pvt*,unsigned int,scalar_t__,int*) ;
 int FUNC_2 (struct amd64_pvt*,unsigned int,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*,unsigned int) ;
 scalar_t__ FUNC_4 (struct amd64_pvt*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct amd64_pvt *VAR_2,
     u64 VAR_3,
     int *VAR_4)
{
 int VAR_5 = -VAR_1;
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!FUNC_0(VAR_2, VAR_6))
   continue;

  if (VAR_2->fam == 0x15 && VAR_2->model >= 0x30)
   VAR_5 = FUNC_1(VAR_2, VAR_6,
              VAR_3,
              VAR_4);

  else if ((FUNC_3(VAR_2, VAR_6) <= VAR_3) &&
    (FUNC_4(VAR_2, VAR_6) >= VAR_3)) {
   VAR_5 = FUNC_2(VAR_2, VAR_6,
         VAR_3, VAR_4);
   if (VAR_5 >= 0)
    break;
  }
 }
 return VAR_5;
}
