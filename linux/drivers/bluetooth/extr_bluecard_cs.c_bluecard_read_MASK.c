
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3, unsigned int VAR_4, __u8 *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_1, VAR_3 + VAR_0);

 VAR_9 = FUNC_0(VAR_3 + VAR_4);
 VAR_8 = 0;
 VAR_7 = 1;

 while (VAR_8 < VAR_9) {

  if (VAR_7 == 16) {
   FUNC_1(VAR_2, VAR_3 + VAR_0);
   VAR_7 = 0;
  }

  VAR_5[VAR_8] = FUNC_0(VAR_3 + VAR_4 + VAR_7);

  VAR_8++;
  VAR_7++;

 }

 return VAR_9;
}
