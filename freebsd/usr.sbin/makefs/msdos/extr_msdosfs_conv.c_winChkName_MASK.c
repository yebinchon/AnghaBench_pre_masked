
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct winentry {int weCnt; int weChksum; int wePart3; int wePart2; int wePart1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int const*,size_t,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int,int) ;

int
FUNC_4(const u_char *VAR_4, size_t VAR_5, struct winentry *VAR_6, int VAR_7)
{
 uint16_t VAR_8[VAR_3], *VAR_9;
 uint16_t VAR_10[VAR_0];
 int VAR_11, VAR_12;




 if (VAR_6->weCnt & VAR_2)
  VAR_7 = VAR_6->weChksum;
 else if (VAR_7 != VAR_6->weChksum)
  VAR_7 = -1;
 if (VAR_7 == -1)
  return -1;




 VAR_11 = ((VAR_6->weCnt & VAR_1) - 1) * VAR_0;




 VAR_12 = FUNC_1(VAR_4, VAR_5, VAR_8, VAR_3);
 FUNC_3(VAR_8, VAR_12, VAR_3);

 if (VAR_11 >= VAR_12 + 1)
  return -1;
 if ((VAR_6->weCnt & VAR_2) && (VAR_12 - VAR_11 > VAR_0))
  return -1;




 VAR_9 = &VAR_10[0];
 FUNC_2(VAR_9, VAR_6->wePart1, sizeof(VAR_6->wePart1));
 VAR_9 += sizeof(VAR_6->wePart1) / sizeof(*VAR_9);
 FUNC_2(VAR_9, VAR_6->wePart2, sizeof(VAR_6->wePart2));
 VAR_9 += sizeof(VAR_6->wePart2) / sizeof(*VAR_9);
 FUNC_2(VAR_9, VAR_6->wePart3, sizeof(VAR_6->wePart3));




 if (!(FUNC_0(&VAR_8[VAR_11], VAR_10, VAR_0)))
  return -1;

 return VAR_7;
}
