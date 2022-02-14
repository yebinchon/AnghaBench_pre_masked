
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mem_region {int mr_size; scalar_t__ mr_start; } ;
typedef int platform_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,int ,int,scalar_t__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int,int ,int ,int*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mem_region*,int*,struct mem_region*,int*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(platform_t VAR_0, struct mem_region *VAR_1, int *VAR_2,
    struct mem_region *VAR_3, int *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 int VAR_7;


 if (FUNC_0("/") != -1) {
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
 } else {

  VAR_1[0].mr_start = 0;
  VAR_1[0].mr_size = FUNC_6(VAR_0);
  *VAR_2 = *VAR_4 = 1;
  VAR_3[0] = VAR_1[0];
 }


 FUNC_2(&VAR_5);
 FUNC_3(VAR_5,
     FUNC_4("bi") >> 32,
     FUNC_4("rgntotal"), 0, 0,
     &VAR_1[*VAR_2].mr_size, &VAR_6);
 for (VAR_7 = 0; VAR_7 < *VAR_2; VAR_7++)
  VAR_1[*VAR_2].mr_size -= VAR_1[VAR_7].mr_size;


 VAR_1[*VAR_2].mr_size -= VAR_1[*VAR_2].mr_size % (16*1024*1024);


 FUNC_1(VAR_1[*VAR_2].mr_size, 24 ,
     0, 0x04 , &VAR_1[*VAR_2].mr_start, &VAR_6);
 VAR_3[*VAR_4] = VAR_1[*VAR_2];
 (*VAR_2)++;
 (*VAR_4)++;
}
