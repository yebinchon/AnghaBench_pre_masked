
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(uint64_t *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3,
         unsigned int VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 const uint64_t *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_11 = VAR_2;
 VAR_7 = VAR_5[0];
 VAR_8 = VAR_0;
 VAR_10 = FUNC_0(VAR_0);
 VAR_9 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
  VAR_1[VAR_2++] = VAR_8[VAR_6];
 FUNC_1(VAR_1[VAR_9], (VAR_4));
 VAR_9++;
 FUNC_1(VAR_1[VAR_9], 0);
 VAR_9++;
 FUNC_2(VAR_1[VAR_9], (VAR_7 >> 0));
 VAR_9++;
 FUNC_2(VAR_1[VAR_9], (VAR_7 >> 0x10));

 return VAR_2 - VAR_11;
}
