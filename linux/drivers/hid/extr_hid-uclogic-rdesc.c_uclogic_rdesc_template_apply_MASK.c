
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef int head ;
typedef size_t __u8 ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 size_t* FUNC_1 (size_t const*,size_t,int ) ;
 scalar_t__ FUNC_2 (size_t*,size_t const*,int) ;
 int FUNC_3 (int ,int *) ;

__u8 *FUNC_4(const __u8 *VAR_1,
       size_t VAR_2,
       const s32 *VAR_3,
       size_t VAR_4)
{
 static const __u8 VAR_5[] = {128};
 __u8 *VAR_6;
 __u8 *VAR_7;
 s32 VAR_8;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 for (VAR_7 = VAR_6; VAR_7 + sizeof(VAR_5) < VAR_6 + VAR_2;) {
  if (FUNC_2(VAR_7, VAR_5, sizeof(VAR_5)) == 0 &&
      VAR_7[sizeof(VAR_5)] < VAR_4) {
   VAR_8 = VAR_3[VAR_7[sizeof(VAR_5)]];
   FUNC_3(FUNC_0(VAR_8), (s32 *)VAR_7);
   VAR_7 += sizeof(VAR_5) + 1;
  } else {
   VAR_7++;
  }
 }

 return VAR_6;
}
