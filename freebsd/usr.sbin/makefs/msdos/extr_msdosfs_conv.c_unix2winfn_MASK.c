
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef char u_char ;
struct winentry {int weCnt; int weChksum; int wePart3; int wePart2; int wePart1; scalar_t__ weReserved2; scalar_t__ weReserved1; int weAttributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,size_t,int *,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct winentry*,int,int) ;
 int FUNC_3 (int *,int,int) ;

int
FUNC_4(const u_char *VAR_4, size_t VAR_5, struct winentry *VAR_6, int VAR_7,
    int VAR_8)
{
 uint16_t VAR_9[VAR_3], *VAR_10;
 int VAR_11, VAR_12;
 const u_char *VAR_13;




 for (VAR_13 = VAR_4 + VAR_5; VAR_5 > 0; VAR_5--)
  if (*--VAR_13 != ' ' && *VAR_13 != '.')
   break;




 VAR_11 = (VAR_7 - 1) * VAR_1;




 VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_9, VAR_3);
 FUNC_3(VAR_9, VAR_12, VAR_3);




 FUNC_2(VAR_6, 0xff, sizeof(*VAR_6));
 VAR_6->weCnt = VAR_7;
 VAR_6->weAttributes = VAR_0;
 VAR_6->weReserved1 = 0;
 VAR_6->weChksum = VAR_8;
 VAR_6->weReserved2 = 0;




 VAR_10 = &VAR_9[VAR_11];
 FUNC_1(VAR_6->wePart1, VAR_10, sizeof(VAR_6->wePart1));
 VAR_10 += sizeof(VAR_6->wePart1) / sizeof(*VAR_10);
 FUNC_1(VAR_6->wePart2, VAR_10, sizeof(VAR_6->wePart2));
 VAR_10 += sizeof(VAR_6->wePart2) / sizeof(*VAR_10);
 FUNC_1(VAR_6->wePart3, VAR_10, sizeof(VAR_6->wePart3));

 if (VAR_12 > VAR_11 + VAR_1)
  return 1;

 VAR_6->weCnt |= VAR_2;
 return 0;
}
